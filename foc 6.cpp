//#include<stdio.h>
int main(){
	int n,i,sum=0;
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i+=2){
	sum += i;
}
printf("The sum of even numbers from 2 to %d is %d",n,sum)
return 0;
}
