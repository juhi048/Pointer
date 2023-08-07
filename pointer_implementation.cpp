#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;

    cout<<"The value of an integer type"<<endl;
    cout<<a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    aptr++;
    cout<<*aptr<<endl; // 4 will be added in the address value because of the 4 bytes size.
    
    // in case of the character array pointer 1 will be added in the address value because of the 1 bytes size.

    return 0;
}