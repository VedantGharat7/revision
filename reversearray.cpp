#include <iostream>
using namespace std;

void reverse(int *arr,int sz){
int start=0;
int end =sz-1;

while (start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}



}


int main(){
int sz = 6;
int arr[sz] = {2,66,7,1,22,11};
cout << "the reverse array = ";
reverse(arr,sz);
 for (int i = 0; i < sz; i++)
 {
    cout << arr[i] << " ";
 }
 

    return 0;
}