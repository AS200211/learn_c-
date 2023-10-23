// using constructor

#include <iostream>
#include<cstring>

using namespace std;

class DecimalNumber{
    
    public:
    DecimalNumber(int n){
        int i=1,j=n,binary=0;
        // n = 100;
        for(j=n;j>0;j=j/2){
            binary = binary+(n%2)*i;
            i = i*10;
            n = n/2;
        }
        std::cout << binary << std::endl;
    }
    
    
};

int main()
{
    DecimalNumber bin(16);
    // return 0;
}
