// find all prime factor of a given number

#include <iostream>
#include <cmath>

using namespace std;

void primeFactor(int num){
    for(int i=2;i<=sqrt(num);i++){
        while (num%i==0){
            cout << i << " ";
            num/=i;
        }
    }
    if (num>2){
        cout << num << endl;
    }
}


int main()
{
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeFactor(n);
    return 0;
}
