// Natural numbers 

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " ;
    cin >> n;
    
    // First 1 to N natural number
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
    
    // First N natural number 1 to number
    for (int i=n;i>=1;i--){
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}
