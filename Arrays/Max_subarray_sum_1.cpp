/****************
*Max Sub arrays sum #1
*Not Efficient 
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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)            
        {
            current_sum=0;
            for(int k=i;k<=j;k++)       
            {
                current_sum+=a[k];
            }   
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

