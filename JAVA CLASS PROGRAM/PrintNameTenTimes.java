import java.util.Scanner;

public class PrintNameTenTimes {
    public static void main(String[] args) {
        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user to enter their name
        System.out.print("Please enter your name: ");
        String name = scanner.nextLine();
        
        System.out.println("\nPrinting your name 10 times:");
        
        // For loop that runs exactly 10 times (from i = 0 to i = 9)
        for (int i = 0; i < 10; i++) {
            System.out.println((i + 1) + ". " + name);
        }
        
        // Close the scanner resource
        scanner.close();
    }
}