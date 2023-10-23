// find sum of the digits of a number

#include <iostream>
using namespace std;

int main()
{
    
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    int b = num;
    int su =0;
    
    while (num>0){
        su += num%10;
        num /= 10;
    }
    cout << "Sum of the digits of " << b << " is " << su << endl;
    return 0;
}
