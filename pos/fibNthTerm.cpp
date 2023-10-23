// using constructor

#include <iostream>
#include<cstring>

using namespace std;

class FibNthTerm{
    public:
    FibNthTerm(int n){
        int a = 0,b=1, c;
        if (n==1){
            cout << a <<endl;
        }
        else if(n==2){
            cout << b << endl;
        }
        else{
        for(int j=2;j<n;j++){
            c = a+b;
            a = c;
            b = c;
        }
        std::cout << c << std::endl;
        }
    }
   
    
    
};

int main()
{
    FibNthTerm bin(3);
    // return 0;
}
