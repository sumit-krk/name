#include<iostream>>
using namespace std;
void length_char(char c[])
{
    cin>>c;
    int count=0;
    for(int i=0;c[i]!='\0';i++)
    {
        count=count+1;
    }
    cout<<count;
}
int main()
{
    char c[100];
    length_char(c);
    return 0;
}
