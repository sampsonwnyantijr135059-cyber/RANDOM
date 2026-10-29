import java.util.Scanner;

public class FindMaximum {
    public static void main(String[] args) {
        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);
        
        // Prompt user for the first number
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();
        
        // Prompt user for the second number
        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();
        
        // Evaluate and print the maximum number
        if (num1 > num2) {
            System.out.println("The maximum number is: " + num1);
        } else if (num2 > num1) {
            System.out.println("The maximum number is: " + num2);
        } else {
            System.out.println("Both numbers are equal.");
        }
        
        // Close the scanner resource
        scanner.close();
    }
}