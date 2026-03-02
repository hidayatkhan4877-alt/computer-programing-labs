// C++ Program to Add Two Numbers Using Functions

#include <iostream>
using namespace std;

int addTwo(int x, int y);   // Function declaration

int main()
{
    int a, b, sum;   // Variables declare
    
    cout << "Enter the first number: ";
    cin >> a;        // First input
    
    cout << "Enter the second number: ";
    cin >> b;        // Second input
    
    sum = addTwo(a, b);   // Function call
    
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    
    return 0;
}

int addTwo(int x, int y)   // Function definition
{
    return (x + y);        // Addition return karega
}
