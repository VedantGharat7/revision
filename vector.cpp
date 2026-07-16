#include <iostream>
using namespace std;
#include <vector>


int main(){
vector<int>vec = {2,5,6,7};
cout << vec.size()<< endl;
vec.push_back(22);
vec.push_back(11);
 vec.pop_back();
cout << vec.front();
cout << endl;
cout << vec.back();
cout << endl;
cout << vec.at(2);
cout << endl;
for (int val: vec)
{
    cout << val << " ";
}



    return 0;
}