#include <stdio.h>
//2'den N'e kadar olan asal sayýlarý yazan program.
//N kullanýcý tarafýndan girilmeli. Sadece 4 deðiþken olmalý. 2 tane while döngüsü kullanýlabilir.
#include <stdbool.h>
int main(){
	int n,i=2,j;
	bool condition;
	printf("Enter a number: \n");
	scanf("%d",&n);

	while(i<=n){
		j=2;
		condition = true;
		while(j <= i/2 && condition){
			if(i%j == 0){
				condition = false;
			}
			j++;
		}
		if(condition == true){
			printf("%d ",i);
		}
		i++;
	}
	
	return 0;
	
}
