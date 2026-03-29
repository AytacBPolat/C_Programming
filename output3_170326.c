#include <stdio.h>
#include <math.h>
int main(){
	printf("%d\n",MixNum(212,2));
	return 0;
}
int MixNum(int num, int i){
	int ret = (i == 0)? num : (((num%10)*pow(10,1-i)) + MixNum(num/10, --i));
	return ret;
}
