#include <iostream>
#include <climits>
using namespace std;

int main(){
    int largestnum = INT_MAX;
    int arr[5] ={4,5,7,8,9};
      int sz = 5;
    for (int i = 0; i < sz; i++)
    {
        if (largestnum>arr[i])
        {
            largestnum = arr[i];
        }
        
    }
    cout << largestnum;

return 0;
}