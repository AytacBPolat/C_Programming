#include <stdio.h>
/*
Ýki sayý arasýndaki palindrom sayýlarý bulan programý yazýn.
Sadece 2 for loop kullanýlabilir.
Deðiþkenlere num1,num2 adlandýrmasý yapýlacak.
En fazla 4 variable kullanýlabilir
If kullanýlamaz.
*/
int main(){
	int num1,num2,orgnum,temp;
	printf("Enter the numbers.\n");
	scanf("%d%d",&num1,&num2);
	for(;num1<=num2;num1++){
		for(orgnum=0,temp=num1;temp>0;orgnum=orgnum*10+temp%10,temp/=10);
		(orgnum == num1)? printf("%d ",num1) : 0;
		}
	return 0;
}
