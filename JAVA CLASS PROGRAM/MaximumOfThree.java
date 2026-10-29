import java.util.Scanner;

public class MaximumOfThree {
    public static void main(String[] args) {
        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);
        
        // Prompt user to enter three numbers
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();
        
        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();
        
        System.out.print("Enter the third number: ");
        double num3 = scanner.nextDouble();
        
        // Variable to store the maximum number
        double max;
        
        // Determine the maximum using if-else logic
        if (num1 >= num2 && num1 >= num3) {
            max = num1;
        } else if (num2 >= num1 && num2 >= num3) {
            max = num2;
        } else {
            max = num3;
        }
        
        // Display the final result
        System.out.println("The maximum number is: " + max);
        
        // Close the scanner resource
        scanner.close();
    }
}