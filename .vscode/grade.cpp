#include<iostream>
using namespace std;


char getgrade(int marks)
{
    if(marks >=90)
    return 'A';
    else if(marks >=80)
     return 'b';
    else if(marks >=70)
     return 'C';
    else 
     return 'D';
}





int main()
{

    int n ;
    cout<<"enter the grade :"<<endl;
    cin>>n;

     char finalGrade = getgrade(n);

     cout<<finalGrade<<endl;
}