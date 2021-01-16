/****************
*Store all Occurance
*recursion
****************/
#include<iostream>
#include<algorithm>
using namespace std;


//return the number of occurances of key
//as well stores the index of occurances in out array
int store_Occ(int *a,int n,int i,int key,int *out,int j)
{
    //base case when all array is searched
    if(i==n)
        return j;  //j returns the number of times key occurs

    if(a[i]==key)
    {
        out[j]=i;
        //increaments the value of j if key is found and searches in rest of array
        return store_Occ(a,n,i+1,key,out,j+1);
    }  

    //if key not found dont increamnet j only reduce the size of array
    return store_Occ(a,n,i+1,key,out,j);  
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
        int out[100]={0};
        int cnt=store_Occ(a,n,0,key,out,0);
        for(int i=0;i<cnt;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;
        cout<<"Count: "<<cnt<<endl;
    }
    


}