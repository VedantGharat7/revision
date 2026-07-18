#include <iostream>
using namespace std;
void intersection(int *arr1,int sz1,int sz2,int *arr2){
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i]==arr2[i])
            {
                cout << arr1[i];
            }
            
        }
        
    }
    
}
int main(){

int sz1 = 6;
int sz2 =3;
int arr1[sz1] = {5,4,1,2,6,8};
int arr2[sz2] = {4,11,22};

intersection(arr1,sz1,sz2,arr2);



    return 0;
}