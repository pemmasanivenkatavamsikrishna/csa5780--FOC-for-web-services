#include<stdio.h>
int main() {
	int n,i,sum=0,sign=1;
	
	printf("Enter the value of N:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum += sign*i ;
			sign = -sign;
	}
	printf("The sum of the series 1-2+3-4+5...%d is %d.",n,sum);
	return 0;
}
