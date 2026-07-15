#include <iostream>
using namespace std;
int digitsum=0;
int sumofdigits(int num){
    while (num>0)
    {int lastdig =num%10;
        num/=10;
        digitsum+=lastdig;
        
    }
    return digitsum;
}


int main(){


cout << "sum is = " << sumofdigits(20201);
    return 0;
}