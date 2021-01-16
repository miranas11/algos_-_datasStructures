//Book 1 - page 118
#include<iostream>
#include<math.h>
using namespace std;

void clr_last_i_bits(int n,int i)
{
    int mask= (~0)<<i;
    int ans= n & mask;
    cout<<"ANS : "<<ans<<endl;
}
void clr_i_j(int n,int j,int i)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;   // or pow(2,i)-1;
    int mask = a | b ;
    int ans= n & mask;
    cout<<"ANS :"<<ans<<endl;

}



int main()
{
    cout<<"1.Clear last i bits\n2.Clear range from j to i\n";
    int q;
    cin>>q;
    int n,i,j;
    if(q==1)
    {
        cin>>n>>i;
        clr_last_i_bits(n,i);
    }
    else if(q==2)
    {

        cout<<"Enter the number ,the starting and ending points S>E : ";
        cin>>n>>j>>i;
        clr_i_j(n,j,i);
    }
}