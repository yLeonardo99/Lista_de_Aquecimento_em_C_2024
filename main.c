#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <math.h> // Necessário para a função "sqrt()"  ou seja para cálcular Raiz² 

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

void exe3() {
    // 3 - Crie um programa que some dois números inteiros e um número real.
    int num1, num2;
    float num3, soma;

    printf("Programa 3: \n\n");

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o número real: ");
    scanf("%f", &num3);
    
    soma = num1 + num2 + num3;

    printf("A soma dos três números = %.2f\n", soma);
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

/* PROBLEMAS DE LÓGICA DE PROGRAMAÇÃO (PARTE-2) */

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

void exe27(){

    // DIFERENÇA
    // FÓRMULA (A*B - C*D)

    int a,b,c,d,diferenca;
        printf("Digite quatro números inteiros:");
        scanf("%d %d %d %d", &a,&b,&c,&d);

    diferenca = (a*b-c*d);    
        printf("diferenca = %d\n",diferenca);

}

void exe28(){

    // Salario

    int numeroFuncionario, horasTrabalhadas;
    float valorHora, salario;
    printf("Digite o número do funcionário: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorHora);

    salario = horasTrabalhadas * valorHora;

    printf("Número do funcionário: %d\n", numeroFuncionario);
    printf("Salário: R$ %.2f\n", salario);



}

void exe29(){

    // SALARIO BONUS

       printf( "Digite o salário do funcionário: ");
        char nome[100];
        double salarioFixo, totalVendas, totalReceber;
        scanf("%s", nome);

        scanf("%lf %lf", &salarioFixo, &totalVendas);

        totalReceber = salarioFixo + (totalVendas * 0.15);

        printf("TOTAL = R$ %.2lf\n", totalReceber);

}

void exe30 (){

    // Calculo Simples

    int codigo1, numero1, codigo2, numero2;
    float valor1, valor2, total;
    printf("Digite o código da peça 1: ");
    scanf("%d", &codigo1);
    printf("Digite o número de peças 1: ");
    scanf("%d", &numero1);
    printf("Digite o valor unitário da peça 1: ");
    scanf("%f", &valor1);
    printf("Digite o código da peça 2: ");
    scanf("%d", &codigo2);
    printf("Digite o número de peças 2: ");
    scanf("%d", &numero2);
    printf("Digite o valor unitário da peça 2: ");
    scanf("%f", &valor2);
    total = (numero1 * valor1) + (numero2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

}

void exe31(){

    // ESFERA

    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    volume = (4.0/3.0) * 3.14159 * raio * raio * raio;
        printf("O volume da esfera é: %.3f\n", volume);


}

void exe32(){

    // ÁREA
  
    /*                         INFORMAÇÕES;
    
    a) A área do triangulo retângulo que tem A por base e C por Altura.
    b) A área do circulo de raio (pi = 3.14159)
    c) A área do trapézio que tem A e B por base e C por altura
    d) A área do quadrado que tem lado B
    e) A área do retangulo que tem lados A e B */
    
    float base, altura, area;
    
    printf("Digite a base do triângulo retângulo: ");
    scanf("%f", &base);
  
    printf("Digite a altura do triângulo retângulo");
    scanf("%f", &altura);
  
    area = (base * altura) / 2;
  
    printf("A área do triângulo retângulo é: %.2f\n", area);
  
    float raio, areaCirculo;
    printf("Digite o raio do círculo: ");
  
    scanf("%f", &raio);
    areaCirculo = 3.14159 * raio * raio;

    printf("A área do círculo é: %.2f\n", areaCirculo);
    
    float baseMaior, baseMenor, alturaTrapezio;
    
    printf("Digite a base maior do trapézio: ");
    scanf("%f", &baseMaior);
    
    printf("Digite a base menor do trapézio: ");
    scanf("%f", &baseMenor);
    
    printf("Digite a altura do trapézio: ");
    scanf("%f", &alturaTrapezio);
    
    area = ((baseMaior + baseMenor) * alturaTrapezio) / 2;
    printf("A área do trapézio é: %.2f\n", area);
    
    float ladoQuadrado;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &ladoQuadrado);
    
    area = ladoQuadrado * ladoQuadrado;
    
    printf("A área do quadrado é: %.2f\n", area);
    float baseRetangulo, alturaRetangulo;
    
    printf("Digite a base do retângulo: ");
    scanf("%f", &baseRetangulo);
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &alturaRetangulo);
    
    area = baseRetangulo * alturaRetangulo;
    printf("A área do retângulo é: %.2f\n", area);

}

void exe33(){
    
    /* Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem "eh o maior"
    utilize fórmula;                  

    MaiorAB = (a+b+abs(a-b))/2. */

    int a, b, c, maiorAB, maior;
    
        printf("Digite o primeiro valor: ");
        scanf("%d", &a);
    
        printf("Digite o segundo valor: ");
        scanf("%d", &b);
    
        printf("Digite o terceiro valor: ");
        scanf("%d", &c);
    
        maiorAB = (a + b + abs(a - b)) / 2;

        maior = (maiorAB + c + abs(maiorAB - c)) / 2;

        printf("%d é o maior número entre os três\n", maior);
    }

void exe34() {
    
    /*  Calcule o consumo médio de um automóvel com base na distância percorrida e combustível gasto.*/

    int X;         // Distância total percorrida (em Km)
    float Y;       // Total de combustível gasto (em litros)
    float consumo; // Consumo médio (Km/l)

    printf("Programa 33: \n\n");

    printf("Digite a distância total percorrida em Km/h: ");
    scanf("%d", &X);

    printf("Digite o total de combustível gasto em litros: ");
    scanf("%f", &Y);

    consumo = X / Y;
    
    printf("Consumo médio: %.3f km/l\n", consumo);
}

void exe35() {
    
    //Calcule a distância entre dois pontos no plano cartesiano

    float x1, y1, x2, y2, distancia;

    printf("Programa 34: \n\n");

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    printf("Distância = %.4f\n", distancia);
}

void exe36(){

    // DISTANCIA
    
    int distancia, tempo;

    printf("Digite a distancia em Km: ");
    scanf("%d", &distancia);
    
    tempo = distancia * 2;

    printf("%d minutos\n", tempo);
}

void exe37() {
    
    // GASTO DE COMBÚSTIVEL 
    
    int tempo, velocidade;
    float distancia, litros;

    printf("Digite o tempo de viagem em horas: ");
    scanf("%d", &tempo);

    printf("Digite a velocidade média em km/h: ");
    scanf("%d", &velocidade);
    
    distancia = (float)tempo * velocidade;

    litros = distancia / 12.0; // O veículo faz 12 km por litro

    printf("Quantidade de litros necessários: %.3f\n", litros);
    }

void exe38() {
    
    // CÉDULAS
    
    int valor;
    float notas[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0};
    int quantidadeNotas;
    int i;

    printf("Digite o valor a ser decomposto: ");
    scanf("%d", &valor);

    printf("%d\n", valor);

    // Calcular a quantidade de cada cédula
    for (i = 0; i < 7; i++) {
        quantidadeNotas = valor / (int)notas[i];
        valor = valor % (int)notas[i];

        printf("%d nota(s) de R$ %.0f,00\n", quantidadeNotas, notas[i]);
    }
}

void exe39(){

    // CONVERSÃO DE TEMPO
    
    int tempoSegundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoSegundos);

    // Calcular as horas, minutos e segundos
    horas = tempoSegundos / 3600;
    minutos = (tempoSegundos % 3600) / 60;
    segundos = tempoSegundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
}

