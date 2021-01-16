/****************
Permutations
*recursion
*Book -1 Page 198
*we use sets to store all output--sets only store unique values and sorts them lexo
****************/
#include<iostream>
#include<set>
#include<string>
using namespace std;

void permutations(char a[],int i,set<string> &s)
{   

    if(a[i]=='\0')
    {   
        string t(a);
        s.insert(t);
        return;
    }

    for(int j=i;a[j]!='\0';j++)
    {   
        //first swap all a[0] positions will all,then a[1] positions will all exceopt a[0] so on....
        swap(a[i],a[j]);
        permutations(a,i+1,s);
        //backtracking - To restore original array
        swap(a[i],a[j]);
    }
}

int main()
{
    char a[100];
    cin>>a;
    set<string> s;
    permutations(a,0,s);
    for(auto str:s)
    {
        cout<<str<<" ,";
    }

}