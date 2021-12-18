#include<iostream>
using namespace std;
int smallright(int a[],int n,int index)
{
    int small=a[index],current_index=index;
    for(int i=index;i<n;i++)
    {
       if(a[i]<small)
        {
          small=a[i];
          current_index=i;
       }
    }
    return current_index;
}
void comp(int a[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int index=smallright(a,n,i);
        if(a[i]>a[index])
            {
               swap(a[i],a[index]);
            }
    }
    for(int i=0;i<n;i++)
            {
                cout<<a[i];
            }
}
int main()
{
    cout<<"Enter how many number you enter in array:";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    comp(a,n);
    return 0;
}
