#include <stdio.h>
/*Verilen tam sayının sadece tek basamaklarını toplayan program yazın. 
Sadece 2 değişken kullanılabilir. (num ve sum)
num kullanıcı tarafından belirlenecek.
do while kullanılacak
if kullanılmayacak
findodd adlı makro tanımlayıp tek sayıları bulacak bir makro tanımlanmalı
*/
#define findodd(num)(num%2 == 0? 0:num)
int main(){
	int num,sum=0;
	printf("Enter a number. \n");
	scanf("%d",&num);
	do{
		sum+=findodd(num%10);
		num/=10;
	}
	while(num>0);
	printf("The sum of the odd numbers for the given number is :%d ",sum);
	
	
	
	return 0;
}
