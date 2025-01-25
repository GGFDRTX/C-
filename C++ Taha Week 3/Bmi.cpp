#include <iostream>
using namespace std;

int main()
{
    // Constants for recommended water intake per day
    const double WATER_PER_KG = 0.03; // 30 ml per kg of body weight

    // Variables for user input
    string name;
    int age;
    double height, weight;

    cout << "Enter Your name Please: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, name);

    // Prompt user for age, height, and weight
    cout << "Enter your age (in years): ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    // Calculate recommended water intake
    double recommendedWater = weight * WATER_PER_KG;

    // Determine weight status based on BMI (Body Mass Index)
    double bmi = weight / (height * height);

    string weightStatus;
    if (bmi < 18.5)
    {
        weightStatus = "Hi " + name + ", You Are Underweight";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        weightStatus = "Hi " + name + ", You Are Normal Weight";
    }
    else
    {
        weightStatus = "Hi " + name + ", You Are Overweight";
    }

    // Recommend sport or exercise based on BMI
    string sportRecommendation;
    if (bmi < 18.5)
    {
        sportRecommendation = "Hi " + name + ", We recommend resistance training to build muscle mass.";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        sportRecommendation = "Hi " + name + ", You are in the normal weight range. A balanced exercise routine is recommended.";
    }
    else
    {
        sportRecommendation = "Hi " + name + ", We recommend aerobic exercises like jogging or cycling to help with weight loss.";
    }

    // Output recommendations
    cout << name + ", We recommend You Drink " << recommendedWater << " liters Of Water Every Day" << endl;
    cout << "Your Weight Status: " << weightStatus << endl;
    cout << "Sport Recommendation For " + name + ": " << sportRecommendation << endl;
    cout << "Thank You For Using HealthBot. Have a Nice Day, " << name << "!" << endl;

    return 0;
}
