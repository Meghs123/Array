/*Write a prgm to check for duplicates in an array .
 INPUT: 123432
 OUTPUT: YES
 */
#include<stdio.h>
int main()
{
	int a[10]={0};
	int num;
	printf("Enter your number: ");
	scanf("%d",&num);
	int rem;
	while(num>0)
	{
		rem=num%10;
		if(a[rem]==1)
		break;
		a[rem]=1;
		num=num%10;
	}
	if(num>0)
	{
	
	printf("YES");
    }
	else
	{
	printf("NO");
}
	return 0;
}
