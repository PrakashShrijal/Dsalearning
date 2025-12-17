public class PaymentSystem {

    // Interface definition
    interface Payment {
        void processPayment(double amount);
    }

    // Implementation for Credit Card
    static class CreditCardPayment implements Payment {
        @Override
        public void processPayment(double amount) {
            System.out.println("Processing credit card payment of $" + amount);
        }
    }

    // Implementation for PayPal
    static class PayPalPayment implements Payment {
        @Override
        public void processPayment(double amount) {
            System.out.println("Processing PayPal payment of $" + amount);
        }
    }

    // Implementation for Bank Transfer
    static class BankTransferPayment implements Payment {
        @Override
        public void processPayment(double amount) {
            System.out.println("Processing bank transfer payment of $" + amount);
        }
    }

    // Service class to make a payment
    static class PaymentService {
        public void makePayment(Payment paymentMethod, double amount) {
            paymentMethod.processPayment(amount);
        }
    }

    // Main method to test the system
    public static void main(String[] args) {
        PaymentService service = new PaymentService();

        // Making payments with different methods
        service.makePayment(new CreditCardPayment(), 100.00);
        service.makePayment(new PayPalPayment(), 200.50);
        service.makePayment(new BankTransferPayment(), 350.75);
    }
}

