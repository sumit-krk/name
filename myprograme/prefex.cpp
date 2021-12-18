#include<iostream>
#include<cstring>
using namespace std;
void prefix(char a[])
{
    int i=0;
    while(i<strlen(a))
    {
        int i2=0;
        while(i2<=i)
        {
            cout<<a[i2];
            i2++;
        }
        cout<<endl;
        i++;
    }
}
/*void prefix(char a[])
{
    int i=strlen(a)-1;
    while(i>=0)
    {
        int i2=i;
        while(i2<=(strlen(a)-1))
        {
            cout<<a[i2];
            i2++;
        }
        cout<<endl;
        i--;
    }
}*/
int main()
{
    cout<<"Enter string:";
    char a[100];
    cin.getline(a,100);
    prefix(a);
    return 0;
}
