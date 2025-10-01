#include <stdio.h>

int main(){

    float temperatura, umidade;
     int estoque;



    printf("Entre com a Temperatura\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque \n");
    scanf("%u", &estoque);

if(temperatura > 30){
    printf("Esta calor, ligar o ar \n");
}
    else{
        printf("Temperatura ok\n");
    }

if(umidade < 20){
    printf("Umidade ok\n");
}

else{
    printf("Umidade com problema\n");
}

if(estoque < 5){
    printf("Abastecer o estoque\n");
}

else{
    printf("O Estoque esta ok\n");

}


}