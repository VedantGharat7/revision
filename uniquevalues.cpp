#include <iostream>
using namespace std;
void uniqueval(int *arr,int sz){
    
    for (int i = 0; i < sz; i++)
    {int count =0;
        for ( int j = 0; j < sz; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
        
        
    }
    

}
int main(){
int sz=6;
int arr[sz] = {4,22,1,4,22,6};
 uniqueval(arr,sz);
 

    return 0;
}