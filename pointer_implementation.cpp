#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;

    char b = 'y';
    char *bptr=&b;


    cout<<"The value of an integer type"<<endl;
    cout<<a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    aptr++;
    cout<<*aptr<<endl; // 4 will be added in the address value because of the 4 bytes size.
    
    cout<<"The value of a character type"<<endl;
    cout<<b<<endl;
    cout<<bptr<<endl;
    cout<<*bptr<<endl;

    bptr++;
    cout<<bptr<<endl; // 1 will be added in the address value because of the 1 bytes size.

    return 0;
}