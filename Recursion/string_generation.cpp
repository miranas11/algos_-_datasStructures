/****************
*string generation
*recursion
*Book -1 Page 195
*Enter a number e.g 123 and get combinations 1 2 3 ,12 3 or 1 23  and get all mappings 1=a, 2=b... so 1 2 3 = abc --12 3 =lc and so on
*should not be greate tahn 26
****************/
#include<iostream>
using namespace std;

char mapping[]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void generate_output(char in[],char out[],int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //only 1 taken
    int digit=in[i]-'0';
    out[j]=mapping[digit];//or out[j]= digit + 'A' - 1 //if digit =2 => out[j] = 2 + 'A' -1 => 'A' + 1 = 'B';
    generate_output(in,out,i+1,j+1);


    //2 taken
    if(in[i+1]!='\0')
    {
        digit=((in[i]-'0')*10) +(in[i+1]-'0');
        if(digit<=26)
        {
            out[j]=mapping[digit];
            generate_output(in,out,i+2,j+1);
        }
    }
    
}

int main()
{
    char input[100];
    cin>>input;
    char output[100];
    generate_output(input,output,0,0);

}
