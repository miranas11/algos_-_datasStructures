/****************
*Last Occurance
*recursion
****************/
#include<iostream>
#include<algorithm>
using namespace std;

// divide array in two parts one conatining a[0]  and rest all elements
//till all elements seperated,then check from last element
int last_occurance(int a[],int n,int key)
{
    //base case
    if(n==0)
        return -1;   

    //store the next case in i
    int i=last_occurance(a+1,n-1,key); 

    if(i==-1)
    {
        if(a[0]==key)   
            return 0;
        else
            return -1;    
    } 

    //recursive case
    // if a[0]==key then all the other functions in stacks will return this cause i!= -1;
    return i + 1;
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
        cout<<last_occurance(a,n,key);
    }
    


}