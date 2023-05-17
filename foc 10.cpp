#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of N:");
	scanf("%d",&n);
	for(i=2;i<=n;i += 2){
		sum += i*i;
	}
	printf("The sum of the series 2^2+4^2+6^2+8^2+...%d^2 is %d.",n,sum);
	return 0;
}
