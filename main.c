#include <stdio.h>
#include <stdlib.h> // Necessário para rand(gerar números aleatórios) e srand(inteiros)
#include <time.h> // Necessário para time()

// Meu Github: https://github.com/yLeonardo99

/************************* LISTA DE AQUECIMENTO  - PARTE 1 (LINGUAGEM C) ****************************
********* PROF: Daniel- Github: https://github.com/DanielGTI (LISTAQUECIMENTO)**********************/

//	2 - Crie um programa que some dois números.
void exe2(){
  
  //	2 - Crie um programa que some dois números.
  
  int num1, num2, soma;
  
  printf("Programa 2: \n\n");
  
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  printf("A soma dos dois números = %d\n", soma);
}

//	3 - Crie um programa que some dois números inteiros e um número real.
void exe3(){
  
  //	3 - Crie um programa que some dois números inteiros e um número real.
  
  int num1, num2;
  
  float num3, soma;
  
  printf("Programa 3: \n\n");
  
  printf("Digite o primeiro número: ");
  scanf("%d", & num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", & num2);
  
  printf("Digite o terceiro número: ");
  scanf("%f", & num3);
  
  soma = num1 + num2 + num3;
  
  printf("A soma dos tres números = %.2f\n", soma);
}

//	4. Crie um programa que solicite duas notas e calcule a média do aluno.
void exe4(){

  //	4. Crie um programa que solicite duas notas e calcule a média do aluno.

  float nota1, nota2, media;

  printf("Programa 4: \n\n");

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("A média das duas notas = %.2f\n", media);
}

/* 5 - Crie um programa que solicite duas notas do aluno, calcule a média e informe se o aluno está "aprovado" ou "reprovado" (média 6.0) */
void exe5() {
  
  /* 5 - Crie um programa que solicite duas notas do aluno, calcule a média e informe se o aluno está "aprovado" ou "reprovado" (média 6.0) */
  
    float Av1, Av2, media;

    printf("Programa 5: \n\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &Av1);  
  
    printf("Digite a segunda nota: ");
    scanf("%f", &Av2);  

    media = (Av1 + Av2) / 2;

    printf("A média das duas notas = %.2f\n", media);

    if (media >= 6.0) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno se fudeu.\n");
    }
}

/* 6 - Crie um programa que solicite 3 notas do aluno (Av1, Av2, Av3), 
  descarte a menor nota e exiba a média do aluno, informando se o mesmo foi aprovado ou não. */
void exe6() {
   /* 6 - Crie um programa que solicite 3 notas do aluno (Av1, Av2, Av3), 
  descarte a menor nota e exiba a média do aluno, informando se o mesmo foi aprovado ou não. */
  
    float Av1, Av2, Av3, media;
    float menorNota, soma;

    printf("Programa 6: \n\n");

    printf("Digite a primeira nota (Av1): ");
    scanf("%f", &Av1);

    printf("Digite a segunda nota (Av2): ");
    scanf("%f", &Av2);

    printf("Digite a terceira nota (Av3): ");
    scanf("%f", &Av3);


    if (Av1 <= Av2 && Av1 <= Av3) {
        menorNota = Av1;
    } 
      
    else if (Av2 <= Av1 && Av2 <= Av3) {
        menorNota = Av2;
    } 
      
    else {
        menorNota = Av3;
    }

    soma = Av1 + Av2 + Av3 - menorNota;

    media = soma / 2;

    printf("A média das duas maiores notas = %.2f\n", media);

    if (media >= 6.0) {
        printf("O aluno foi aprovado.\n");
    }
    else {
        printf("O aluno foi reprovado.\n");
    }
}

// 7 - Crie um programa que solicita um número e informa se ele é positivo ou negativo.
void exe7() {
  
  // 7 - Crie um programa que solicita um número e informa se ele é positivo ou negativo.
  
    int numero;

    printf("Programa 7: \n\n");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } 
    else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } 
    else {
        printf("O número é zero.\n");
    }
}

// 8 - Crie um programa que solicita o ano de nascimento do usuário e informe a sua idade.
void exe8() {
  
  // 8 - Crie um programa que solicita o ano de nascimento do usuário e informe a sua idade.
  
    int anoNascimento, anoAtual, idade;

    printf("Programa 8: \n\n");

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    anoAtual = 2024;

    idade = anoAtual - anoNascimento;

    printf("Você tem %d anos.\n", idade);
}

