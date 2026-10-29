import java.util.Scanner; // Import the Scanner class to read user input

public class AddThreeNumbers {
    public static void main(String[] args) {
        // Create a Scanner object named 'scanner' to read from the console
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user and read the first number
        System.out.print("Enter num1: ");
        int num1 = scanner.nextInt();
        
        // Prompt the user and read the second number
        System.out.print("Enter num2: ");
        int num2 = scanner.nextInt();
        
        // Prompt the user and read the third number
        System.out.print("Enter num3: ");
        int num3 = scanner.nextInt();
		
        // Step 2: Add the numbers together
        int sum = num1 + num2 + num3;

        // Step 3: Print the result
        System.out.println("The sum is: " + sum);
		
		scanner.close();
    }
}
