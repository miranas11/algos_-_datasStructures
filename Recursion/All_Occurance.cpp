/****************
*All Occurance
*recursion
****************/
#include<iostream>
#include<algorithm>
using namespace std;


void all_occurance(int a[],int n,int i,int key)
{
    //base case
    if(n==0)
        return;   

    if(a[0]==key)
        cout<<i<<" ";

    all_occurance(a+1,n-1,i+1,key); 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        all_occurance(a,n,0,key);
    }
    


}