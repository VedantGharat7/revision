#include <iostream>
using namespace std;
void alpha(char n){
    
if (n>=65&&n<=90)
{
    cout << "Its cap;";

    /* code */
}else if (n>=97&&n<=122)
{
    cout << "Its small: ";
}else{cout << "rong number: ";}
}
int main(){
cout << "Enter your alphabet:";
char n;
cin >> n;
alpha( n);
// if (n>=65&&n<=90)
// {
//     cout << "Its cap;";

//     /* code */
// }else if (n>=97&&n<=122)
// {
//     cout << "Its small: ";
// }else{cout << "rong number: ";}





    return 0;
}