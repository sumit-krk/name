#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter size of array=");
    int n;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
     for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array is=%d",sum);
    return 0;
}
