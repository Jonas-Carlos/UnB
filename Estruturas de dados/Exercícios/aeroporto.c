#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int verificar_sigla(const char *aeroporto, const char *sigla) {
    int len_sigla = 3;  
    int i = 0, j = 0;

    if (sigla[2] == 'X') {
        len_sigla = 2;
    }

    while (aeroporto[i] != '\0' && j < len_sigla) {
        if (toupper(aeroporto[i]) == sigla[j]) {
            j++;  
        }
        i++;  
    }

    return (j == len_sigla);
}

int main() {
    char aeroporto[100005], sigla[4];
    
    scanf("%s", aeroporto);
    scanf("%s", sigla);
    
    if (verificar_sigla(aeroporto, sigla)) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    return 0;
}
