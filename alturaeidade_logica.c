#include <stdio.h>

int main(){

    int idade = 28;
    float altura = 1.60;

    // idade >= 18 => Verdadeiro 
    // idade <= 30 => Verdadeiro 
    // Verdadeira && Verdadeira 
    // verdaderio && Altura . 1.70
    // Verdadeiro && Verdadeiro => Verdadeiro 

    if (idade >= 18 && idade <=30 && altura > 1.70){
        printf( "Voce esta na faixa etaria e na altura permitida");

    }
    else{
        printf( "Voce nao atende aos requisitos");

    }
}