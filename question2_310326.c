#include <stdio.h>
int main(){
	int num[6] = {15, 40, 60, 100, 90, 70};
	int *ptr;
	ptr = num;				//Ptr'yi num'un ilk adresine atadık.
	printf("%d\n",*++ptr); 	//Ptr'nin ikinci adresini göstermesine neden oldu. 40 basacak.
	printf("%d\n",*ptr);	//Adres şu an 40 olduğu için 40 basacak.
	ptr++;					//Ptr'yi bir sonraki adres olan 60 a ilerlettik.
	*ptr = 50;				//Ptr'nin bulunduğu adresteki sayıyı 50 yaptık.Artık num[2] = 50.
	printf("%d\n",*(ptr++)); //Şu an ptr num[2] de olduğu için 50 basıp bir sonraki adrese kayacak.
	printf("%d\n",*ptr++);	//Ekrana 100 basıp sonraki adrese geçecek.
	printf("%d\n",*ptr);	//Ekrana 90 basacak.
	
	
	return 0;
}
