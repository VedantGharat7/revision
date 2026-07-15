#include <iostream>
using namespace std;
bool primedector(int n){
if (n==1)
{ cout << "Its not prime";
    return false;
}
for (int i = 2; i < n; i++)
{
 if (n%i==0)
 {
    cout << "Its not prime";
    return false;
 }
 

    /* code */
}
 cout << "Its prime";
    return true;

    
 
}
int main(){
    int n;
    cin >> n;


primedector(n);




    return 0;
}