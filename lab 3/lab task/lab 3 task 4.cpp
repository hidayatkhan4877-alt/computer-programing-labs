// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to check if user is eligible based on age (18 or above)

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    int age;         // Integer variable 'age' declare kiya user input ke liye

    cout << "Enter your age: ";  
    cin >> age;      // User se age input li aur variable me store kiya

    // Eligibility check: age 18 ya us se zyada honi chahiye
    if(age >= 18)
        cout << "You are eligible";  
    else
        cout << "You are not eligible";  

    return 0;   // Program successfully end ho gaya
}
