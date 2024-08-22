//program to perform bitwise operations
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"BITWISE AND:"<<(a&b)<<endl;
    cout<<"BITWISE OR:"<<(a|b)<<endl;
    cout<<"BITWISE XOR:"<<(a^b)<<endl;
    cout<<"BITWISE NOT:"<<(~a)<<endl;
    cout<<"LEFT SHIFT:"<<(a<<(1))<<endl;
    cout<<"LEFT SHIFT:"<<(b<<(1))<<endl;
    cout<<"RIGHT SHIFT:"<<(a>>(1))<<endl;
    cout<<"RIGHT SHIFT:"<<(b>>(1))<<endl;


}
/* OUTPUT
enter number a:20
enter number b:30
BITWISE AND:20
BITWISE OR:30
BITWISE XOR:10
BITWISE NOT:-21
LEFT SHIFT:40
LEFT SHIFT:60
RIGHT SHIFT:10
RIGHT SHIFT:15
*/
