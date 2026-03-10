// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to check if a number is positive

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    int num;         // Integer variable declare kiya number store karne ke liye

    cout << "Enter a number: ";  
    cin >> num;      // User se number input liya aur variable me store kiya

    // Check karta hai agar number 0 se bada hai
    if(num > 0)
        cout << "Number is positive";  
    // Agar number 0 se bada ho to message display hoga

    return 0;   // Program successfully end ho gaya
}
