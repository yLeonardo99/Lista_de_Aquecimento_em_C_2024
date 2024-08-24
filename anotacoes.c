
/********************** ANOTAÇÕES IMPORTANTE *********************************/

// https://embarcados.com.br/linguagem-c-guia-completo/

// %d - int
// %f - float
// %s - string
// %c - char
// %p - pointer
// %x - hexadecimal
// %o - octal
// %e - exponencial
// %g - general
// %u - unsigned
// %lf - double
// %le - long double
// %lf - long float
// %Lf - long double
// %Lf - long float
// %n - especifica o endereço de memória de uma variá
// %p - especifica o endereço de memória de uma variá
// %t - especifica o tipo de uma variável
// %z - especifica o tamanho de uma variável
// %Z - especifica o tamanho de uma variável
// %h - especifica o tamanho de uma variável
// %hh - especifica o tamanho de uma variável



//  O QUE É  rand()

/* Função: int rand(void);
 Descrição: rand() gera um número pseudoaleatório inteiro. */

// Sintaxe:
/* int num = rand(); // Gera um número aleatório*/

// O QUE É srand ()

// inicializa o gerador de números aleatórios com uma semente fornecida. Definir uma semente para o gerador de números aleatórios para garantir que a sequência de números gerados por rand() seja diferente em cada execução do programa.

// sintaxe
// srand(time(NULL)); // Inicializa o gerador com a semente baseada no tempo atual

/*EXEMPLO;

// int main() {

    srand(time(NULL));

    // Gera e exibe 5 números aleatórios
    
    for (int i = 0; i < 5; i++) {
        int num = rand();
        
        printf("%d\n", num);
    }

    return 0;
}

*/
