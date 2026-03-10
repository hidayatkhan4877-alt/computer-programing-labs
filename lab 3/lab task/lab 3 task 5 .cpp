// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to check if a number is positive, negative, or zero

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    int num;         // Integer variable 'num' declare kiya number store karne ke liye

    cout << "Enter a number: ";  
    cin >> num;      // User se number input liya aur variable me store kiya

    // Number check karna
    if(num > 0)                      // Agar number 0 se bada hai
        cout << "Number is positive";  
    else if(num < 0)                 // Agar number 0 se chhota hai
        cout << "Number is negative";  
    else                             // Agar number 0 hai
        cout << "Number is zero";  

    return 0;   // Program successfully end ho gaya
}
