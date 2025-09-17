#include <stdio.h>

int main() {

//Declaração de Variáveis
int opcao; 
float saldo = 7500.00;
float valor;
int chavePix;

do
{ 
 //Menu
    printf("\n=== Banco em C ===\n");
    printf("1 - Verificar Saldo\n");
    printf("2 - Fazer Depósito\n");
    printf("3 - Realizar Pix\n");
    printf("4 - Sacar\n");
    printf("5 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
     case 1: //Saldo
         printf("Seu saldo atual: R$%.2f\n", saldo);
        break;
     
     case 2: //Depósito
         printf("Digite o valor do depósito: ");
         scanf("%f", &valor);
          
         if (valor > 0)
         {
            saldo += valor; 
            printf("Depósito de R$%.2f realizado com sucesso!\n", valor);
         }
         else {
            printf("Valor inválido!\n");
         }
         
        break; 
     case 3: //Pix
         printf("\nDigite a chave Pix: ");
         scanf("%d", &chavePix); 

         if (chavePix == 11223344)
         {
            printf("Digite o valor do Pix: ");
            scanf("%f", &valor);
            
            if (valor > 0 && valor<= saldo)
            {
                saldo -= valor;
                printf("Pix de R$%0.2f enviado com sucesso!\n", valor);
            } else{
                printf("Saldo insuficiente ou valor inválido!\n"); 
            }
            
         } else {
            printf("Chave Pix não reconhecida!\n"); 
         }
   
        break;  
         
     case 4: //Saque
         printf("\nDigite o valor do saque: ");
         scanf("%f", &valor);
          
          if (valor > 0 && valor <= saldo)
          {
            saldo -= valor;
            printf("Saque de R$%0.2f realizado com sucesso!\n", valor);
          } else {
            printf("Saldo insuficiente ou valor inválido!\n");
          }
          
        break;
     
     case 5: //Sair
         printf("\nSaindo do aplicativo... Até logo!\n");
        break;     
        

    
    default:
        printf("\nOpção inválida! Tente novamente.\n");

        break;
    }


} while (opcao != 5);

return 0;

}