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

# OutPut

# UPI Transactions with Risk Score:

#    amount  hour  is_new_receiver  tx_count_last_1hr  risk_score
# 0     120    14                0                  1           0
# 1     350    16                0                  2           0
# 2    5000     2                1                  6           3
# 3      50     3                1                  5           2
# 4     900    11                0                  1           0
# 5    1200    22                1                  2           1
# 6      30     1                1                  7           3
# 7     200    10                0                  1           0
# 8    8000     0                1                  4           3
# 9     400    18                0                  2           0
