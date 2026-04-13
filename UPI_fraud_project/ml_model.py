from sklearn.ensemble import IsolationForest

def run_ml_model(data):
    features = data[[
        "amount",
        "hour",
        "is_new_receiver",
        "tx_count_last_1hr"
    ]]

    model = IsolationForest(contamination=0.3, random_state=42)
    model.fit(features)

    data["ml_prediction"] = model.predict(features)

    data["ml_result"] = data["ml_prediction"].apply(
        lambda x: "ANOMALY" if x == -1 else "NORMAL"
    )

    return data