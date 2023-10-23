// Prime number or not a prime number

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int flag = -1;
    
    if (n<=1){
        cout << "Not a prime number" << endl;
    }
    else{
        
        // for (int i=2;i<n;i++){
        //     if (n%i==0){
        //         cout << "Not a prime" << endl;
        //         flag = 0;
        //         break;
        //     }
        // }
        
        
        // for (int i=2;i<n/2+1;i++){
        //     if (n%i==0){
        //         cout << "Not a prime" << endl;
        //         flag = 0;
        //         break;
        //     }
        // }
        
        
        for (int i=2;i<sqrt(n)+1;i++){
            if (n%i==0){
                cout << "Not a prime" << endl;
                flag = 0;
                break;
            }
        }
        
        
        if(flag==-1){
            cout << "Prime Number" << endl;
        }
    }
    
    

    return 0;
}
