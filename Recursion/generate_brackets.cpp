//
#include<iostream>
using namespace std;

void brackets(char out[],int n,int i,int o,int c)
{   
    //if i is >= to total brakets that are allowed +1;
    if(i>=2*n)
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }

    //if open brackest placed are less than n
    if(o<n)
    {
        out[i]='(';
        brackets(out,n,i+1,o+1,c);
    }

    //if closed brakets placed are less tahn open brackest
    if(c<o)
    {
        out[i]=')';
        brackets(out,n,i+1,o,c+1);
    }
}

int main()
{
    int n;
    cin>>n;
    char out[2*n];

    brackets(out,n,0,0,0);
}