#include <stdlib.h>
#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main(int argc, char **argv){
    printf("Logica em programacao C\n");
    printf("Este codigo necessariamente vai ser executado.\n");

    if(FALSE){
        printf("\n\n\n\n\nEste codigo pode ou nao ser executado.\n\n\n\n\n\n");
    }
    else {
        printf("\n\n\n\n\nIsso eh o que acontece se for falso.\n\n\n\n\n");
    }

    printf("E aqui estah o que acontece depois.\n");

    return 0;
}

