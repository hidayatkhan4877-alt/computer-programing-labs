#include <iostream>
using namespace std;

int main() 
{
	int number;   // Variable define
	
	cout << "Enter an integer: ";   // User se input
	cin >> number;                  // Value store
	
	if (number >= 0)                // Condition check
	{
    	cout << "You entered a positive integer: " << number << endl;
	}
	else                            // Agar condition false ho
	{
    	cout << "You entered a negative integer: " << number << endl;
	}

	return 0;
}
