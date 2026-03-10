// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to compare two numbers and display if they are equal, greater or smaller

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    int num1, num2;  // Do integer variables declare kiye

    cout << "Enter first number: ";  
    cin >> num1;     // User se first number input liya

    cout << "Enter second number: ";  
    cin >> num2;     // User se second number input liya

    // Numbers compare karna
    if(num1 == num2)
        cout << "Numbers are equal";  
    // Agar dono numbers equal hain, message display hoga

    if(num1 > num2)
        cout << "First number is greater";  
    // Agar first number second se bada hai, message display hoga

    if(num1 < num2)
        cout << "First number is smaller";  
    // Agar first number second se chhota hai, message display hoga

    return 0;  // Program successfully end ho gaya
}
