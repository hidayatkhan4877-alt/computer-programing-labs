#include <iostream>      //  ye input/output library hota hai 
using namespace std;     // standard namespace 

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    // integer array banaya 5 elements ke sath

    int *ptr;            // ye hum ny pointer declare kiya

    ptr = numbers;       // array ka first element ka address pointer ko diya

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
        // pointer ko i steps aage le ja kar value print kar raha hai
    }

    return 0;            //  yaha per program end hota hai 
}