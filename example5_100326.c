#include <stdio.h>

/*
	10101	þeklini oluþturacak programý yazýn sadece 3 for loop kullanýlabilir ve sadece 2 deðiþken kullanýlabilir.
	01010
	10101
	01010
	10101  
*/


int main(){
	int i,j;
	for(i=1;i<=5;i++){
		if(i%2==0){
			for(j=1;j<=5;j++){
				(j%2==0)?printf("1"):printf("0");
			}
		}else{
			for(j=1;j<=5;j++){
				(j%2==0)?printf("0"):printf("1");
				}
			}
			printf("\n");
		}	
	return 0;
}
