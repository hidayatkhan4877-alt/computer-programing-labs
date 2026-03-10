// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to display message based on user grade (A, B, C, D, F)

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()   // main function: program ka starting point
{
    char grade;   // Character variable 'grade' declare kiya user input ke liye

    cout << "Enter your grade (A, B, C, D, F): ";  
    cin >> grade;   // User se grade input liya aur variable me store kiya

    // Switch statement use ki grade ke basis par message print karne ke liye
    switch(grade)   
    {
        case 'A':  
            cout << "Excellent";  
            break;  

        case 'B':  
            cout << "Very Good";  
            break;  

        case 'C':  
            cout << "Good";  
            break;  

        case 'D':  
            cout << "Pass";  
            break;  

        case 'F':  
            cout << "Fail";  
            break;  

        default:   // Agar user ne valid grade letter nahi diya
            cout << "Invalid Grade";  
    }

    return 0;   // Program successfully end ho gaya
}
