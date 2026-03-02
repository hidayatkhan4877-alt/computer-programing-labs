#include <iostream>   // iostream library include ki jo input (cin) aur output (cout) ke liye use hoti hai

using namespace std;  // std namespace use ki taa ke cin aur cout directly use kar saken

int main()            // main function jahan se program execution start hoti hai
{
    int age;         // integer variable 'age' declare kiya user ki age store karne ke liye

    // user se age enter karne ko keh raha hai
    cout << "Enter your age: ";

    // user ka input age variable me store kar raha hai
    cin >> age;

    // check karta hai agar age 18 ya us se zyada hai
    if(age >= 18)
        cout << "You are eligible";     // agar condition true ho to ye message print hoga

    else
        cout << "You are not eligible"; // agar condition false ho to ye message print hoga

    return 0;   // program successfully end ho gaya
}
