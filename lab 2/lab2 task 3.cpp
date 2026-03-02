#include <iostream>   // input/output ke liye iostream library include ki

using namespace std;  // std namespace use ki taa ke cin aur cout directly use ho saken

int main()            // program execution yahan se start hoti hai
{
    float celsius, fahrenheit;  // do float variables declare kiye: celsius aur fahrenheit

    // user se Celsius temperature enter karne ko keh raha hai
    cout << "Enter temperature in Celsius: ";

    // user se input le raha hai aur usko celsius variable me store kar raha hai
    cin >> celsius;

    // Celsius ko Fahrenheit me convert kar raha hai formula se
    // Formula: Fahrenheit = (Celsius × 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    // result screen par print kar raha hai
    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl;

    return 0;   // program successfully end ho gaya
}
