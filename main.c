#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sala1[5][8];
    int sala2[6][11];
    int sala3[8][9];
    int  fil, col;
    int filInd, colInd;
    int tentativa = 0;
    int vago = 0, reservado = 1;
    int sala, resposta, escolha, decisao;
    int qtdReservas, x;
    int qtdlugares1 = 0, qtdMeia1 = 0, qtdInt1 = 0;
    int qtdlugares2 = 0, qtdMeia2 = 0, qtdInt2 = 0;
    int qtdlugares3 = 0, qtdMeia3 = 0, qtdInt3 = 0;
    float valor1 = 35.50, valor2 = 55.45, valor3 = 70.00;
    float valorM1 = 17.75, valorM2 = 27.72, valorM3 = 35.00;
    int continuar = 1, continuarUsu = 1;
    int usuario, senhaUsu;
    int ra, senha;

//Início SALA 01
    for(fil = 0; fil < 5; fil ++){
                for(col = 0; col < 8; col ++){
                        sala1[fil][col] = 0;
                }
    }

//Início SALA 02
    for(fil = 0; fil < 6; fil ++){
                for(col = 0; col < 11; col ++){
                        sala2[fil][col] = 0;
                }
    }

//Início SALA 03
    for(fil = 0; fil < 8; fil ++){
                for(col = 0; col < 9; col ++){
                        sala3[fil][col] = 0;
                }
    }

    while (continuar == 1){

//Escolha da sala
        printf("\n");
        printf("  - Escolha a sala - \n");
        printf("SALA    R$ INTEIRA    R$ MEIA\n");
        printf(" 01  -   R$35.50   -  R$17.75\n");
        printf(" 02  -   R$55.45   -  R$27.72\n");
        printf(" 03  -   R$70.00   -  R$35.00\n");
        printf("\nSala escolhida: ");
            scanf("%i", &sala);

    switch(sala){

//Inicio dos códigos da sala 01
    case 1:

        printf("\n ******************* SALA 01 ******************* \n\n");
        printf("                   * Colunas * \n\n");
        printf("      0  -  1  -  2  -  3  -  4  -  5  -  6  -  7\n");

        for(fil = 0; fil < 5; fil ++){
                if(fil == 0){
                    printf("A");
                }else if(fil == 1){
                    printf("B");
                }else if(fil == 2){
                    printf("C");
                }else if(fil == 3){
                    printf("D");
                }else if(fil == 4){
                    printf("E");
                }
                for(col = 0; col < 8; col ++)
                    printf("     %i", sala1[fil][col]);
            printf("\n");
        }

        printf("\n                        Quantidade disponivel: %i\n", 40 - qtdlugares1);

//Decisão inicial de reserva
        printf("\nGostaria de reservar?\n");
        printf("   SIM - 1 / NAO - 2: ");
            scanf("%i", &resposta);

//SE a resposta for afirmativa
        if (resposta == 1){
//Quantidade a reservar
            printf("\nQuantidade de reservas: ");
                scanf("%i", &qtdReservas);

            for(x = 1; x <= qtdReservas; x ++){

        printf("\nFileira (horizontal) desejada (iniciando em 0): \n");
        printf("\nFileira A - Digite 0");
        printf("\nFileira B - Digite 1");
        printf("\nFileira C - Digite 2");
        printf("\nFileira D - Digite 3");
        printf("\nFileira E - Digite 4");
        printf("\n                    Fileira desejada: ");
            scanf("%i", &fil);
        printf("\n");

        //Exibição da fileira desejada (apenas)
        printf("                   * Colunas * \n\n");
        printf("       0  -  1  -  2  -  3  -  4  -  5  -  6  -  7\n");

//Exibição da Fileira 0
        if(fil == 0){
            printf(" A     %i     %i     %i     %i     %i     %i     %i     %i", sala1[0][0], sala1[0][1], sala1[0][2],
sala1[0][3], sala1[0][4], sala1[0][5], sala1[0][6], sala1[0][7]);
//Exibição da Fileira 1
        }else if(fil == 1){
            printf(" B     %i     %i     %i     %i     %i     %i     %i     %i", sala1[1][0], sala1[1][1], sala1[1][2],
sala1[1][3], sala1[1][4], sala1[1][5], sala1[1][6], sala1[1][7]);
//Exibição da Fileira 2
        }else if(fil == 2){
            printf(" C     %i     %i     %i     %i     %i     %i     %i     %i", sala1[2][0], sala1[2][1], sala1[2][2],
sala1[2][3], sala1[2][4], sala1[2][5], sala1[2][6], sala1[2][7]);
//Exibição da Fileira 3
        }else if(fil == 3){
            printf(" D     %i     %i     %i     %i     %i     %i     %i     %i", sala1[3][0], sala1[3][1], sala1[3][2],
sala1[3][3], sala1[3][4], sala1[3][5], sala1[3][6], sala1[3][7]);
//Exibição da Fileira 4
        }else if(fil == 4){
            printf(" E     %i     %i     %i     %i     %i     %i     %i     %i", sala1[4][0], sala1[4][1], sala1[4][2],
sala1[4][3], sala1[4][4], sala1[4][5], sala1[4][6], sala1[4][7]);
        }else{
            printf("Valor invalido.\n");
            break;
        }

        printf("\n\nColuna (vertical) desejada (iniciando em 0): ");
            scanf("%i", &col);

        printf("\nConfirmar escolha?\n");
        printf("SIM - 1 / NAO - 2: ");
            scanf("%i", &decisao);

    if(sala1[fil][col] == 0){//Verificação de disponibilidade do assento

    if(decisao == 1){

            printf("\nSelecione a forma de pagamento\n");
            printf("1 - Dinheiro\n");
            printf("2 - Cartao DEBITO\n");
            printf("                 Forma escolhida: ");
                scanf("%i", &resposta);

//Pagamento em dinheiro
//Julgamento se for estudante
    if(resposta == 1){
        printf("\nEstudante? - Pagamento de meia entrada\n");
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("O valor e %.2f, realize o pagamento e bom filme!\n", valorM1);
                        qtdMeia1 = qtdMeia1 + 1;
                        qtdlugares1 = qtdlugares1 + 1;
                        sala1[fil][col] = 1;
                    }else{
                        printf("Valor invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("O valor e %.2f, realize o pagamento e bom filme!\n", valor1);
                qtdInt1 = qtdInt1 + 1;
                qtdlugares1 = qtdlugares1 + 1;
                sala1[fil][col] = 1;
            }else{
                printf("\nOpcao invalida\n");
            }
//Pagamento no cartao
    }else if (resposta == 2){
        printf("\nEstudante? - Pagamento de meia entrada\n"); //Julgamento de estudante
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("Digite a senha: ");
                            scanf("%i", &senha);
                            if(senha == 1234){
                                printf("Bom filme!\n");
                                sala1[fil][col] = 1;
                                qtdlugares1 = qtdlugares1 + 1;
                                qtdMeia1 = qtdMeia1 + 1;
                            }else{
                                printf("Cartao invalido\n");
                            }
                    }else{
                        printf("RA invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("Digite a senha: ");
                    scanf("%i", &senha);
                    if(senha == 1234){
                        printf("Bom filme!\n");
                        qtdlugares1 = qtdlugares1 + 1;
                        qtdInt1 = qtdInt1 + 1;
                        sala1[fil][col] = 1;
                    }else{
                        printf("Cartao invalido\n");
                    }
            }
    }else{
        printf("\nOpcao invalida\n");
    }

    }else{
        printf("Obrigado, volte sempre!\n");
        }
}else{
    printf("Assento reservado previamente, tente novamente.\n");
}
            }

    break;
//FIM dos códigos da Sala 01

//INICIO dos códigos da sala 02
    case 2:

    printf("\n ******************* SALA 02 ******************* \n\n");
        printf("                   * Colunas * \n\n");
        printf("      0  -  1  -  2  -  3  -  4  -  5  -  6  -  7  -  8  -  9  -  10\n");

        for(fil = 0; fil < 6; fil ++){
                if(fil == 0){
                    printf("A");
                }else if(fil == 1){
                    printf("B");
                }else if(fil == 2){
                    printf("C");
                }else if(fil == 3){
                    printf("D");
                }else if(fil == 4){
                    printf("E");
                }else if(fil == 5){
                    printf("F");
                }

                for(col = 0; col < 11; col ++)
                    printf("     %i", sala2[fil][col]);
            printf("\n");
        }

        printf("\n                                          Quantidade disponivel: %i\n", 66 - qtdlugares2);

//Decisão inicial de reserva
        printf("\nGostaria de reservar?\n");
        printf("   SIM - 1 / NAO - 2: ");
            scanf("%i", &resposta);

//SE a resposta for afirmativa
        if (resposta == 1){
//Quantidade a reservar
            printf("\nQuantidade de reservas: ");
                scanf("%i", &qtdReservas);

            for(x = 1; x <= qtdReservas; x ++){

        printf("\nFileira (horizontal) desejada (iniciando em 0): \n");
        printf("\nFileira A - Digite 0");
        printf("\nFileira B - Digite 1");
        printf("\nFileira C - Digite 2");
        printf("\nFileira D - Digite 3");
        printf("\nFileira E - Digite 4");
        printf("\nFileira F - Digite 5");
        printf("\n                    Fileira desejada: ");
            scanf("%i", &fil);
        printf("\n");

        //Exibição da fileira desejada (apenas)
        printf("                   * Colunas * \n\n");
        printf("       0  -  1  -  2  -  3  -  4  -  5  -  6  -  7  -  8  -  9  -  10\n");

//Exibição da Fileira 0
        if(fil == 0){
            printf(" A     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[0][0], sala2[0][1], sala2[0][2],
sala2[0][3], sala2[0][4], sala2[0][5], sala2[0][6], sala2[0][7], sala2[0][8], sala2[0][9], sala2[0][10]);
//Exibição da Fileira 1
        }else if(fil == 1){
             printf(" B     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[1][0], sala2[1][1], sala2[1][2],
sala2[1][3], sala2[1][4], sala2[1][5], sala2[1][6], sala2[1][7], sala2[1][8], sala2[1][9], sala2[1][10]);
//Exibição da Fileira 2
        }else if(fil == 2){
            printf(" C     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[2][0], sala2[2][1], sala2[2][2],
sala2[2][3], sala2[2][4], sala2[2][5], sala2[2][6], sala2[2][7], sala2[2][8], sala2[2][9], sala2[2][10]);
//Exibição da Fileira 3
        }else if(fil == 3){
            printf(" D     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[3][0], sala2[3][1], sala2[3][2],
sala2[3][3], sala2[3][4], sala2[3][5], sala2[3][6], sala2[3][7], sala2[3][8], sala2[3][9], sala2[3][10]);
//Exibição da Fileira 4
        }else if(fil == 4){
            printf(" E     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[4][0], sala2[4][1], sala2[4][2],
sala2[4][3], sala2[4][4], sala2[4][5], sala2[4][6], sala2[4][7], sala2[4][8], sala2[4][9], sala2[4][10]);
//Exibição da Fileira 5
        }else if(fil == 5){
            printf(" F     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala2[5][0], sala2[5][1], sala2[5][2],
sala2[5][3], sala2[5][4], sala2[5][5], sala2[5][6], sala2[5][7], sala2[5][8], sala2[5][9], sala2[5][10]);
        }else{
            printf("Valor invalido.\n");
            break;
        }

        printf("\n\nColuna (vertical) desejada (iniciando em 0): ");
            scanf("%i", &col);

        printf("\nConfirmar escolha?\n");
        printf("SIM - 1 / NAO - 2: ");
            scanf("%i", &decisao);

    if(sala2[fil][col] == 0){//Verificação de disponibilidade do assento

    if(decisao == 1){

            printf("\nSelecione a forma de pagamento\n");
            printf("1 - Dinheiro\n");
            printf("2 - Cartao DEBITO\n");
            printf("                 Forma escolhida: ");
                scanf("%i", &resposta);

//Pagamento em dinheiro
    if(resposta == 1){
        printf("\nEstudante? - Pagamento de meia entrada\n");//Julgamento se for estudante
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("O valor e %.2f, realize o pagamento e bom filme!\n", valorM2);
                        qtdMeia2 = qtdMeia2 + 1;
                        qtdlugares2 = qtdlugares2 + 1;
                        sala2[fil][col] = 1;
                    }else{
                        printf("Valor invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("O valor e %.2f, realize o pagamento e bom filme!\n", valor2);
                qtdInt2 = qtdInt2 + 1;
                qtdlugares2 = qtdlugares2 + 1;
                sala2[fil][col] = 1;
            }else{
                printf("\nOpcao invalida\n");
            }
//Pagamento no cartao
    }else if (resposta == 2){
        printf("\nEstudante? - Pagamento de meia entrada\n"); //Julgamento de estudante
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("Digite a senha: ");
                            scanf("%i", &senha);
                            if(senha == 1234){
                                printf("Bom filme!\n");
                                sala2[fil][col] = 1;
                                qtdlugares2 = qtdlugares2 + 1;
                                qtdMeia2 = qtdMeia2 + 1;
                            }else{
                                printf("Cartao invalido\n");
                            }
                    }else{
                        printf("RA invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("Digite a senha: ");
                    scanf("%i", &senha);
                    if(senha == 1234){
                        printf("Bom filme!\n");
                        qtdlugares2 = qtdlugares2 + 1;
                        qtdInt2 = qtdInt2 + 1;
                        sala1[fil][col] = 1;
                    }else{
                        printf("Cartao invalido\n");
                    }
            }
    }else{
        printf("\nOpcao invalida\n");
    }

    }else{
        printf("Obrigado, volte sempre!\n");
    }
        }else{
            printf("Acesso ja reservado anteriormente, tente outro.\n");
        }
            }
}
    break;
//FIM dos códigos da Sala 02

//INICIO dos códigos da sala 03
    case 3:

        printf("\n ******************* SALA 03 ******************* \n\n");
        printf("                   * Colunas * \n\n");
        printf("      0  -  1  -  2  -  3  -  4  -  5  -  6  -  7  -  8\n");

        for(fil = 0; fil < 8; fil ++){
                if(fil == 0){
                    printf("A");
                }else if(fil == 1){
                    printf("B");
                }else if(fil == 2){
                    printf("C");
                }else if(fil == 3){
                    printf("D");
                }else if(fil == 4){
                    printf("E");
                }else if(fil == 5){
                    printf("F");
                }else if(fil == 6){
                    printf("G");
                }else if(fil == 7){
                    printf("H");
                }

                for(col = 0; col < 9; col ++)
                    printf("     %i", sala3[fil][col]);
            printf("\n");
        }

        printf("\n                              Quantidade disponivel: %i\n", 72 - qtdlugares3);

//Decisão inicial de reserva
        printf("\nGostaria de reservar?\n");
        printf("   SIM - 1 / NAO - 2: ");
            scanf("%i", &resposta);

//SE a resposta for afirmativa
        if (resposta == 1){
//Quantidade a reservar
            printf("\nQuantidade de reservas: ");
                scanf("%i", &qtdReservas);

            for(x = 1; x <= qtdReservas; x ++){

        printf("\nFileira (horizontal) desejada (iniciando em 0): \n");
        printf("\nFileira A - Digite 0");
        printf("\nFileira B - Digite 1");
        printf("\nFileira C - Digite 2");
        printf("\nFileira D - Digite 3");
        printf("\nFileira E - Digite 4");
        printf("\nFileira F - Digite 5");
        printf("\nFileira G - Digite 6");
        printf("\nFileira H - Digite 7");
        printf("\n                    Fileira desejada: ");
            scanf("%i", &fil);
        printf("\n");

        //Exibição da fileira desejada (apenas)
        printf("                   * Colunas * \n\n");
        printf("       0  -  1  -  2  -  3  -  4  -  5  -  6  -  7  -  8\n");

//Exibição da Fileira 0
        if(fil == 0){
            printf(" A     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[0][0], sala3[0][1], sala3[0][2],
sala3[0][3], sala3[0][4], sala3[0][5], sala3[0][6], sala3[0][7], sala3[0][8]);
//Exibição da Fileira 1
        }else if(fil == 1){
            printf(" B     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[1][0], sala3[1][1], sala3[1][2],
sala3[1][3], sala3[1][4], sala3[1][5], sala3[1][6], sala3[1][7], sala3[1][8]);
//Exibição da Fileira 2
        }else if(fil == 2){
            printf(" C     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[2][0], sala3[2][1], sala3[2][2],
sala3[2][3], sala3[2][4], sala3[2][5], sala3[2][6], sala3[2][7], sala3[2][8]);
//Exibição da Fileira 3
        }else if(fil == 3){
            printf(" D     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[3][0], sala3[3][1], sala3[3][2],
sala3[3][3], sala3[3][4], sala3[3][5], sala3[3][6], sala3[3][7], sala3[3][8]);
//Exibição da Fileira 4
        }else if(fil == 4){
            printf(" E     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[4][0], sala3[4][1], sala3[4][2],
sala3[4][3], sala3[4][4], sala3[4][5], sala3[4][6], sala3[4][7], sala3[4][8]);
//Exibição da Fileira 5
        }else if(fil == 5){
            printf(" F     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[5][0], sala3[5][1], sala3[5][2],
sala3[5][3], sala3[5][4], sala3[5][5], sala3[5][6], sala3[5][7], sala3[5][8]);
        }else if(fil == 6){
            printf(" G     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[6][0], sala3[6][1], sala3[6][2],
sala3[6][3], sala3[6][4], sala3[6][5], sala3[6][6], sala3[6][7], sala3[6][8]);
        }else if(fil == 7){
            printf(" H     %i     %i     %i     %i     %i     %i     %i     %i     %i", sala3[7][0], sala3[7][1], sala3[7][2],
sala3[7][3], sala3[7][4], sala3[7][5], sala3[7][6], sala3[7][7], sala3[7][8]);
        }else{
            printf("Valor invalido.\n");
            break;
        }

        printf("\n\nColuna (vertical) desejada (iniciando em 0): ");
            scanf("%i", &col);

        printf("\nConfirmar escolha?\n");
        printf("SIM - 1 / NAO - 2: ");
            scanf("%i", &decisao);

    if(sala3[fil][col] == 0){//Verificação de disponibilidade do assento

    if(decisao == 1){

            printf("\nSelecione a forma de pagamento\n");
            printf("1 - Dinheiro\n");
            printf("2 - Cartao DEBITO\n");
            printf("                 Forma escolhida: ");
                scanf("%i", &resposta);

//Pagamento em dinheiro
    if(resposta == 1){
        printf("\nEstudante? - Pagamento de meia entrada\n");//Julgamento se for estudante
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("O valor e %.2f, realize o pagamento e bom filme!\n", valorM3);
                        qtdMeia3 = qtdMeia3 + 1;
                        qtdlugares3 = qtdlugares3 + 1;
                        sala3[fil][col] = 1;
                    }else{
                        printf("Valor invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("O valor e %.2f, realize o pagamento e bom filme!\n", valor3);
                qtdInt3 = qtdInt3 + 1;
                qtdlugares3 = qtdlugares3 + 1;
                sala3[fil][col] = 1;
            }else{
                printf("\nOpcao invalida\n");
            }
//Pagamento no cartao
    }else if (resposta == 2){
        printf("\nEstudante? - Pagamento de meia entrada\n"); //Julgamento de estudante
        printf("SIM - 1 / NAO - 2");
        printf("\nResposta: ");
            scanf("%i", &resposta);
            if(resposta == 1){
                printf("Digite o RA: ");
                    scanf("%i", &ra);
                    if(ra == 1234567890){
                        printf("Digite a senha: ");
                            scanf("%i", &senha);
                            if(senha == 1234){
                                printf("Bom filme!\n");
                                sala3[fil][col] = 1;
                                qtdlugares3 = qtdlugares3 + 1;
                                qtdMeia3 = qtdMeia3 + 1;
                            }else{
                                printf("Cartao invalido\n");
                            }
                    }else{
                        printf("RA invalido\n");
                    }
//Se não for estudante
            }else if(resposta == 2){
                printf("Digite a senha: ");
                    scanf("%i", &senha);
                    if(senha == 1234){
                        printf("Bom filme!\n");
                        qtdlugares3 = qtdlugares3 + 1;
                        qtdInt3 = qtdInt3 + 1;
                        sala3[fil][col] = 1;
                    }else{
                        printf("Cartao invalido\n");
                    }
            }
    }else{
        printf("\nOpcao invalida\n");
    }

    }else{
        printf("Obrigado, volte sempre!\n");
    }
        }else{
            printf("Acesso ja reservado anteriormente, tente outro.\n");
        }
            }
}

    break;
//FIM dos códigos da Sala 03
    }

}

//Julgamento se continuará comprando
        printf("\nContinuar comprando?\n");
        printf("SIM - 1 / NAO - 2\n");
        printf("Resposta: ");
            scanf("%i", &continuar);
        printf("\n------------------------------------------\n");

}

