#include <stdio.h>
//1'den N'e kadar olan sayılar palindrom mu değil mi bastıracak programı yazın.
int main(){
	int n,revnum=0,num;
	printf("Enter a number: \n");
	scanf("%d",&n);
	while(n>0){
	num =n;
	while(num>0){
		revnum = revnum*10 + num%10;
		num/=10;
	}
	(revnum == n) ? printf("%d \n",n) : 0;
	n--;
	revnum=0;
			}
	return 0;
}
