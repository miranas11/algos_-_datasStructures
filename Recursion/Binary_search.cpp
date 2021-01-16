#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int a[],int s,int e,int key)
{
    int m=(s+e)/2;
    if(a[m]==key)
        return m;

    if(s>e)
        return -1;    

    if(a[m]<key)
        return binary_search(a,m+1,e,key);
    else
        return binary_search(a,s,m-1,key);  

        
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int key;
    cin>>key;
    cout<<binary_search(a,0,n,key);


}
