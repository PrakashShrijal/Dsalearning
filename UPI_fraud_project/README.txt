Digital Payment Fraud Pattern Detector (UPI-Focused)

Project Overview

With the rapid growth of UPI transactions in India,
 digital payment fraud has become a significant concern. 
 Fraudulent transactions often follow unusual behavior patterns such as:
Late-night transfers
Transactions to new receivers
High-frequency transfers within a short time
Large transaction amounts

This project builds a Python-based fraud detection system that analyzes UPI transaction behavior and
identifies suspicious transactions using both rule-based logic and anomaly detection.

Problem Statement
As UPI adoption increases, detecting suspicious digital payment activity becomes critical. Traditional systems rely on predefined rules, but fraud patterns evolve over time. Therefore, a hybrid approach combining rule-based detection and machine learning can improve fraud identification.

Objective
To develop a system that:
Analyzes transaction behavior patterns
Assigns a fraud risk score
Classifies transactions into risk categories
Detects anomalous transactions using machine learning

System Workflow
The system follows these steps:
Synthetic Data Generation
Generates realistic UPI transaction records.
Injects suspicious transaction patterns for testing.

Feature Processing
Uses the following attributes:
Transaction amount
Transaction hour (0–23)
New receiver indicator
Transaction count in last 1 hour
Rule-Based Risk Scoring

Applies predefined rules:
Odd-hour transactions (0–5 AM)
New receiver transactions
High transaction frequency
Large transaction amounts
Assigns a numerical risk score.
Risk Classification
LOW
MEDIUM
HIGH

Machine Learning Detection
Uses Isolation Forest for anomaly detection.
Identifies unusual transaction behavior patterns.
Labels transactions as NORMAL or ANOMALY.
Alert System
Flags high-risk transactions.
Displays suspicious activity details.


Technologies Used
Python
Pandas
Scikit-learn (Isolation Forest)

Key Features
Hybrid fraud detection (Rule-Based + ML)
Behavior-based risk scoring
Anomaly detection without labeled fraud data
Synthetic dataset generation
Modular and scalable design

Why Isolation Forest?
Fraud transactions are rare compared to normal transactions. Isolation Forest is suitable for anomaly detection in such imbalanced datasets because it isolates abnormal observations efficiently.
Limitations
Uses synthetic data instead of real banking data.
Rules are predefined and may not capture all fraud patterns.
Model performance depends on dataset size and feature selection.

Future Enhancements
Real-time transaction monitoring
Integration with web-based dashboard
Advanced ML models trained on labeled fraud data
API integration for fintech systems.