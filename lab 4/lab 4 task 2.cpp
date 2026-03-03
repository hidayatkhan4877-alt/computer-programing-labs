#include <iostream>   // input aur output ke liye library
using namespace std;  // std namespace use kiya

int main()   // main function start
{
    char grade;   // ek character variable banaya grade ke liye

    cout << "Enter your grade (A, B, C, D, F): ";   // user se grade lene ka message
    cin >> grade;   // jo grade user dega wo variable me store hoga

    switch(grade)   // switch grade ki value check karega
    {
        case 'A':   // agar grade A ho
            cout << "Excellent";   // Excellent print karega
            break;   // switch stop

        case 'B':   // agar grade B ho
            cout << "Very Good";   // Very Good show karega
            break;

        case 'C':   // agar grade C ho
            cout << "Good";   // Good show karega
            break;

        case 'D':   // agar grade D ho
            cout << "Pass";   // Pass show karega
            break;

        case 'F':   // agar grade F ho
            cout << "Fail";   // Fail show karega
            break;

        default:   // agar koi aur letter enter kare
            cout << "Invalid Grade";   // error message show karega
    }

    return 0;   // program end
}
