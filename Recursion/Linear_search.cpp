/****************
*Linear Saerch
*recursion
****************/

#include<iostream>
#include<algorithm>
using namespace std;


// divide array in two parts one conatining a[0]  and rest all elements
//we check in a[0]
int first_occurance(int a[],int n,int key)
{
    // base case
    if(a[0]==key)
        return 0;

    //if key not present and we divided all elements
    if(n==0)
        return -1;   
    //return -1 to all previous stacks and not -1  +1;
    if(first_occurance(a+1,n-1,key)==-1)
        return -1;     

    //recursive case
    //+1 because we will return 0 if key found then +1 for all previous function stacks
    return first_occurance(a+1,n-1,key) + 1;    
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
        cout<<first_occurance(a,n,key);
    }
    


}