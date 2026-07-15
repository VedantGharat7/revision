#include <iostream>
using namespace std;
void evenodddetector(int n){
    if (n%2==0)
    {
        cout << "Itseven";
    }else{cout << "Its odd";}
    
}
 int main(){
// int n;
// cout << "Enter your number: ";
// cin >> n;
// if (n%2==0)
// {
//     cout << "Its even";
// }else{cout << "Its odd";}
int n;
cout << "Enter your number: ";
cin >> n;
evenodddetector(n);

return 0;
}