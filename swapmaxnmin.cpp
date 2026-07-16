#include <iostream>
#include <climits>
using namespace std;
int minimum = INT_MAX;  // +infinity
int maximum = INT_MIN; // -infinity
int maxindex;
int minindex; 
//Function for detecting maximum and minimum
void maxi(int *arr,int sz){

    for (int i = 0; i < sz; i++)
    {
        if (maximum<arr[i])
        {
            maximum=arr[i];
            maxindex = i;
        }
        
    }
    for (int i = 0; i < sz; i++)
    {
        if (minimum>arr[i])
        {
           minimum = arr[i];
            minindex=i;
        }
        
    }
    
    
}
void swapin(int arr[],int sz){

    swap(arr[maxindex],arr[minindex]);
    
}

int main(){
int sz = 6;
int arr[sz] = {1,22,4,5,77,-1};

maxi(arr,sz);
swapin(arr,sz);
for (int i = 0; i < sz; i++)
{
    cout << arr[i] << " ";
}



    return 0;
}