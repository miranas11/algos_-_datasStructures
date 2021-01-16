/****************
*binary search STL 
*Note book:1
*Page:88
****************/


#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<<"\nThe sorted array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


    cout<<"\nEnter key to be searched : ";
    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);
    if(present==false)
        cout<<"Not Present";
    else
    {
        auto lb=lower_bound(arr,arr+n,key);
        auto ub=upper_bound(arr,arr+n,key);
        int lindex=lb-arr;
        int uindex=ub-arr;

        cout<<key<<" is present at :";
        for(int i=lindex;i<uindex;i++)
        {
            cout<<i<<" ";
        }
    }
        
}