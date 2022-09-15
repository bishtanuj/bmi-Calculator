# Program to calculate BMI

# scanning the height from the user
height <- readline("Enter your height in metre: ")
height <- as.numeric(height)

# scanning the weight from the user
weight <- readline("Enter your weight in kilogram: ")
weight <- as.numeric(weight)

bmi <- weight / (height ^ 2)
print(paste("Your BMI:", bmi))

# printing conclusion of BMI
if (bmi < 18.5) {
    print("Conclusion: UNDERWEIGHT")
} else if (bmi > 18.5 && bmi < 24.9) {
    print("Conclusion: HEALTHY")
} else if (bmi > 25.0 && bmi < 29.9) {
    print("Conclusion: OVERWEIGHT")
} else {
    print("Conclusion: OBESE")
}
