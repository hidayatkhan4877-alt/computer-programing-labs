// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to display the day of the week based on day number (1-7)

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()   // main function: program ka starting point
{
    int day;   // Integer variable 'day' declare kiya user input ke liye

    cout << "Enter day number (1-7): ";  
    cin >> day;   // User se day number input liya aur variable me store kiya

    // Switch statement use ki day number ke basis par output dene ke liye
    switch(day)   
    {
        case 1:  
            cout << "Monday";  
            break;  

        case 2:  
            cout << "Tuesday";  
            break;  

        case 3:  
            cout << "Wednesday";  
            break;  

        case 4:  
            cout << "Thursday";  
            break;  

        case 5:  
            cout << "Friday";  
            break;  

        case 6:  
            cout << "Saturday";  
            break;  

        case 7:  
            cout << "Sunday";  
            break;  

        default:   // Agar user 1-7 ke ilawa number enter kare
            cout << "Invalid day number";  
    }

    return 0;   // Program successfully end ho gaya
}