// 9 - Crie um programa que solicita a sua idade e informe o seu ano de nascimento.
void exe9() {
  
  // 9 - Crie um programa que solicita a sua idade e informe o seu ano de nascimento.
  
    int idade, anoAtual, anoNascimento;

    printf("Programa 9: \n\n");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    anoAtual = 2024;

    anoNascimento = anoAtual - idade;

    printf("Você nasceu no ano de %d.\n", anoNascimento);
}

/* 10 - Crie um programa que solicita um valor ao usuário (idade ou ano de nascimento) e
informe a sua idade ou a sua data de nascimento. */
void exe10() {

  /* 10 - Crie um programa que solicita um valor ao usuário (idade ou ano de nascimento) e
  informe a sua idade ou a sua data de nascimento. */
  
    int valor, anoAtual, idade, anoNascimento;
    char opcao;

    printf("Programa 10: \n\n");

    printf("Você quer informar sua idade ou ano de nascimento? (i para idade, a para ano): ");
    scanf(" %c", &opcao);

    anoAtual = 2024;
  
    if (opcao == 'i' || opcao == 'I') {
        printf("Digite a sua idade: ");
        scanf("%d", &valor);
      
        anoNascimento = anoAtual - valor;
        printf("Você nasceu no ano de %d.\n", anoNascimento);
      
    } 
      
    else if (opcao == 'a' || opcao == 'A') {
        printf("Digite o ano de nascimento: ");
        scanf("%d", &valor);
        idade = anoAtual - valor;
        printf("Você tem %d anos.\n", idade);
    } 
    
    else {
        printf("Opção inválida.\n");
    }
}

// 11 - Criar um programa que solicite um numero do usuário e diga se ele é par ou ímpar.
void exe11() {
  
  // 11 - Criar um programa que solicite um numero do usuário e diga se ele é par ou ímpar.
  
    int numero;

    printf("Programa 11: \n\n");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } 
    else {
        printf("O número %d é ímpar.\n", numero);
    }
}

/* 12 - Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar. */
void exe12() {

  /* 12 - Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
  número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar. */
  
    int numeroUsuario, numeroComputador, soma, resultado;
    char escolha;

    srand(time(NULL));

    printf("Programa 12: \n\n");

    printf("Escolha 'p' para par ou 'i' para ímpar: ");
    scanf(" %c", &escolha);

    printf("Digite um número: ");
    scanf("%d", &numeroUsuario);

    numeroComputador = rand() % 10 + 1;

    soma = numeroUsuario + numeroComputador;

    resultado = soma % 2;
  
    printf("Número sorteado pelo computador: %d\n", numeroComputador);

    if ((resultado == 0 && escolha == 'p') || (resultado == 1 && escolha == 'i')) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu.\n");
    }
}

/* 13 - Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar. Agora o
computador deve sempre GANHAR! */
void exe13() {
  
  /* 13 - Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar. Agora o
computador deve sempre GANHAR! */
  
    int numeroUsuario, numeroComputador, soma;
    char escolha;

    srand(time(NULL));

    printf("Programa 13: \n\n");

    printf("Escolha 'p' para par ou 'i' para ímpar: ");
    scanf(" %c", &escolha);

    printf("Digite um número: ");
    scanf("%d", &numeroUsuario);

    numeroComputador = rand() % 10 + 1;

    soma = numeroUsuario + numeroComputador;

    printf("Número sorteado pelo computador: %d\n", numeroComputador);

    if ((soma % 2 == 0 && escolha == 'i') || (soma % 2 == 1 && escolha == 'p')) {
        printf("O computador ganhou!\n");
    } 
    
    else {
  
  numeroComputador = (escolha == 'p') ? ((numeroUsuario % 2 == 0) ? 1 : 2) : ((numeroUsuario % 2 == 0) ? 2 : 1);
        soma = numeroUsuario + numeroComputador;
        printf("Número sorteado ajustado para garantir vitória: %d\n", numeroComputador);
        printf("Soma ajustada: %d\n", soma);
        printf("O computador ganhou!\n");
    }
}

// 14 - Crie um programa que solicita um valor em metros e converta para centímetros.
void exe14() {
  
  // 14 - Crie um programa que solicita um valor em metros e converta para centímetros.
  
    float metros, centimetros;

    printf("Programa 14: \n\n");

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("O valor em centímetros é: %.2f\n", centimetros);
}

// 15 - Crie um programa que solicita ao usuário o raio de um círculo e calcule a sua área.
void exe15() {

  // 15 - Crie um programa que solicita ao usuário o raio de um círculo e calcule a sua área.
  
  #define PI 3.14159 
  
   float raio, area;

    printf("Programa 15: \n\n");

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio; // Área = π * raio²

    printf("A área do círculo é: %.2f\n", area);
}

