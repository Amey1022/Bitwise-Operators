#include <iostream>
using namespace std;
int main()
{
    int flag=70,set,bitset,bitreset,reset;
    cout<<"enter the bit position to be set:";
    cin>>bitset;
    set=flag|(1<<(bitset));
    cout<<"enter the bit position to be reset:";
    cin>> bitreset;
    reset=flag&(~(1<<(bitreset)));
    cout<<"your number is:"<<set<<endl;
    cout<<"your number is: "<<reset<<endl;


}