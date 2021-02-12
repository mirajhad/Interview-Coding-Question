#include<iostream>
using namespace std;

int 
main()
{
    int val;
    int count = 0;
    cin>>val;
    
    while(val != 0)
    {
        val=val/10;
        count++;
    }
    cout<<"No. of digits "<<count<<endl;
   
}