/* 16 - Crie um programa que solicita ao usuário o valor da hora trabalhada, quantas horas
trabalho no mês e calcule o valor a receber no final do mês. */
void exe16() {

  /* 16 - Crie um programa que solicita ao usuário o valor da hora trabalhada, quantas horas
  trabalho no mês e calcule o valor a receber no final do mês. */
  
    float valorHora, horasTrabalhadas, valorTotal;

    printf("Programa 16: \n\n");

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    valorTotal = valorHora * horasTrabalhadas;

    printf("O valor a receber no final do mês é: R$ %.2f\n", valorTotal);
}

/* 17 - Crie um programa que solicita uma temperatura em graus Fahrenheit e converta e
informe a temperatura em graus Celsius. */
void exe17() {

  /* 17 - Crie um programa que solicita uma temperatura em graus Fahrenheit e converta e
  informe a temperatura em graus Celsius. */
  
    float fahrenheit, celsius;

    printf("Programa 17: \n\n");

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
  
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("A temperatura em graus Celsius é: %.2f\n", celsius);
}

 /* 18 - Crie um programa que solicita o peso e a altura de um usuário e informe o seu IMC (Índice de massa corpórea) */ 
void exe18() {

  /* 18 - Crie um programa que solicita o peso e a altura de um usuário e informe o seu IMC (Índice de massa corpórea) */ 

    float peso, altura, imc;

    printf("Programa 18: \n\n");

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O Índice de Massa Corporal (IMC) é: %.2f\n", imc);
}

/* 19 - Crie um programa para calcular o consumo médio de um automóvel, solicite ao usuário
uma distância percorrida em KM e o total de combustível consumido, em litros.*/
void exe19() {

  /* 19 - Crie um programa para calcular o consumo médio de um automóvel, solicite ao usuário
  uma distância percorrida em KM e o total de combustível consumido, em litros.*/

           /*                        ******** FÓRMULA ********
                 Consumo médio = distância percorrida / combustível consumido */
  
    float distancia, combustivel, consumoMedio;

    printf("Programa 19: \n\n");

    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite o total de combustível consumido em litros: ");
    scanf("%f", &combustivel);

    if (combustivel != 0) { 
        consumoMedio = distancia / combustivel;
       
        printf("O consumo médio é: %.2f km/l\n", consumoMedio);
    } 
    
    else {
      
        // Caso o combustível consumido seja zero
      
        printf("O total de combustível não pode ser zero.\n");
    }
}

/* 20 - Crie um programa que solicita a um vendedor o seu salário fixo e o valor total de suas
vendas no mês. Sabendo que a sua comissão é de 15%, calcule o salário a receber no final do
mês. */
void exe20() {

  /* 20 - Crie um programa que solicita a um vendedor o seu salário fixo e o valor total de suas
  vendas no mês. Sabendo que a sua comissão é de 15%, calcule o salário a receber no final do
  mês. */
  
    float salarioFixo, totalVendas, salarioFinal;

    printf("Programa 20: \n\n");

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas no mês: R$ ");
    scanf("%f", &totalVendas);

    salarioFinal = salarioFixo + (totalVendas * 0.15);

    printf("O salário a receber no final do mês é: R$ %.2f\n", salarioFinal);
}



/* ***************************** FÓRMULA DO PROFESSOR ****************************************** 
pego no Github; https://github.com/DanielGTI/ListaAquecimento/blob/main/main.c

O código mostra um menu para que o usuário escolhe e executr um dos programas entre  2 a 20. Se o número não estiver na lista, informa que o programa é inválido e solicita uma nova entrada. */

int main(void) {
  
  int prog;
  char parar;
  
  while(1){
    system("clear");
    printf("Qual programa deseja executar: ");
    scanf("%d", & prog);
    printf("\n----------------\n\n");
    
    switch(prog){
      case 2:	exe2();	break;
      case 3: exe3();	break;
      case 4: exe4(); break;
      case 5: exe5(); break;
      case 6: exe6(); break;
      case 7: exe7(); break;
      case 8: exe8(); break;
      case 9: exe9(); break;
      case 10: exe10(); break;
      case 11: exe11(); break;
      case 12: exe12(); break;
      case 13: exe13(); break;
      case 14: exe14(); break;
      case 15: exe15(); break;
      case 16: exe16(); break;
      case 17: exe17(); break;
      case 18: exe18(); break;
      case 19: exe19(); break;
      case 20: exe20(); break;
      
      default: printf("Programa Inválido.. Tente novamente.\n");
    }

    printf("\nTecle para continuar...\n");
    
    getchar();getchar();
  }
  return 0;
}
