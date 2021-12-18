#include<iostream>>
using namespace std;
void length_char(char c1[])
{
    //cin>>c;
    int count=0;
    for(int i=0;c1[i]!='\0';i++)
    {
        count=count+1;
    }
    cout<<count;
}
int main()
{
    char c[100];
    cin>>c;
    cout<<c<<endl;
    length_char(c);
    return 0;
}
