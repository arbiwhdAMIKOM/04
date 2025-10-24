#include <iostream>  
#include <iomanip>  
#include <cmath>    
#include <cstdlib>  
#include <string>   

using namespace std;

int main()
{
    cout << "=======================================" << endl;
    cout << "=======================================" << endl;
    cout << "Tarbiyah Wahidiyah 25.11.6568" << endl;
    cout << "======================================="<< endl;
    cout << "=======================================" << endl;

    cout << "\n--------------------------------------" << endl;
    cout << "BMI Calculator" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Enter Weight (kg): ";
    double weight;
    cin >> weight;

    cout << "Enter Height (m): ";
    double height;
    cin >> height;

    double bmi = 0;
    string category; 

    if (height <= 0)
    {
        cout << "Error: Height must be a positive number." << endl;
        category = "Error";
    }
    else
    {
        bmi = weight / pow(height, 2);

        if (bmi < 18.5)
        {
            category = "underweight";
        }
        else if (bmi <= 22.99) // Range: 18.5 - 22.99
        {
            category = "normal";
        }
        else if (bmi <= 24.99) // Range: 23.0 - 24.99
        {
            category = "overweight";
        }
        else // Range: >= 25.0
        {
            category = "obesity";
        }
    }

    cout << endl;
    cout << "BMI Calculator" << endl;
    cout << "--------------------------------------" << endl;

    cout << fixed << setprecision(2);

    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " m" << endl;

    if (height > 0)
    {
        cout << "Result:" << endl;
        cout << "- BMI " << bmi << endl;
        cout << "- You are '" << category << "'" << endl;
    }

    system("pause");
    return 0;
}