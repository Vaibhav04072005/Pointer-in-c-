// dereference operator 

//      * --->   value at address

//       int a =10
//       
// *ptr is same for for both the side as 
// ptr gives the address of a where as *ptr gives the value of a



#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr =&a;
    int **parptr = &ptr;

    cout<<*(&a)<<endl;
    cout<<ptr<<endl;
    cout<<*(ptr)<<endl;
    cout<<(parptr)<<endl;  // this will give the memory location iof ptr variable
    cout<<*(parptr)<<endl;   // this will give the memory location of where a is sored
    cout<<**(parptr)<<endl;  // this will gives the address of a 
return 0;
}