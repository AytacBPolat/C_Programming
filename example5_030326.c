#include <stdio.h>
int main(){
	int num, sum=0, i=1;
	printf("Enter a number: \n");
	scanf("%d",&num);
	while(i<=num){
		if(num %i == 0 ){
			printf("%d ",i);
			sum +=i;
			}
			i++;
		}
		printf("Sum: %d \n",sum);
		if(sum > num){
			printf("%d is an abundant number.",num);
		}
		else{
			printf("%d is not an abundant number.",num);
		}
		
	return 0;
}
	


