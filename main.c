#include <stdio.h>
#include <string.h>

int main() {
    char aluno [3][15];
    int idade [3];
    //------------------------
    char alunoMaisVelho[15] = "sem-nome";
    int idadeMaisVelha = 0;
    //-------------------------
    char alunoMaisNovo[15] = "sem-nome";
    int idadeMaisNovo = 0;
    //-------------------------
    for(int i = 0; i<3;i++){
        printf("Nome do aluno: ");
        scanf("%s",&aluno[i]);
        printf("Idade de %s: ",aluno[i]);
        scanf("%d",&idade[i]);
    }
/*
    for(int i = 0; i<3;i++){
        alunoMaisVelho = (idade[i] > idadeMaisVelha) ? aluno[i] : alunoMaisVelho ;
        idadeMaisVelha = (idade[i] > idadeMaisVelha) ? idade[i] : idadeMaisVelha;
        //----------------------------------------------------
        alunoMaisNovo = (idade[i] < idadeMaisNovo) ? aluno[i] : alunoMaisNovo;
        idadeMaisNovo = (idade[i] < idadeMaisNovo) ? idade[i] : idadeMaisNovo;

    }
    printf("aluno mais velho: %s ",alunoMaisVelho);
    printf(" com %d anos\n",idadeMaisVelha);
    printf("aluno mais novo: %s ",alunoMaisNovo);
    printf("com %d anos\n",sidadeMaisNovo);
*/
    alunoMaisVelho = aluno[1];
    printf("%s",aluno[1]);
    return 0;
}
