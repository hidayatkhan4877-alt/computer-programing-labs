#include <iostream>   // iostream library include ki jo input (cin) aur output (cout) ke liye use hoti hai

using namespace std;  // std namespace use ki taa ke cin aur cout directly use kar saken

int main()            // main function jahan se program execution start hoti hai
{
    int num;         // integer variable 'num' declare kiya number store karne ke liye

    // user se number enter karne ko keh raha hai
    cout << "Enter a number: ";

    // user ka input num variable me store kar raha hai
    cin >> num;

    // check karta hai agar number 0 se greater hai
    if(num > 0)
        cout << "Number is positive";   // agar number positive ho to ye print hoga

    // agar number positive nahi hai to ye condition check hogi
    else if(num < 0)
        cout << "Number is negative";   // agar number negative ho to ye print hoga

    // agar upar wali dono conditions false hon to number zero hoga
    else
        cout << "Number is zero";       // agar number 0 ho to ye print hoga

    return 0;   // program successfully end ho gaya
}
