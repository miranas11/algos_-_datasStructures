/****************
*First & Last occurance in binary search
****************/


#include<iostream>
#include<algorithm>
using namespace std;

int first_occurance(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int m=(s+e)/2;
        if(arr[m]==key)
        {
            ans=m;
            e=m-1;
        }
        else if (arr[m]>key)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }         
    }
    return ans;
}

int last_occurance(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int m=(s+e)/2;
        if(arr[m]==key)
        {
            ans=m;
            s=m+1;
        }
        else if (arr[m]>key)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }         
    }
    return ans;
}



int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;

    int key;
    cout<<"\nEnter Key: ";
    cin>>key;
    cout<<"First occurance: "<<first_occurance(arr,n,key)<<"\nLast occurance: "<<last_occurance(arr,n,key);
    

}