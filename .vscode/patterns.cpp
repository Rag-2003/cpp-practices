#include<iostream>
using namespace std;

int main()
{
    // for(int i = 0; i<=10; i++)
    // {
    //     for(int j =0; j<=6; j++)
    //     {
    //         cout<<"*";

    //     }
    //     cout<<"";
    // }

    // int i = 1;
    // int n;
    // cin >>n;

    // while(i<=n){
    
    //     int j = 1;
    // while(j <= n-1)

    // {
    //     cout<<" ";
    //     j++;
    // }
    
    // while(j<=n)
    // {
    //     cout<<"*";
    //     j++;

    // }
    // cout<<"\n";

    //  i++;   
    // }
    
//mirror image 
int n;
cout<<"Enter the number ";
cin>>n;
for (int i = 0 ; i<=n;i++)
{
    for(int j= 0; j<=n-i;j++)
    {
        cout<<" ";
    }
    {
        for(int k =1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

}
   
    return 0;
    }
