import pandas as pd

# Load the dataset
data = pd.read_csv("data/upi_transactions.csv")

print("UPI Transactions Data:\n")
print(data)

print("\nBasic Information:\n")
print(data.info())
