#include<iostream>
using namespace std;
int main()
{
    // operation of two different pointer 

    // when both the pointer of same data type ==> no. of block of type(int)/

    // ptr1--100             ||    ptr2--108        // these are not intergers but therse are the memory location of integer where data type is int 
    //   so we can subtract ptr2-ptr1   to get the memory location of this data type
    //   8 byte ===>>>>  2 integer


   int a[]={1,2,3,45,6};
   
   int *ptr2 ;              // 100 bytes

//    int *ptr1;

   int *ptr1 = ptr2 +2;     // 108 bytes

   cout<<ptr1-ptr2<<endl;    //2  bytes


//    comparing of the pointer







return 0;
}