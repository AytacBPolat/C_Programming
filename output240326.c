#include <stdio.h>
#include <limits.h>

int main(){
char str[10] = "Study Tonight";
char name[] = "Andrew";
int i;
printf("%s\n",str);
for(i=0;i<sizeof(name);i++){
	printf("%c \n",name[i]);
}
	return 0;
}
