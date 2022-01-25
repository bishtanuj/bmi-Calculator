// Program to calculate BMI

import java.util.*;

public class bmiCalculator
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            // Scanning the height from the user
            System.out.print("Enter your height in metre: ");
            float height = sc.nextFloat();

            // Scanning the weight from the user
            System.out.print("Enter your weight in kilogram: ");
            float weight = sc.nextFloat();

            // Calculating the BMI
            float BMI = weight / (height * height);
           
            System.out.println();

            // Printing the BMI
            System.out.println("Your BMI: " + BMI);

            // Printing the conclusion
            if(BMI < 18.5)
            {
                System.out.println("Conclusion: UNDERWEIGHT");
            }
            else if(BMI > 18.5 && BMI < 24.9)
            {
                System.out.println("Conclusion: HEALTHY");
            }
            else if(BMI > 25.0 && BMI < 29.9)
            {
                System.out.println("Conclusion:  OVERWEIGHT");
            }
            else
            {
                System.out.println("Conclusion:  OBESE");
            }
        }
    }
}
