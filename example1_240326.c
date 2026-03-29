#include <stdio.h>
/*
	Dizideki en büyük ve en küçük sayýyý bulan programý yazýn
	4 deðiþken kullanýlabilir. (bignum, snum, arr, i)
	1 tane complex for kullanýlacak.
	Dizinin eleman sayýsý bilinmiyor.
*/
int main(){
	int arr[100],bignum,snum,i;
	printf("Enter the numbers.\n");
	
for (i = 0; i < 100 && scanf("%d", &arr[i]) == 1; i++) {
        if (i == 0) {
            bignum = arr[i];
            snum = arr[i];
        } else {
            if (arr[i] > bignum) bignum = arr[i];
            if (arr[i] < snum) snum = arr[i];
        }
    }
	printf("The biggest number of the array is : %d \n Smallest number of the array is: %d",bignum,snum);
	
	return 0;
}
