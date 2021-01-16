/****************
*Phone keypad problem
*recursion
*Book -1 Page 195
*enter a number on phone keypad and get all combinations of alphabets on that number
*eg 22 the aa ab ac ba bb bc ca cb cc;
****************/
#include<iostream>
using namespace std;

char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void generate_names(char in[],char out[],int i,int j)
{
    if(in[i]=='\0')
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }

    //gets the current input digit
    //if in is 123 at first takes 1 then 2 then 3
    int digit=in[i]-'0';


    //bcz if digit is 0 or 1 than the while loop wont run and we wiill hit the return so it skips the step
    if(digit==1 || digit==0)
    {
        generate_names(in,out,i+1,0);
    }

    //if we dont hit the end of alphabets on keypad
    while( keypad[digit][j] != '\0' )
    {   
        out[i]=keypad[digit][j];
        generate_names(in,out,i+1,0);
        j++;
    }

    return;

}

int main()
{
    char input[100];
    char output[100];
    cin>>input;
    generate_names(input,output,0,0);
}