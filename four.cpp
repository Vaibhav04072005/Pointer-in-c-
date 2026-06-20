    //  pointer in array

    #include<iostream>
    using namespace std;
    int main()
    {

        int arr[]={1,2,3,4,5};    // arr it represent the pointer
        cout<<arr<<endl;       // this will create the address locationn of where arr is stored

        // int a = 15;
        // arr=&a;        //this is the constant pointer throught can not change till whole ptoblem


        int a=10;
        int *p =&a;
        // 

        cout<<p<<endl;
        p++;       // 1 integer is adding ==>  4bytes
    
        cout<<p<<endl;


        // if add or sub inside poinside pointer

        int b=10;
        int *ptr=&b;

        cout<<ptr<<endl;
        ptr=ptr+2;
        cout<<ptr<<endl;      // this will add two integer bytes in the memory addd
        cout<<*ptr<<endl;



        int brr[] = {1,2,3,4,5};

        cout<< *brr<<endl;
        cout<< *(brr+1)<<endl;
        cout<< *(brr+2)<<endl;

        
    return 0;
    }