//Acesso a relação das vendas
    printf("\nSIM - 1 / NAO - 2\n");
    printf("Exibir relacao de vendas? (acao exclusiva) - ");
        scanf("%i", &resposta);

        if(resposta == 1){

                while((usuario != 0001 || senhaUsu != 11223) && tentativa < 3){
                tentativa++;

                printf("Digite o usuario: ");
                    scanf("%i", &usuario);
                printf("Digite a senha do usuario: ");
                    scanf("%i", &senhaUsu);

        if(usuario == 0001 && senhaUsu == 11223){
            //Relatório so total
            printf("\n");
            printf("--------------------------------------------\n");
            printf("           MEIA ENTRADA              INTEIRA\n");
            printf("--------------------------------------------\n");
            printf("Sala 01         %i                       %i \n", qtdMeia1, qtdInt1);
            printf("--------------------------------------------\n");
            printf("Sala 02         %i                       %i \n", qtdMeia2, qtdInt2);
            printf("--------------------------------------------\n");
            printf("Sala 03         %i                       %i \n", qtdMeia3, qtdInt3);
            printf("--------------------------------------------\n");
            printf("Total           %i                       %i \n", qtdMeia1+qtdMeia2+qtdMeia3, qtdInt1+qtdInt2+qtdInt3);
            printf("--------------------------------------------\n");
            printf("Total Geral: %i\n", qtdMeia1+qtdMeia2+qtdMeia3+qtdInt1+qtdInt2+qtdInt3);
            printf("--------------------------------------------\n");

            printf("\nCadeiras vazias por sala.\n");
            printf("Sala 01 -------------- %i\n", 40 - qtdlugares1);
            printf("Sala 02 -------------- %i\n", 66 - qtdlugares2);
            printf("Sala 03 -------------- %i\n", 72 - qtdlugares3);
            printf("Total   -------------- %i\n", 178 - (qtdlugares1+qtdlugares2+qtdlugares3));


            printf("\nTotal faturado\n");
            printf("R$%.2f, sendo: \n", ((qtdInt1 * valor1)+(qtdMeia1 * valorM1))+((qtdInt2 * valor2)+(qtdMeia2 * valorM2))+
((qtdInt3 * valor3)+(qtdMeia3 * valorM3)));
            printf("SALA 01 faturou R$%.2f\n", (qtdInt1 * valor1) + (qtdMeia1 * valorM1));
            printf("SALA 02 faturou R$%.2f\n", (qtdInt2 * valor2) + (qtdMeia2 * valorM2));
            printf("SALA 03 faturou R$%.2f\n", (qtdInt3 * valor3) + (qtdMeia3 * valorM3));
        }else{
            printf("\nAcesso negado.\n");
            printf("Tentar novamente?\n");
            printf("Digite 1 para SIM\n");
            printf("Opcao: ");
                scanf("%i", &continuarUsu);
                if(continuarUsu == 0){
                    printf("Aproveite o filme e volte sempre!\n");
                    break;
                }
        }
                }
        }else{
            printf("Aproveite o filme e volte sempre!\n");
            for(;;);
        }
printf("\nEncerre o programa\n");
for(;;);
} //main