void exe40(){

    // IDADE EM DIAS 

    int totalDias;
    int anos, meses, dias;
    
    printf("Digite o número total de dias: ");
    scanf("%d", &totalDias);

    // Cálculo para (anos, meses e dias)
    anos = totalDias / 365;
    meses = (totalDias % 365) / 30;
    dias = (totalDias % 365) % 30;

    printf("%d ano(s) %d mes(es) %d dia(s)\n", anos, meses, dias);
}

void exe41(){

    // NOTAS E MOEDAS
    
    float valor;
    int notas[] = {100, 50, 20, 10, 5, 2}; 
    int moedas[] = {100, 50, 25, 10, 5, 1}; 
    int quantidadeNotas[6] = {0};
    int quantidadeMoedas[6] = {0};
    int i;
    int valorInteiro, centavos;

    printf("Digite o valor a ser decomposto (ex: 576.73): ");
    scanf("%f", &valor);

    valorInteiro = (int)valor;
    centavos = (int)((valor - valorInteiro) * 100 + 0.5); 

    printf("Notas:\n");
    for (i = 0; i < 6; i++) {
        quantidadeNotas[i] = valorInteiro / notas[i];
        valorInteiro %= notas[i]; 
        printf("%d nota(s) de R$ %d,00\n", quantidadeNotas[i], notas[i]);
    }

    printf("\nMoedas:\n");
    for (i = 0; i < 6; i++) {
        quantidadeMoedas[i] = centavos / moedas[i];
        centavos %= moedas[i]; 
        if (moedas[i] == 100) {
            printf("%d moeda(s) de R$ 1,00\n", quantidadeMoedas[i]);
        } else {
            printf("%d moeda(s) de R$ 0,%02d\n", quantidadeMoedas[i], moedas[i]);
        }
    }
}

