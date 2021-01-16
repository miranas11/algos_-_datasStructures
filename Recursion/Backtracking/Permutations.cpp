/****************
Permutations
*recursion
*Book -1 Page 198
****************/
#include<iostream>
using namespace std;

void permutations(char a[],int i)
{   

    if(a[i]=='\0')
    {   
        cout<<a<<" ,";
        return;
    }

    for(int j=i;a[j]!='\0';j++)
    {   
        //first swap all a[0] positions will all,then a[1] positions will all exceopt a[0] so on....
        swap(a[i],a[j]);
        permutations(a,i+1);
        //backtracking - To restore original array
        swap(a[i],a[j]);
    }
}

int main()
{
    char a[100];
    cin>>a;
    permutations(a,0);
}