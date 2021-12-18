#include<iostream>
using namespace std;
/*int fact2(int r)
{
int f=1;
for(int i=1;i<=r;i++)
    {
     f=f*i;
    }
    return f;
}
int fact1(int r1)
{
int f=1;
for(int i=1;i<=r1;i++)
    {
     f=f*i;
    }
    return f;
}*/
int fact(int n) //re-using function
{
int f=1;
for(int i=1;i<=n;i++)
    {
     f=f*i;
    }
    return f;
}
void NCR(int n,int r)
{
    int r1=n-r;
    int ncr=(fact(n)/(fact(r1)*fact(r)));
    cout<<ncr;
}
int main()
{
    int n,r;
    cin>>n>>r;
    NCR(n,r);
    return 0;
}
