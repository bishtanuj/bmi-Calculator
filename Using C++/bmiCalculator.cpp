// Program to calculate BMI

#include<iostream>

using namespace std;
int main()
{
    float height, weight, BMI;

    //Scanning the height from the user
    cout << "Enter your height in metre: ";
    cin >> height;

    // Scanning the weight from the user
    cout << "Enter your weight in kilogram: ";
    cin >> weight;

    BMI = weight / (height * height);
    cout << "\nYour BMI: " << BMI;

    // Printing Conclusion of BMI
    if(BMI < 18.5)
    {
       cout << "\nConclusion: UNDERWEIGHT" << endl;
    }
    else if(BMI > 18.5 && BMI < 24.9)
    {
        cout << "\nConclusion: HEALTHY" << endl;
    }
    else if(BMI > 25.0 && BMI < 29.9)
    {
        cout << "\nConclusion: OVERWEIGHT" << endl;
    }
    else
    {
        cout << "\nConclusion: OBESE" << endl;
    }

    return 0;
}
