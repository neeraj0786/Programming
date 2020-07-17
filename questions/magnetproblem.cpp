#include <bits/stdc++.h>
using namespace std;
double d = 0.0000000000001;

double findp(double arr[],double l, double h,int n)
{
   
    double mid = (l+h)/2.0;
    double force = 0.0;
    
    
    for(int i=0;i<n;i++)
    {
       force+=1/(mid-arr[i]);
    }
    if(abs(force)<d)
    {
        return mid;
        
    }
    else if(force>0)
    {
        return findp(arr,mid,h,n);
    }
    else
    {
        return findp(arr,l,mid,n);
    }
    

}
    

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    double arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<=n-2;i++)
	    { 
          double l = arr[i],h = arr[i+1];
          
	        cout<<fixed<<setprecision(2)<<findp(arr,l,h,n)<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}