#include <iostream>
using namespace std;
int sumofarray(int *arr,int sz){
    int sum =0;
    for (int i = 0; i < sz; i++)
    {
         sum+=arr[i];
    }
    return sum;
    
}
int productofarray(int *arr,int sz){
    int prod =1;
    for (int i = 0; i < sz; i++)
    {
        prod*=arr[i];
    }
    return prod;
    
}

int main(){
int sz=6;
int arr[sz] = {2,1,4,6,5,3};
cout << "The sum of array = " << sumofarray(arr,sz) << endl;
cout << "The product of array = " << productofarray(arr,sz);

    return 0;
}