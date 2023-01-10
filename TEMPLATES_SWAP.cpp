/*

program of to swap the two values using templates

*/

#include <iostream>

using namespace std;


template<typename T>

T swapFun(T *a,T *b){
    
    T tem;
    tem=*a;
    *a=*b;
    *b=tem;
    
   // cout<<"a is: "<<*a<<" b is: "<<*b<<endl<<endl;
    
    return 0;
}

int main()
{
    
    int i1=5,i2=10;
    float f1=5.5,f2=10.10;
    char c1='j',c2='p';
    
    cout<<"i1 is: "<<i1<<" i2 is: "<<i2<<endl;
    cout<<"f1 is: "<<f1<<" f2 is: "<<f2<<endl;
    cout<<"c1 is: "<<c1<<" c2 is: "<<c2<<endl<<endl;
    
    
    
    swapFun(&i1,&i2);
    swapFun(&f1,&f2);
    swapFun(&c1,&c2);
    
    
    cout<<"------after sawaping------"<<endl<<endl;
    
    cout<<"i1 is: "<<i1<<" i2 is: "<<i2<<endl;
    cout<<"f1 is: "<<f1<<" f2 is: "<<f2<<endl;
    cout<<"c1 is: "<<c1<<" c2 is: "<<c2<<endl<<endl;
    
    
    


    return 0;
}




