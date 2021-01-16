/****************
*Find()  STL 
*used to search a element in a container
****************/


#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,5,30,50,100};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key to be searched: ";
    cin>>key;

    auto addr = find(arr,arr+n,key);
    cout<<addr<<" "<<arr;
    int index= addr - arr;
    
    if(index==n)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<key<<" found at index "<<index;
    }

    return 0;

}