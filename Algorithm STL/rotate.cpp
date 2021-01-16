/****************
*rotate STL
*Note book:1
*Page:91
****************/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    rotate(arr,arr+3,arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}