import pandas as pd
from sklearn.ensemble import IsolationForest


data = pd.read_csv("data/upi_transactions.csv")

def calculate_risk(row):
    risk_score = 0

    # Rule 1: Odd hour transaction
    if row["hour"] >= 0 and row["hour"] <= 5:
        risk_score += 1

    # Rule 2: New receiver
    if row["is_new_receiver"] == 1:
        risk_score += 1

    # Rule 3: Too many transactions in 1 hour
    if row["tx_count_last_1hr"] > 5:
        risk_score += 1

    # Rule 4: High amount
    if row["amount"] > 5000:
        risk_score += 1

    return risk_score

def risk_level(score):
    if score == 0:
        return "LOW"
    elif score == 1:
        return "MEDIUM"
    else:
        return "HIGH"



# Apply risk calculation to each row
data["risk_score"] = data.apply(calculate_risk, axis=1)
data["risk_level"] = data["risk_score"].apply(risk_level)


print("\nUPI Transactions with Risk Score:\n")
print(data)

print("\n🚨 HIGH RISK TRANSACTIONS:\n")

high_risk = data[data["risk_level"] == "HIGH"]

if len(high_risk) == 0:
    print("No high-risk transactions found.")
else:
    for index, row in high_risk.iterrows():
        print(f"Transaction {index}:")
        print(f"  Amount: ₹{row['amount']}")
        print(f"  Time: {row['hour']} hour")
        print(f"  New Receiver: {row['is_new_receiver']}")
        print(f"  Transactions in last 1 hr: {row['tx_count_last_1hr']}")
        print("  ⚠️ ALERT: Suspicious transaction detected!\n")

print(f"Total High Risk Transactions: {len(high_risk)}")


print("\nRunning ML Anomaly Detection...\n")

# Select numerical features for ML
features = data[["amount", "hour", "is_new_receiver", "tx_count_last_1hr"]]

# Create Isolation Forest model
model = IsolationForest(contamination=0.3, random_state=42)

# Train model
model.fit(features)

# Predict anomalies (-1 = anomaly, 1 = normal)
data["ml_prediction"] = model.predict(features)

# Convert prediction to readable format
data["ml_result"] = data["ml_prediction"].apply(
    lambda x: "ANOMALY" if x == -1 else "NORMAL"
)

print("ML Detection Results:\n")
print(data[["amount", "risk_level", "ml_result"]])

