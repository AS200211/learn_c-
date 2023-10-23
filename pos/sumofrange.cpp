// sum of numbers in the given range

#include <iostream>

using namespace std;

int main()
{
    int x,y,s=0;
    cout << "Enter the value of x and y " ;
    cin >> x >> y;
    
    
    // with loop
    for(int i=x;i<=y;i++){
        s+=i;
    }
    cout << s << endl;
    
    // Second Method
    int su=0;
    su = (y*(y+1))/2 - (x*(x+1))/2+x;
    cout << su << endl;
    
    

    return 0;
}
