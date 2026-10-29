import java.util.Scanner;

public class SumAndAverage {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int sum = 0;
        double average;
        int totalNumbers = 10;
        
        System.out.println("Enter 10 numbers:");
        
	for (int i = 1; i <= totalNumbers; i++) {
            System.out.print("Enter number " + i + ": ");
            int number = input.nextInt();
            sum += number;
        }
        
        average = (double) sum / totalNumbers;
        
        System.out.println("\n--- Results ---");
        System.out.println("Sum of the 10 numbers: " + sum);
        System.out.println("Average of the 10 numbers: " + average);
        
        input.close();
    }
}