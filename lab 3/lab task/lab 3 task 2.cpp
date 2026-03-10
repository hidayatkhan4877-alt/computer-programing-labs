// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to check if a number is between 0 and 100

#include <iostream>  
using namespace std;  

int main()            
{
    int num;  // Number store karne ke liye variable

    cout << "Enter a number: ";  
    cin >> num;  // User input

    // Correct condition: number 0 se bada AND 100 se chhota hona chahiye
    if(num > 0 && num < 100)  
        cout << "Number is between 0 and 100";  
    else
        cout << "Number is NOT between 0 and 100";  

    return 0;  // Program successfully end ho gaya
}
