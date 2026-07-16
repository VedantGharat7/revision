#include <iostream>
using namespace std;
void intersect(int sz1,int arr1[],int sz2,int arr2[]){

    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i]==arr2[j])
            {
             cout << arr1[i] << " ";
            }
            
        }
        
    }
    

}

int main(){
int sz1=6;
int sz2=4;
int arr1[sz1] = {4,5,6,1,2,9};
int arr2[sz2] = {11,22,6,12};
intersect(sz1,arr1,sz2,arr2);


    return 0;
}