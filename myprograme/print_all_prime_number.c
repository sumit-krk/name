#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void generate_prime(int n)
{
for(int i=2;i<=n;i++)
   {
      if(isprime(i))
      {
          printf("%d\n",i);
      }
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    generate_prime(n);
    return 0;
}
