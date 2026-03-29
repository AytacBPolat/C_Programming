#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, k,satir,sutun;
	printf("Satir girin.\n");
	scanf("%d",&satir);
	printf("Sutun girin.\n");
	scabf("%d",&sutun);
	for(i=0;i<=satir;i++){
		for(j=0;j<=sutun;j++){
			for(k=0;k<=i;k++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
