#include <iostream>
using namespace std;

int linearspace(int *n,int sz,int target){
 
    for (int i = 0; i < sz; i++)
    {
         if (target == n[i])
         {
            return i;
         }
         
    } return -1;
    




}
int main(){
int sz = 5;
int n[sz] = {5,2,1,7,88};
int target = 5;

 cout << "The target value = " << linearspace(n,sz,target);
    return 0;
}