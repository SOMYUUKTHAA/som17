#include <stdio.h>
int main()
{
int n,num,rem,res=0;
printf("Enter a three digit integer:");
scanf("%d",&n);
num=n;
while (num!=0)
{
rem=num%10;
res+=rem*rem*rem;
num/=10;
}
if(res== n)
printf("%d is an Armstrong number\n",n);
else           
printf("%d is not an Armstrong number\n",n);
return 0;
}
