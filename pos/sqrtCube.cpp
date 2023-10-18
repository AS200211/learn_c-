#include<iostream>
#include<cmath>
using namespace std;

double sqroot(int n){
    double sq;
    sq = sqrt(n);
    return sq;
}

double cubert(int n){
    double ct;
    ct = cbrt(n);
    return ct;
}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square root of " << n << " is: " << sqroot(n) << endl;
    cout << "Cube root of" << n << " is: " << cubert(n) << endl;

    return 0;
}