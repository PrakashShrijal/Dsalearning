public class CompareStrings {
    public static void main(String[] args) {

        String str1 = "OpenAI";
        String str2 = "openai";

        // 1. Using equals() – case-sensitive comparison
        System.out.println("1. Using equals():");
        if (str1.equals(str2)) {  
            System.out.println("Strings are equal (case-sensitive)");
        } else {
            System.out.println("Strings are NOT equal (case-sensitive)");
        }

        // 2. Using equalsIgnoreCase() – case-insensitive comparison
        System.out.println("\n2. Using equalsIgnoreCase():");
        if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Strings are equal (case-insensitive)");
        } else {
            System.out.println("Strings are NOT equal (case-insensitive)");
        }

        // 3. Using compareTo() – lexicographical comparison
        System.out.println("\n3. Using compareTo():");
        int result = str1.compareTo(str2);
        if (result == 0) {
            System.out.println("Strings are equal (lexicographically)");
        } else if (result < 0) {
            System.out.println("str1 comes before str2");
        } else {
            System.out.println("str1 comes after str2");
        }
    }
}
