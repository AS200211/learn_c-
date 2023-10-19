#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double n,e;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter power of the number: ";
    cin >> e;
    cout << n << " to the power " << e << " is: " << pow(n,e) << endl;
    return 0;
}