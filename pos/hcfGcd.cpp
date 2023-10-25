// find HCF/GCD of 2 numbers.

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //Method 1
    int num1,num2;
    cout << "Enter two number " ;
    cin >> num1 >> num2;
    int hcf=1;
    for (int i=1;i<=num1/2&&i<=num2/2;i++){
        if (num1%i==0 && num2%2==0){
            hcf = i;
        }
    }
    cout << "The hcf of " << num1 << " and " << num2 << " is " << hcf<<endl;
    
    
    
    //Method 2
    int n=num1,m=num2;
    while (num1!=num2){
        if (num1>num2){
            num1-=num2;
        }
        else{
            num2-=num1;
        }
    }
    cout << "The hcf of " << n << " and " << m << " is " << hcf<<endl;
    return 0;
}
