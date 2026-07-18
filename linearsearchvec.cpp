#include <iostream>
using namespace std;
#include <vector>
int linearsearch( vector<int>&vec,int target){
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]==target)
        {
             return i;
        }
        
    }
    return -1;
}
int main(){
int target =7;

    vector<int>vec={4,5,7,1,2};
    vec.size();
    
cout << linearsearch(vec,target);






    return 0;
}