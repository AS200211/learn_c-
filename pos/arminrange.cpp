// find all armstrong number in the given range

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
    
    int low,high;
    cout << "Enter the lower value: " ;
    cin >> low;
    cout << "Enter the higher value: ";
    cin >> high;
    for(int i=low;i<=high;i++){
        int n=order(i);
        
        if(isArmstrom(i,n)){
            cout <<i<<" ";
        }
        
    }
    cout << endl;
    return 0;
}
