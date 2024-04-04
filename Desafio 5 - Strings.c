#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    int i, contador;

    // mensagem identificacao
    printf("\n\nContador de letras minusculas presente no nome\n\n");
    printf("\n\n-----------------------------------\n\n");
    printf("\n\nContador de letras maiusculas presente no nome\n\n");

    // capturar nome digitado
    printf("\nInforme seu nome:");
    fgets(nome, sizeof(nome), stdin); // captura do conjunto de caracteres informados
    nome[strcspn(nome, "\n") -1] = '\0';

    i = 0;
    contador = 0;
    // estrutura de repeticao pra recorrer a string
    do {
        switch (nome[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                contador++;
                break;
            default:
                break;
        }
        i++;
    } while (nome[i]!= '\0');

    
    // impressao do nome e qtd de vogais
    printf("\nO seu nome %s contem %d letras minusculas", nome, contador);
    printf("\nO seu lugar %s contem %d letras maiusculas", nome, contador);
}

//Observacao: meu nome por si tem 21 letras minusculas e 3 letras maiusculas incluindo meus sobrenomes.