public class StringFunction
 {
    public static void main(String[] args) {

        String original = "Hello, Java Programming!";
        String compareTo = "hello, java programming!";

        // 1. length()
        System.out.println("1. Length of string: " + original.length());

        // 2. toUpperCase()
        System.out.println("2. Uppercase: " + original.toUpperCase());

        // 3. charAt()
        System.out.println("3. Character at index 7: " + original.charAt(7));

        // 4. substring()
        System.out.println("4. Substring (7 to 11): " + original.substring(7, 11));

        // 5. replace()
        System.out.println("5. Replace 'Java' with 'Python': " + original.replace("Java", "Python"));

        // 6. equalsIgnoreCase()
        System.out.println("6. Equals ignore case: " + original.equalsIgnoreCase(compareTo));

        // 7. split()
        String[] words = original.split(" ");
        System.out.println("7. Splitting words:");
        for (String wo  rd : words) {
            System.out.println(" - " + word);
        }
    }
}

