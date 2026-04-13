import streamlit as st
import pandas as pd
from data_generator import generate_data
from risk_engine import calculate_risk, risk_level
from ml_model import run_ml_model

st.title("💳 UPI Fraud Detection System")

# Generate Data
data = generate_data(200)

# Apply Rule-Based System
data["risk_score"] = data.apply(calculate_risk, axis=1)
data["risk_level"] = data["risk_score"].apply(risk_level)

# Apply ML
data = run_ml_model(data)

# Show Data
st.subheader("Transaction Data")
st.dataframe(data.head(20))

# Show High Risk
st.subheader("🚨 High Risk Transactions")
high_risk = data[data["risk_level"] == "HIGH"]
st.write(high_risk)

# Summary
st.subheader("📊 Summary")
total = len(data)
anomalies = len(data[data["ml_result"] == "ANOMALY"])

st.write(f"Total Transactions: {total}")
st.write(f"Anomalies Detected: {anomalies}")
st.write(f"Anomaly %: {round((anomalies/total)*100,2)}%")