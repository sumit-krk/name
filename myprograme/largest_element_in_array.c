#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter size of array");
    int n;
    scanf("%d",&n);
    int a[n];
    int largest;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("%d",largest);
    return 0;
}
