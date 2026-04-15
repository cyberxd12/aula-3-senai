#include <stdio.h>
#include <stdbool.h>

void mostrar_menu() {
    printf("\n=== ARENA DE BATALHA ===\n");
    printf("1. Treinar Golpes (For)\n");
    printf("2. Lutar na Arena (While)\n");
    printf("3. Descansar (Sair)\n");
    printf("Escolha uma opcao: ");
}

void treinar(int golpes){
    
    for(int c = 1;c <= golpes;c++){
        printf("🗡️ Golpe %i desferido!\n", c);
    }
}

void batalhar(int energia){
    while(energia > 0 ){
        printf("🛡️ A lutar... Energia restante: %i\n", energia);
        energia--;
    }
    printf("💀 O aventureiro desmaiou de cansaço!\n");
}

int main() {

    bool menu = true;
    int golpes, energia,opc;
    
    do{
        mostrar_menu();
        scanf("%i", &opc);
        
        printf("%i",opc);
        
        if(opc == 1){
            printf("quantos golpes quer dar: ");
            scanf("%i", &golpes);
            treinar(golpes);
        }else if( opc == 2){
            printf("voce possui 5 de energia.\n");
            batalhar(5);
        }else if(opc == 3){
            printf("Adeus verme!");
            menu == false;
        }else{
            printf("opção invalida!!!\n\n\n\n");
        }
    }while(menu == true);
    
    return 0;
}