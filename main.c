#include<stdio.h>

int main()
{
int num,r,sum=0,temp;
printf("Enter the number");
scanf("%d",&num);
temp =num;
while(num > 0)
{
    r=num%10;
    sum =sum*10+r;
    num= num/10;
}
printf("the sum is= %d\n",sum);
if(sum == temp)
    printf("it is palindrome");
else
    printf("not a palindrome");
return 0;
}

