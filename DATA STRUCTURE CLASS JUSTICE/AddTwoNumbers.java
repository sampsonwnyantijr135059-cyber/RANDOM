import java.util.Scanner; // Import the Scanner class to read user input

public class AddTwoNumbers {
    public static void main(String[] args) {
        // Create a Scanner object to read from the console
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for the first number
        System.out.print("Enter the first number: ");
        double firstNumber = scanner.nextDouble();

        // Prompt the user for the second number
        System.out.print("Enter the second number: ");
        double secondNumber = scanner.nextDouble();

        // Close the scanner object to prevent memory leaks
        scanner.close();

        // Calculate the sum of the two numbers
        double sum = firstNumber + secondNumber;

        // Display the final result
        System.out.println("The sum of " + firstNumber + " and " + secondNumber + " is: " + sum);
    }
}
