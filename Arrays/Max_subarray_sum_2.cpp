/****************
*Max Sub arrays sum #2
*More Efficient than Max Sub arrays sum #1
****************/

#include<iostream>
using namespace std;

int main()
{
    int n,current_sum=0,max_sum=0;
    int first,last;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n;
    int a[n];
    int csum[n];

    cin>>a[0];
    csum[0]=a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        csum[i]=csum[i-1] + a[i];
    }
    for(int i =0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)            
        {
            current_sum=0;

            current_sum = csum[j] -csum[i-1];           //gets the csum from i to j
             
            if (current_sum>max_sum)
            {
                max_sum=current_sum;
                first=i;
                last=j;
            }  
        }
    }

    cout<<"Max Sum is: "<<max_sum<<endl;
    cout<<"The subarray is: [";
    for (int i = first; i <= last; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"]"<<endl;
    
    return 0;
}

