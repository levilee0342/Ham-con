#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 
  
using namespace std; 
  
int giatrimax(int a,int b,int c)
{ 
    if(a>b)
	{ 
      	if(a>c) return(a); 
      	else return(c);
	} 
	else if(b>c) return(b); 
    else return(c); 
      
} 
int giatrimin(int a,int b,int c)
{ 
    if(a<b)
	{ 
    	if(a<c) return(a); 
      	else return(c);
	} 
    else if(b<c) return(b); 
    else return(c); 
      
} 

int main() 
{ 
  int a,b,c; 
  cin>>a>>b>>c; 
  cout<<giatrimax(a,b,c);cout<<"\n"; 
  cout<<giatrimin(a,b,c); 
  return 0; 
}
