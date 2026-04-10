#include <stdio.h>
int main(){
	int nums[]={3,12,9,5,2,4,7};
	int i,j,k;
	int *p = nums+3;		//P,5'i gösteriyor.
	i = ++(*--p);			/*i, P'nin adresinden bir önceki adresin değerini 1 arttırıyor.
							Dizi artık {3,12,10,5,2,4,7} şeklinde gidiyor.i'nin değeri 10 oldu.*/
	for(;i<11;p++,i++);		// p,5'i gösteriyor
	j=*p;					// j = 5
	k=++nums[*(++p)];		/* P nin nums olarak değeri 4.sıradaki sayı yani nums[2] sayısını gösterecek.
							Bu da daha önce değiştirilmiş olan 10 sayısı ama hemen öncesinde ++ işlemi
							olacağı için sayının değeri 11 olmuş oldu bu yüzden i'nin değeri de değişti*/
	printf("%d %d %d",i,j,k); 		//i=11 j=5 k=11 olmuş oldu
	
	return 0;
}
