#include <stdio.h>

// Fonksiyon prototipi: 1 parametre alýyor (5 sütunlu bir matris pointer'ý)
int FindNeg(int arr[][5]);

int main() {
    // Matris tanýmlamasý: Süslü parantez ve virgül kullanýlýr
    int matrix[][5] ={10, -5, 7, 8, -6, 4, -2, 1, 9, -12};

    printf("The Count of the negative number is : %d\n", FindNeg(matrix));

    return 0;
}

int FindNeg(int arr[][5]) {
    // 3 deðiþken kýsýtlamasý: i, j, cnt
    int i = 0, j, cnt = 0;

    // Sadece while loop kýsýtlamasý
    while (i <(sizeof(arr)/sizeof(arr[0][0]))) {
        j = 0;
        while (j <(sizeof(arr[0])/sizeof(arr[0][0]))) {
            // Eðer sayý negatifse sayacý artýr
         cnt = arr [i][j] <0 ? cnt+1 : cnt;
            j++;
        }
        i++;
    }
    return cnt;
}
