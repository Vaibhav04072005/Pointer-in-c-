#include<iostream>
using namespace std;
int main()
{


    // learning pointer in  c++


    // memory add --->    hexadecimal number  (0-16 --->   0-9+a-f)

    // var a    ka add     ----- address of operator      &a


    int a=10;
    cout<<&a<<endl;


    // pointer  ----->>>>  are used to store the address of differnt variable 

    int b=10;
    int *ptr =&b;
// *ptr is taking the address of value of b which is store in ptr 
    cout<<&b;
    cout<<endl<<ptr;

//   pointet to pointer 

// special variable that store the address of other variable

int c=50;
int *ptr1=&c;
int **parptr = &ptr1;

cout<<&ptr<<endl;


return 0;
}