#include <iostream>
using namespace std;
#include <vector>
void reversevec(vector<int>&vec){
int start = 0;   int end = vec.size()-1;

    while (start<end)
{
    swap(vec[start],vec[end]);
    start++;  end--;
}





}
int main(){

    vector<int>vec = {4,11,22,5,7};
    vec.size();

reversevec(vec);
for (int i = 0; i < vec.size(); i++)
{
    cout << vec[i] << " ";
}

    return 0;
}