#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    //Mensagem de boas Vindas ao jogo
    printf("** Bem vindo ao jogo Super Trunfo! ** \n");
    printf("Cadastre duas cartas: \n");
    
    printf(" \n");

    printf("-Carta 1: \n");
    
    //Criando as variáveis que são solicitadas na primeira carta.
    char codigo[2];
    char estado[16];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    unsigned long int pontos_turisticos;

    //Pedindo ao usuário os dados que fazem parte da primeira carta com uma mensagem diferente para cada um, solicitando as informações.
    printf("Digite o Estado da sua primeira carta: ");
    scanf("%s" , &estado); 

    printf("Digite o código que representa sua primeira carta: ");
    scanf("%s" , &codigo);

    printf("Digite o nome da cidade da sua primeira carta: ");
    scanf("%s" , &cidade);

    printf("Agora digite a população da sua primeria carta: ");
    scanf("%u" , &populacao);

    printf("Digite a área da sua primeira carta em km²: ");
    scanf("%f" , &area);

    printf("Agora digite o PIB da sua primeira carta: ");
    scanf("%f" , &pib);

    printf("Por fim digite o números de pontos turísticos da sua primeria carta: ");
    scanf("%u" , &pontos_turisticos);

    
    //criando as variaveis de densidade e pib per capta
    float densidade = populacao / area;
    float capta = pib / populacao;

    printf(" \n");

    //Exibindo ao usuário os dados da primeira carta, um por um, por linha.
    printf("-- Carta 1 --\n");
    printf("Estado: %s\n" , estado);         
    printf("Código: %s\n" , codigo);
    printf("Cidade: %s\n" , cidade);
    printf("População: %u\n" , populacao);
    printf("Área: %.2f km²\n" , area);
    printf("PIB: %.2f\n" , pib);
    printf("Pontos turísticos: %u\n" , pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n" , densidade);
    printf("PIB per capta: %.7f\n" , capta);

    //Criando as variáveis que são solicitadas na segunda carta.
    char codigo2[2];
    char estado2[16];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf(" \n");

    //Pedindo ao usuário os dados que fazem parte da segunda carta com uma mensagem diferente para cada um, solicitando as informações.
    printf("** Agora digite os valores da sua segunda carta em seguida: **\n");
    
    printf("Digite o Estado da sua segunda carta: ");
    scanf("%s" , &estado2); 

    printf("Digite o código que representa sua segunda carta: ");
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade da sua segunda carta: ");
    scanf("%s" , &cidade2);

    printf("Agora digite a população da sua segunda carta: ");
    scanf("%u" , &populacao2);

    printf("Digite a área da sua segunda carta em km²: ");
    scanf("%f" , &area2);

    printf("Agora digite o PIB da sua segunda carta: ");
    scanf("%f" , &pib2);

    printf("Por fim digite o números de pontos turísticos da sua segunda carta: ");
    scanf("%d" , &pontos_turisticos2);

    //criandoa as variaveis de densidade e pib per capta da segunda carta
    float densidade2 = populacao2 / area2;
    float capta2 = pib2 / populacao2;

    printf(" \n");

    //Exibindo ao usuário os dados da segunda carta, um por um, por linha.
    printf("-- Carta 2 --\n");
    printf("Estado: %s\n" , estado2);         
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %u\n" , populacao2);
    printf("Área: %.2f km²\n" , area2);
    printf("PIB: %.2f\n" , pib2);
    printf("Pontos turísticos: %d\n" , pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n" , densidade2);
    printf("PIB per capta: %.7f\n" , capta2);

    printf(" \n");

    //agora iniciar a parte de comparação das cartas
    
    //criando as variáveis de super poder
    unsigned long int superpoder = populacao + area + pib + pontos_turisticos + densidade + capta;
    unsigned long int superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + capta2;
   
    //criando a variavel para fazer as comparações
    int atributo, atributo2;
    int resultado, resultado2;
    
    //texto para fazer o menu interativo para ir para comparação das cartas
    printf("!!Comparação das cartas!!\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. Densidade.\n");
    printf("6. PIB per Capta.\n");
    printf("7. Super Poder.\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d" , &atributo);

    printf(" \n");

    //fazendo a logica para comparação do primeiro atributo mostrando a carta vencedora da comparação
    switch (atributo){
    case 1:
        resultado = populacao > populacao2 ? 1 : 0;
        if (populacao > populacao2){
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u --" , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (populacao == populacao2){
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u -- " , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Empate **\n");
        } else {
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u -- " , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 2:
        resultado = area > area2 ? 1 : 0;
        if (area > area2){
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (area == area2){
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 3:
        resultado = pib > pib2 ? 1 : 0;
        if (pib > pib2){
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (pib == pib2){
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 4:
        resultado = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
        if (pontos_turisticos > pontos_turisticos2){
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %u -- " , pontos_turisticos);
            printf("Carta 2: %d\n" , pontos_turisticos2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (pontos_turisticos == pontos_turisticos2){
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %d -- " , pib);
            printf("Carta 2: %d\n" , pib2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %u -- " , pontos_turisticos);
            printf("Carta 2: %d\n" , pontos_turisticos2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 5:
        resultado = densidade < densidade2 ? 1 : 0;
        if (densidade > densidade2){
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        } else if (densidade == densidade2){
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Carta %s Venceu!! **\n" , estado);
        }
        break;
    case 6:
        resultado = capta > capta2 ? 1 : 0;
        if (capta > capta2){
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (capta == capta2){
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 7:
        resultado = superpoder > superpoder2 ? 1 : 0;
        if (superpoder > superpoder2){
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (superpoder == superpoder2){
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf(" \n");
    
    //texto para fazer o menu interativo para ir para comparação da segunda carta
    printf("!!Agora escolha outro atributo!!\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. Densidade.\n");
    printf("6. PIB per Capta.\n");
    printf("7. Super Poder.\n");
    printf("Escolha outro atributo para comparar: ");
    scanf("%d" , &atributo2);

    printf(" \n");

    //fazendo a logica para comparação do segundo atributo mostrando a carta vencedora da comparação
    //"if(atributo2 != atributo){": para que os atributos sejam diferentes 
    if(atributo2 != atributo){
        switch (atributo2){
    case 1:
        resultado2 = populacao > populacao2 ? 1 : 0;
        if (populacao > populacao2){
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u --" , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (populacao == populacao2){
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u -- " , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Empate **\n");
        } else {
            printf("Atributo população escolhido: \n");
            printf("Carta 1: %u -- " , populacao);
            printf("Carta 2: %u\n" , populacao2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 2:
        resultado2 = area > area ? 1 : 0;
        if (area > area2){
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (area == area2){
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Área escolhido: \n");
            printf("Carta 1: %.2f -- " , area);
            printf("Carta 2: %.2f\n" , area2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 3:
        resultado2 = pib > pib2 ? 1 : 0;
        if (pib > pib2){
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (pib == pib2){
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pib escolhido: \n");
            printf("Carta 1: %.2f -- " , pib);
            printf("Carta 2: %.2f\n" , pib2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 4:
        resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
        if (pontos_turisticos > pontos_turisticos2){
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %u -- " , pontos_turisticos);
            printf("Carta 2: %d\n" , pontos_turisticos2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (pontos_turisticos == pontos_turisticos2){
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %d -- " , pib);
            printf("Carta 2: %d\n" , pib2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pontos Turisticos escolhido: \n");
            printf("Carta 1: %u -- " , pontos_turisticos);
            printf("Carta 2: %d\n" , pontos_turisticos2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 5:
        resultado2 = densidade < densidade2 ? 1 : 0;
        if (densidade > densidade2){
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        } else if (densidade == densidade2){
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Densidade escolhido: \n");
            printf("Carta 1: %.2f -- " , densidade);
            printf("Carta 2: %.2f\n" , densidade2);
            printf("** Carta %s Venceu!! **\n" , estado);
        }
        break;
    case 6:
        resultado2 = capta > capta2 ? 1 : 0;
        if (capta > capta2){
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (capta == capta2){
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Pib Per Capta escolhido: \n");
            printf("Carta 1: %.7f -- " , capta);
            printf("Carta 2: %.7f\n" , capta2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    case 7:
        resultado2 = superpoder > superpoder2 ? 1 : 0;
        if (superpoder > superpoder2){
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Carta %s Venceu!! **\n" , estado);
        } else if (superpoder == superpoder2){
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Empate **\n");
        } else {
            printf("Atributo Super Poder escolhido: \n");
            printf("Carta 1: %u -- " , superpoder);
            printf("Carta 2: %u\n" , superpoder2);
            printf("** Carta %s Venceu!! **\n" , estado2);
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }} else {
        printf(" \n");
        printf("Opção invalida! escolhas atributos diferentes para comparar.\n");
    }

    printf(" \n");

    //fazendo a logica para mostrar o resultado da comparação das cartas
    printf("--Somando os atributos: ");

    if (resultado == 1 && resultado2 == 1){
        printf("** Carta 1 venceu!! **\n");
    } else if (resultado != resultado2){
        printf("** Empate!! **\n");
    } else {
        printf("** Carta 2 Venceu!! **\n");
    }


    printf(" \n");
    
    //encerrando o jogo
    printf("** Obrigado por Jogar ;) **");
    

    return 0;
}