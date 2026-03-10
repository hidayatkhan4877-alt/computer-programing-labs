// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program: Menu-driven unit converter (km?m, m?cm, kg?g, °C?°F)

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()   // main function: program ka starting point
{
    int choice;     // User ka menu choice store karne ke liye
    float value;    // Decimal value input aur conversion ke liye

    // Menu display
    cout << "Menu:\n";
    cout << "1 ? Convert Kilometers to Meters\n";
    cout << "2 ? Convert Meters to Centimeters\n";
    cout << "3 ? Convert Kilograms to Grams\n";
    cout << "4 ? Convert Celsius to Fahrenheit\n";

    // User se choice aur value input lena
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    // Switch statement use ki choice ke basis par conversion karne ke liye
    switch(choice)
    {
        case 1:   // Kilometer to Meter
            cout << "Meters = " << value * 1000;
            break;

        case 2:   // Meter to Centimeter
            cout << "Centimeters = " << value * 100;
            break;

        case 3:   // Kilogram to Gram
            cout << "Grams = " << value * 1000;
            break;

        case 4:   // Celsius to Fahrenheit
            cout << "Fahrenheit = " << (value * 9/5) + 32;
            break;

        default:  // Invalid choice
            cout << "Invalid choice";
    }

    return 0;   // Program successfully end ho gaya
}
