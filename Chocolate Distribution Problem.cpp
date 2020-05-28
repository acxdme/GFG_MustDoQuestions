#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int m;
	    cin>>m;
	    if(m==1)
	     cout<<"0"<<endl;
	     else
	     {
	         sort(a,a+n);
	         int left=0;
	         int right=m-1;
	         int mn=INT_MAX;
	         while(right<n)
	         {
	             if(a[right]-a[left]<mn)
	               mn=a[right]-a[left];
	             left++;
	             right++;
	         }
	         
	         cout<<mn<<endl;
  
	     }
	}
	return 0;
}
