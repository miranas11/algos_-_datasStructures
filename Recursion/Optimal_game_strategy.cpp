#include<iostream>
#include<algorithm>

using namespace std;

int findmax(int a[],int i,int j)
{
   if(i>=j)
   {
       return 0;
   }

   int first=a[i] + min(findmax(a,i+1,j-1),findmax(a,i+2,j));

   int last=a[j] + min(findmax(a,i+1,j-1),findmax(a,i,j-2));


   return max(first,last);

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

    int maxi=0;

    cout<<findmax(a,0,n-1);

}