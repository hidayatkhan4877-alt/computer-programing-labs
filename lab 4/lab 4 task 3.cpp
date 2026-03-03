#include <iostream>   // input output ke liye header file
using namespace std;  // standard namespace

int main()   // program start
{
    int choice;   // menu choice store karne ke liye variable
    float value;  // decimal value store karne ke liye variable

    cout << "Menu:\n";   // menu heading print ki
    cout << "1 ? Convert Kilometers to Meters\n";   // option 1
    cout << "2 ? Convert Meters to Centimeters\n";  // option 2
    cout << "3 ? Convert Kilograms to Grams\n";     // option 3
    cout << "4 ? Convert Celsius to Fahrenheit\n";  // option 4

    cout << "Enter your choice: ";   // user se choice mangi
    cin >> choice;   // choice variable me store

    cout << "Enter value: ";   // user se value mangi
    cin >> value;   // value variable me store

    switch(choice)   // switch choice check karega
    {
        case 1:   // agar 1 select kare
            cout << "Meters = " << value * 1000;   // km ko meters me convert karega
            break;

        case 2:   // agar 2 select kare
            cout << "Centimeters = " << value * 100;   // meters ko cm me convert karega
            break;

        case 3:   // agar 3 select kare
            cout << "Grams = " << value * 1000;   // kg ko grams me convert karega
            break;

        case 4:   // agar 4 select kare
            cout << "Fahrenheit = " << (value * 9/5) + 32;   // celsius ko fahrenheit me convert karega
            break;

        default:   // agar galat choice de
            cout << "Invalid choice";   // error message show karega
    }

    return 0;   // program successfully end
}
