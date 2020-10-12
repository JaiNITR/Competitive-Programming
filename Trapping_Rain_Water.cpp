#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int x{},w{};
	    int m= INT_MIN;
	    int left[n];
	    for(int i=0;i<n;i++)
	    {
	        m=max(m,a[i]);
	        left[i]=m;
	    }
	    int right[n];
	    m=INT_MIN;
	    for(int i=n-1;i>=0;i--)
	    {
	        m=max(m,a[i]);
	        right[i]=m;
	    }
	    for(int i=0;i<n;i++)
	    {
	        x=min(left[i],right[i])-a[i];
	        if(x<0)
	        x=0;
	        w+=x;
	    }
	    cout<<w<<endl;
	    
	}
	return 0;
}
