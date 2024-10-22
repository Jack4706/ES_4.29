#include <stdio.h>

int main() {
    int num1, num2;
    int prodotto = 0;

    printf("inserisci il primo numero:\n");
    scanf("%d", &num1);
    printf("inserisci il secondo numero:\n");
    scanf("%d", &num2);

    for(int i = 0; i < num2; i++) {
        prodotto += num1;
    }

    printf("il prodotto e': %d",prodotto);

    return 0;
}
