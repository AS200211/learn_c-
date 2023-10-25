// find LCM of 2 numbers.

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //Method 1
    int num1,num2;
    cout << "Enter two number " ;
    cin >> num1 >> num2;
    int lcm;
    int max = (num1>num2)?num1:num2;
    for (int i=max;i<=num1*num2;i+=max){
        if (i%num1==0 && i%num2==0){
            lcm = i;
            break;
        }
    }
    cout << "The lcm of " << num1 << " and " << num2 << " is " << lcm <<endl;
    
    
    
    //Method 2
    int n=num1,m=num2;
    int hcf=1;
    while (num1!=num2){
        if (num1>num2){
            num1-=num2;
        }
        else{
            num2-=num1;
        }
    }
    cout << "The hcf of " << n << " and " << m << " is " << (n*m)/hcf<<endl;
    return 0;
}
