#include <stdio.h>
/*
	Matrisin diagonel toplamýný bulan program 
	Fonksiyon SumDiag matrisin diagonelini toplasýn
	Fonksiyon matrisin boyutunu mxn kabul etsin
	Fonksiyon sadece 1 formal parametre alabilir.
	2 tane for loop kullanýlacak.
	Fonksiyon içinde 3 deðiþken kullanýlabilir.
	Mainde bir pointer tanýmlanmayacak.
	Matrisin boyutu 4x3 olacak.
*/
int SumDiag (int (*)[3]);
int main(){
	int mat[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	printf("The sum of the diagonal is: %d",SumDiag(mat));
	return 0;
}
int SumDiag(int (*p)[3]){
	int i, j, sum=0;
	for(i=0;i<sizeof(p);i++){
		for(j=0;j<3;j++){
			if(i==j){
				sum+=*(*(p+i)+j);
			}
		}
	}
	return sum;
}
