#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("Enter the value of N:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum += i*i;
	}
	printf("The sum of the series 1^2+2^2+3^2+4^2 ...%d^2 is %d.",n,sum);
	return 0;
}
