//Atividade 1

#include <stdio.h>

int main(){
    // Declaração da variável idade, mude o número da idade para testar diferentes respostas
    int idade = 10;
    
    //print do meu nome completo
    printf("Jonildo Pereira Araujo Junior\n");

    //primeira condição, só entra nessa condição caso as duas condições sejam verdadeiras
    if(idade >= 0 && idade < 12){
        printf("Bom dia\n");
    }

    //segunda condição, só entra nessa condição caso as duas condições sejam verdadeiras
    else if(idade >= 12 && idade < 18){
        printf("Boa tarde\n");
    }

    //terceira condição, só entra nessa condição caso as duas condições sejam verdadeiras
    else if(idade >= 18 && idade <= 23){
        printf("Boa noite\n");
    }

    //caso nenhuma das condições anteriores sejam verdadeiras, entra nessa condição
    else{
        printf("Horario invalido\n");
    }
    return 0;
}