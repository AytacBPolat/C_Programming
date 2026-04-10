#include <stdio.h>
int main(){
	int num=23;
	int *p;
	p = &num;
	
	printf("%d\n", num); 			//23 
	printf("%d\n", *p);				//23
	printf("%p\n", p);				//23 ün adresini tutar
	printf("%p\n", &num);			//num deðiþkeninin adresini yani 23 ün adresini tutar
	printf("%p\n", &p);				//p nin adresini tutar
	*p = 10;						//p nin adresini tuttuðu deðeri deðiþtirdik dolayýsýyla num da deðiþecektir
	printf("%d\n", num);			//10
	printf("%d\n", *p);				//10
	
	return 0;
}
