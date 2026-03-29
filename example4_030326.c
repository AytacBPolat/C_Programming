#include <stdio.h>
/*
	1 2 3 4 5
	2 3 4 5 6
	3 4 5 6 7
	4 5 6 7 8
	5 6 7 8 9 patternini oluþturan algoritma 
*/
int main(){
	int i=1,j=1;;
	while(i<5){
		while(j<(i+5)){
			printf("%d ",j);
			j++;
		}
		printf("\n");
		i++;
		j=i;
	}
	
	
	
	return 0;
}