void exe42(){

    // TEST DE SELEÇÃO 1
    
    int A, B, C, D;
    
    printf("Digite os quatro valores inteiros A, B, C e D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    
}

void exe43(){

    // FÓRMULA DE BHASKARA

    double A, B, C;
    double delta, R1, R2;

    printf("Digite os valores de A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    //delta (B² - 4AC)
    delta = (B * B) - (4 * A * C);

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
       
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    
}

void exe44(){

    // INTERVALO

    double valor;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    if (valor >= 0 && valor <= 25) {
        printf("Intervalo [0,25]\n");
    } 
    else if (valor > 25 && valor <= 50) {
        printf("Intervalo (25,50]\n");
    } 
    else if (valor > 50 && valor <= 75) {
        printf("Intervalo (50,75]\n");
    } 
    else if (valor > 75 && valor <= 100) {
        printf("Intervalo (75,100]\n");
    } 
    else {
        printf("Fora do intervalo\n");
    }
        
}

void exe45() {

    /* LANCHE

      TABELA CADASTRADO:
    
    CÓD       ITEM              PREÇO
    1     Cachorro Quente      R$ 4,00
    2     X-Salada             R$ 4,50
    3     X-Bacon              R$ 5,00
    4     Torrada Simples      R$ 2,00
    5     Refrigerante         R$ 1,50    
    */
    
    int codigo, quantidade;
    double total;

    printf("Digite o código do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
  
    printf("Código do item: %d\n", codigo);
    printf("Quantidade: %d\n", quantidade);
  
    if (codigo == 1) {
        total = 4.00 * quantidade;
    } 
    else if (codigo == 2) {
        total = 4.50 * quantidade;
    } 
    else if (codigo == 3) {
        total = 5.00 * quantidade;
    } 
    else if (codigo == 4) {
        total = 2.00 * quantidade;
    } 
    else if (codigo == 5) {
        total = 1.50 * quantidade;
    } 
    else {
        printf("Código inválido.\n");
        return;
    }
  
    printf("Total: R$ %.2lf\n", total);
}

void exe46(){

    // MÉDIA 3

     float n1, n2, n3, n4, media, nota_exame, media_final;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota do aluno: ");
    scanf("%f", &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    
    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
    
        printf("Aluno em exame.\n");

        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        
        media_final = (media + nota_exame) / 2.0;

        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media_final);
    }
    
}

/*Loop para exercicios*/

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
            case 27: exe27(); break;
            case 28: exe28(); break;
            case 29: exe29(); break;
            case 30: exe30(); break;
            case 31: exe31(); break;
            case 32: exe32(); break;
            case 33: exe33(); break;
            case 34: exe34(); break;
            case 35: exe35(); break;
            case 36: exe36(); break;
            case 37: exe37(); break;
            case 38: exe38(); break;
            case 39: exe39(); break;
            case 40: exe40(); break;
            case 41: exe41(); break;
            case 42: exe42(); break;
            case 43: exe43(); break;
            case 44: exe44(); break;
            case 45: exe45(); break;
            case 46: exe46(); break;
            // case 47: exe47(); break;
            // case 48: exe48(); break;
            // case 49: exe49(); break;
            // case 50: exe50(); break;
            // case 51: exe51(); break;
            // case 52: exe52(); break;
            // case 53: exe53(); break;
            // case 54: exe54(); break;
            // case 55: exe55(); break;
            // case 56: exe56(); break;
            // case 57: exe57(); break;
            // case 58: exe58(); break;
            // case 59: exe59(); break;
            // case 60: exe60(); break;
            // case 61: exe61(); break;
            // case 62: exe62(); break;
            // case 63: exe63(); break;
            // case 64: exe64(); break;
            // case 65: exe65(); break;
            // case 66: exe66(); break;
            // case 67: exe67(); break;
            // case 68: exe68(); break;
            // case 69: exe69(); break;
            // case 70: exe70(); break;

            default:
                printf("Programa Inválido.. Tente novamente.\n");
        }

        printf("\nTecle Enter para continuar...\n");
        getchar(); 
        getchar(); 
    }

    return 0;
}
