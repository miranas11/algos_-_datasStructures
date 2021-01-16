/****************
*Find Power
*recursion
*Optimised
*O(LogN)
*Book -1 Page 172
****************/
#include<iostream>
using namespace std;

//based on fact
//if n is even a^n=  (a^n/2)^2;
//if n is odd a^n=  a(a^n/2)^2;
int fast_power(int a,int n)
{
    if(n==0)
        return 1;

    int smaller_ans=fast_power(a,n/2);    
    smaller_ans *=smaller_ans;

    //if odd
    if(n&1)
        return a*smaller_ans;
    //if even    
    else
        return smaller_ans;    

}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,n;
        cin>>a>>n;
        cout<<fast_power(a,n)<<endl;
    }
    


}