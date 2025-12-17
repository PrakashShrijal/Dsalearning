public class MultipleInheritance {

    // First interface
    interface WiFiEnabled {  
        void connectToWiFi(String network);
    }

    // Second interface
    interface BluetoothEnabled {
        void pairWithDevice(String deviceName);
    }

    // Class implementing multiple interfaces
    static class SmartDevice implements WiFiEnabled, BluetoothEnabled {
        @Override
        public void connectToWiFi(String network) {
            System.out.println("Connecting to WiFi network: " + network);
        }

        @Override
        public void pairWithDevice(String deviceName) {
            System.out.println("Pairing with Bluetooth device: " + deviceName);
        }

        public void showStatus() {
            System.out.println("SmartDevice ready with WiFi and Bluetooth");
        }
    }

    // Main method to test it
    public static void main(String[] args) {
        SmartDevice myDevice = new SmartDevice();
        myDevice.connectToWiFi("Home_Network");
        myDevice.pairWithDevice("Bluetooth Speaker");
        myDevice.showStatus();
    }
}
