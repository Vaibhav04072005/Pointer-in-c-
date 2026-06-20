#include<iostream>
using namespace std;
int main()
{

    // int a=5;
    // int *p = &a;
    // int **q=&p;


    // that i done i lecture 1 and 2 in in tihis folder only

    int arr[]={10,20,30,40};
    int *ptr= arr;

    cout<< *(ptr+1)<<endl;
    cout<< *(ptr +3)<<endl;
    ptr++;
    cout<< *ptr << endl;

    return 0;
}

// this is one practice question in cpp


// // &  work of this are   
// 1. bitwise
// 2. addressof
// 3.alias 


// // * use of * are 

// 1.multiply
// 2.derefrences
