/****************
*Sub arrays
*Prints all sub arrays
****************/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i =0;i<n;i++)               
    {
        for(int j=i;j<n;j++)                // prints all subarray starting from i
        {
            for(int k=i;k<=j;k++)           // one complete loop from i to j prints one subarray
            {
                cout<<a[k]<<",";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

