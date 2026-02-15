import pandas as pd

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


# Apply risk calculation to each row
data["risk_score"] = data.apply(calculate_risk, axis=1)

print("\nUPI Transactions with Risk Score:\n")
print(data)
