// Check a number is armstromg or not

#include <iostream>
#include <cmath>

using namespace std;

int isArmstrom(int num,int n){
    int s=0,m=num;
    while (m>0){
        s += pow(m%10,n);
        m /= 10;
    }
    if (s==num){
        return true;
    }
    return false;
    
}

int order(int n){
    int c=0;
    while (n){
        c++;
        n/=10;
    }
    return c;
}

int main()
{
    
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    int n=order(num);
    
    if(isArmstrom(num,n)){
        cout << "Armstrom Number"<<endl;
    }
    else{
        cout << "Not an Armstrom Number" << endl;
    }
    return 0;
}
