#include <stdio.h>
/*
	***** 	þeklini bastýracak program yazýn.
   *   *	sadece 4 for kullanýlacak
  *   * 	1 tane if-else yapýsý
 *   * 		1 tane mantýk operatörü kullanýlacak
*****	
*/
#include <stdbool.h>
int main(){
	int i,j,k,l=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		if(i == 1 || i==5){
			printf("*****");
		}
		else{
			for(k=1;k<3;k++){
				printf("*");
				for(l;l<4;l++){
					printf(" ");
				}
			}
			l=1;
		}
		printf("\n");
	}
	return 0;
}
