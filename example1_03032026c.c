#include <stdio.h>
int main(){
	int amount, note200=0, note100=0,note50=0,note5=0,note1=0;
	printf("Enter the money amount: \n");
	scanf("%d",&amount);
	
		note200 = amount/200;
		amount= amount - (note200*200);
	
	
		note100 = amount/100;
		amount = amount -(note100 *100);
	
	
		note50 = amount/50;
		amount= amount -(note50*50);
	
	
		note5 = amount/5;
		amount=amount-(note5*5);

		note1 = amount/1;
		amount=amount - (note1*1);
	
	printf("The amount of money has %d note200, %d note 100, %d note50, %d note5, %d note1",note200,note100,note50,note5,note1);
	
	return 0;
}
