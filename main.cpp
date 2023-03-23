#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 
  
using namespace std; 

void nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
    {
    	cin>>a[i];
	}
}
  
int giatrimax(int a[], int n)
{ 
	int maxx = a[0];
    for(int i = 1; i<n; i++)
    {
    	if(maxx < a[i]) maxx = a[i];
	}
	return maxx;
} 
int giatrimin(int a[], int n)
{ 
    int minn = a[0];
    for(int i = 1; i<n; i++)
    {
    	if(minn > a[i]) minn = a[i];
	}
	return minn;
      
} 

int main() 
{ 
	int n;
	cin>>n;
	if(n<= 0) return 0;
  	int a[n];
  	nhap(a,n);
    cout<<giatrimax(a,n);cout<<"\n"; 
    cout<<giatrimin(a,n); 
  	return 0; 
}
