#include<iostream>
#include<cmath>
using namespace std;

//  int  n =0;
//  cout<<"enter the value";
//  cin>>n; 

//  while(n--)
//  {
//     cout<<"* "<<endl;
//  }
 

//LOOPS 
//

// for (int n = 0; n<=1000; n= n+4)
// {
// cout<<n<<endl;
// }



//functions EXAMPLE 2 

// void sum()
// {
//    int a;
//    int b;
//    int sum;
    
//     cout<<"enter a :";
//    cin>>a;
//    cout<<"enter b :";
//    cin>>b;
//    sum = a+b;
//    cout<<"the sum is :"<<sum<<endl;
// }
// int main ()
// {
//    sum();
//    sum();
// }


// function example 2
// int sum(int n1, int n2)
// {
//    return n1+n2;

// }

// int main()
// {
//    int a;
//    int b;

//    cin>>a;
//    cin>>b;
    
//    cout<<sum(a,b)<<endl;
// }

//pointer 

int main ()
{
   int *point ; /// basic syntax of the program 
    int var;
    cin>>var;
    point = &var;
    cout<<var;
   return 0; 
}
