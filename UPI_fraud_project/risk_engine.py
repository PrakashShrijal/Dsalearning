def calculate_risk(row):
    risk_score = 0

    if 0 <= row["hour"] <= 5:
        risk_score += 1

    if row["is_new_receiver"] == 1:
        risk_score += 1

    if row["tx_count_last_1hr"] > 5:
        risk_score += 1

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