//height * width
//3.14 *r*r
//amount*rate*time /100; simple interest
//purchase-(purchase*discount)/100

#include<iostream>
using namespace std;




int main (){
    int  p,e;
    cout<<"enter the principle amount :-";
    cin>>p;

    int d;
    cout<<"right the discount amount ";
    cin>>d;


    e=p-(p*d)/100;
    cout<<e<<endl;

    
        
    
    //e=p-(p*d)/100;
    



    

return 0;
}