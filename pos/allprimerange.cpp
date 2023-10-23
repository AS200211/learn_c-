// find Prime number in the given range

#include <iostream>
#include<cmath>

using namespace std;

int isPrime(int n){
    if (n<=1){
        return false;
    }
    
    for (int i=2;i<sqrt(n)+1;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int n,m;
    cout << "Enter a range to check all prime Number ";
    cin >>m>>n;
    for (int i=m;i<=n;i++){
        if (isPrime(i)){
            cout << i << " "; 
        }
    }
    cout << endl;
    return 0;
}
