int main(){
	char str[] = {"The Legend of Sleepy Hollow"};
	Revise(str);
	printf("%s",str);
	return 0;
}
void Revise(char *p){
	int x;
	for(x=0;*(p+x)!='\0';x++);
	for(;*(++p)!='\0';*p=*(p+x),x--);
}
