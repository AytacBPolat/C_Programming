#include <stdio.h>
int main(){
	int res=2;
	printf("%d",findnum(4,res));
	return 0;
}
int findnum(int n, int result){
	int res =(n==1)? result : findnum(n-1, n*result);
	return res;
}
