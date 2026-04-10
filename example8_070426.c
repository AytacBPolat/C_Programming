#include <stdio.h>
#include <limits.h>
int main(){
	int arr[][3] = {{2,9,15},{1,6,1}};
	int x=INT_MIN, y=INT_MAX, i=0,j=0;
	while (i<2){
		for(i=0;j<3 && i<2;(x=x<arr[i][j]?arr[i][j]:x),(y=y>arr[i][j]?arr[i][j]:y),j++,i++);
	}
		printf("%d",(x+y));
	
	
	return 0;
}
