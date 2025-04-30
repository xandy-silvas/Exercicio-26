#include <stdio.h>

long long exponenciacao_rapida(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    
    long long metade = exponenciacao_rapida(x, n / 2);
    
    if (n % 2 == 0)
        return metade * metade;
    
    else
        return x * metade * metade;
}

int main() {
    int x, n;
    
    printf("Digite a base (x): ");
    scanf("%d", &x);
    printf("Digite o expoente (n): ");
    scanf("%d", &n);
    
    long long resultado = exponenciacao_rapida(x, n);
    printf("%d elevado a %d = %lld\n", x, n, resultado);
    
    return 0;
}
