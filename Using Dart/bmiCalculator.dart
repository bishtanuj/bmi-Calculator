// Program to calculate BMI

import 'dart:io';

void main() {
  // Scanning the height from the user
  stdout.write("Enter your height in metre: ");
  double? height = double.parse(stdin.readLineSync()!);

  // Scanning the weight from the user
  stdout.write("Enter your weight in kilogram: ");
  double? weight = double.parse(stdin.readLineSync()!);

  // Calculating BMI
  double? bmi = weight / (height * height);

  // Printing the BMI
  print("Your BMI: $bmi");

  // Printing the conclusion
  if (bmi < 18.5) {
    print("Conclusion: UNDERWEIGHT");
  } else if (bmi > 18.5 && bmi < 24.9) {
    print("Conclusion: HEALTHY");
  } else if (bmi > 25.0 && bmi < 29.9) {
    print("Conclusion: OVERWEIGHT");
  } else {
    print("Conlusion: OBESE");
  }
}
