#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

/*PROBLEMAS DE LÓGICA DE PROGRAMAÇÃO (PARTE-1) */

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

void exe14() {
  
  // 14 - Crie um programa que solicita um valor em metros e converta para centímetros.
  
    float metros, centimetros;

    printf("Programa 14: \n\n");

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("O valor em centímetros é: %.2f\n", centimetros);
}

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

void exe20() {

  
    float salarioFixo, totalVendas, salarioFinal;

    printf("Programa 20: \n\n");

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas no mês: R$ ");
    scanf("%f", &totalVendas);

    salarioFinal = salarioFixo + (totalVendas * 0.15);

    printf("O salário a receber no final do mês é: R$ %.2f\n", salarioFinal);
}

/*PROBLEMAS DE LÓGICA DE PROGRAMAÇÃO (PARTE-2) */
 
void exe21() {
    
    // Extremamente Básico

    int a,b,x;

    printf("Digite dois números inteiros:");
    scanf("%d %d", &a,&b);

x = a+b;

    printf("X = %d\n",x);

    
 }


void exe22(){

    // ÁREA DO CIRCULO

    /*Fórmula para cálcular a área de uma circuferência é area = π.raio² (π = 3.14159) */

    float raio, area;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    area = 3.14159 * raio * raio;
    printf("A área do círculo é: %.4f\n", area);
    
    
}

void exe23(){

    // SOMA SIMPLES

    int a,b,soma;

        printf("Digite dois números inteiros:");
        scanf("%d %d", &a,&b);

    soma = a+b;

        printf("soma = %d\n",soma);

    
}

void exe24(){

    // PRODUTO SIMPLES
    
    int a,b,produto;
        printf("Digite dois números inteiros:");
        scanf("%d %d", &a,&b);
    
    produto = a*b;
        printf("produto = %d\n",produto);
    
    
}

void exe25(){

    // MÉDIA 1

    float a,b,media;
        printf("Digite dois números inteiros:");
        scanf("%f %f", &a,&b);
    
    media = (a*3.5+b*7.5)/11;    
        printf("media = %.5f\n",media);
    
}

void exe26(){

    // MÉDIA 2
    
    float a,b,c,media;
        printf("Digite três números inteiros:");
        scanf("%f %f %f", &a,&b,&c);
    
      media = (a*2+b*3+c*5)/10;    
        printf("media = %.1f\n",media);
    
}


/* *****************************************/
int main(void) {
    int prog;

    while (1) {
    
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("Qual programa deseja executar ? ");
        scanf("%d", &prog);
        printf("\n----------------\n\n");

        switch (prog) {
            case 2: exe2(); break;
            case 3: exe3(); break;
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
            case 21: exe21(); break;
            case 22: exe22(); break;
            case 23: exe23(); break;
            case 24: exe24(); break;
            case 25: exe25(); break;
            case 26: exe26(); break;
            // case 28: exe28(); break;
            
            default:
                printf("Programa Inválido.. Tente novamente.\n");
        }

        printf("\nTecle Enter para continuar...\n");
        getchar(); 
        getchar(); 
    }

    return 0;
}
