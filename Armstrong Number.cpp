#include <iostream>
using namespace std;

int main() {
	int n,sum=0,r;
	cin>>n;
	
	int temp = n;
	
	while(n != 0)
	{
	    r = n%10;
	    sum =  sum + (r*r*r);
	    n=n/10;
	}
	if(sum == temp)
	{
	    cout<<temp<<" is armstrong no."<<endl;
	}
	else
	{
	    cout<<temp<<" is not armstrong no."<<endl;
	}
	return 0;
}