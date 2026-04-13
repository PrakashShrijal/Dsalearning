import pandas as pd
from data_generator import generate_data
from risk_engine import calculate_risk, risk_level
from ml_model import run_ml_model


# Step 1: Generate Dataw
data = generate_data(1000)

# Step 2: Rule-Based Detection
data["risk_score"] = data.apply(calculate_risk, axis=1)
data["risk_level"] = data["risk_score"].apply(risk_level)

# Step 3: ML Detection
data = run_ml_model(data)

# Step 4: High Risk Alerts
print("\n HIGH RISK TRANSACTIONS:\n")

high_risk = data[data["risk_level"] == "HIGH"]

for index, row in high_risk.iterrows():
    print(f"Transaction {index}: ₹{row['amount']} | Time: {row['hour']}")

print(f"\nTotal High Risk Transactions: {len(high_risk)}")


# Step 5: Comparison (VERY IMPORTANT FOR PLACEMENT)
print("\n Rule vs ML Comparison:\n")

comparison = data.groupby(["risk_level", "ml_result"]).size()
print(comparison)


# Step 6: Summary (Add at the end)

print("\n Summary:")
print("Total Transactions:", len(data))

anomalies = len(data[data["ml_result"] == "ANOMALY"])
print("Anomalies Detected (ML):", anomalies)

print("Anomaly Percentage:", round((anomalies / len(data)) * 100, 2), "%")