#include<iostream>
using namespace std;
int length(char c[])
{
    int count=0;
    for(int i=0;c[i]!='\0';i++)
    {
        count=count+1;
    }
    return count;
}
void reverse_str(char c[])
{
    int s=0;
    int e=length(c)-1;
    while(s<e)
    {
        swap(c[s],c[e]);
        s++;
        e--;
    }
    cout<<"Reverse string is:"<<c;
}
int main()
{
    int n;
    cout<<"Enter string:";
    char c[100];
    cin.getline(c,100);
    cout<<"your string is:"<<c<<endl;
    reverse_str(c);
    //length(c);
    return 0;
}
