#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int binary_search(int a[],int n,int key)
{
    int s=0,e=n-1;
    while(e>=s)
    {
        int m=(s+e)/2;
        if(key==a[m])
        {
            return m;
        }
        else if (a[m]>key)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
    }
    return -1;
}

int main() {
	int n;
	cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
	cout<<binary_search(a,n,key);
	return 0;
}