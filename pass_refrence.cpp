#include<iostream>
using namespace std;

void changeA(int a){   // this is pass by value 
    a=20;

}

void changeB( int *ptr){    // this is here we are passing the add of b
      *ptr=20;
}
int main()
{
    int a=10;

    changeA(a);

    cout<<"inside the main function"<<a<<endl;  //20   // but this will return 10 

    // so we have to pass the address of a instead of direct value of a


    int b =00;

    changeB(&b);

   cout<<"the b is in inside the functionis "<<b<<endl;
return 0;
}








// it will done in the form of pointer  __ sharing memory adderess

//  refrences  alies   another name of that 

// talking about same memory add

#include<iostream>
using namespace std;

void changec(int &d){
    d=20;      // passs by refrence using alies
}
int main()
{
    int  c =10;
    changec(c);

    cout<<"inside the main function"<<c<<endl;

return 0;
}

