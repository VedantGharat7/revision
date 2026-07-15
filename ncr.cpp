#include <iostream>
using namespace std;
int factorial(int n){
    int prod=1;
    for (int i = 1; i <=n; i++)
    {
        prod*=i;
    }
    return prod;
}
int factorialmaker(int n,int r){
    int prod_n = factorial(n);
    int prod_r = factorial(r);
    int prod_nmr = factorial(n-r);
    return prod_n/(prod_r*prod_nmr);
}
int main(){


cout << "ncr = " << factorialmaker(4,2);


    return 0;
}