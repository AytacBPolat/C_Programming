#include <stdio.h>

int main() {
    int firstdig, lastdig, midsum = 0, num;
    
    printf("Enter a number: \n");
    scanf("%d", &num);
    for (lastdig = num % 10, num /= 10; num >= 10; num /= 10) {
        midsum += (num % 10);
    }
    
    firstdig = num; // Döngü bittiğinde num'ın içinde sadece ilk basamak kalır
    
    printf("First dig: %d \nMidsum: %d \nLast dig: %d \n", firstdig, midsum, lastdig);
    
    return 0;
}
