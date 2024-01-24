#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the N";
	cin >>n;
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter thr a[i]";
		cin>>a[i];
	}
	cout<<endl;
	cout<<"Enter even element";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i];
		}
	}
	return 0;
}
