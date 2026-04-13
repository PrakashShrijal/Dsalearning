import pandas as pd
import random

def generate_data(n=1000):
    data = []

    for _ in range(n):
        amount = random.randint(10, 10000)
        hour = random.randint(0, 23)
        is_new_receiver = random.choice([0, 1])
        tx_count_last_1hr = random.randint(1, 8)

        data.append([amount, hour, is_new_receiver, tx_count_last_1hr])

    df = pd.DataFrame(data, columns=[
        "amount",
        "hour",
        "is_new_receiver",
        "tx_count_last_1hr"
    ])

    return df