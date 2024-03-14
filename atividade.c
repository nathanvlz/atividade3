#questão 1 
include <stdio.h>

int main() {
    // Declaração da variável para armazenar o nome do usuário
    char nome[50];

    // Solicita ao usuário seu nome
    printf("Digite seu nome: ");
    
    // Lê o nome do usuário
    scanf("%s", nome);

    // Imprime a mensagem de boas-vindas
    printf("Bem-vindo, %s.\n", nome);

    return 0;
}
#questão 2 
int main() {
   
    char idadeTexto[10];

   printf("Digite sua idade em texto (por exemplo, '18'): ");
    scanf("%s", idadeTexto);
    int idade = atoi(idadeTexto);

    // Imprime a idade como número inteiro
    printf("Idade em número inteiro: %d\n", idade);

    return 0;
}
#questão 3


int main() {
    int numeroInteiro;
    printf("Digite um número inteiro: ");
    scanf("%d", &numeroInteiro);

    float numeroDecimal = (float)numeroInteiro;
    
    printf("Número em decimal: %.2f\n", numeroDecimal);

    return 0;
}
#questão 4 
int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int soma = num1 + num2;

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
questão5 
int main() {
    float numeroDecimal;
    printf("Digite um número decimal: ");
    scanf("%f", &numeroDecimal);

    float quadrado = numeroDecimal * numeroDecimal;

    printf("O quadrado do número é: %.2f\n", quadrado);

    return 0;
}
questão 6 
#include <time.h>

int main() {
    int anoNascimento;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int idade = tm.tm_year + 1900 - anoNascimento;

    printf("Sua idade é: %d anos\n", idade);

    return 0;
}
questão 7 
int main() {
    char primeiroNome[50], sobrenome[50];

    printf("Digite seu primeiro nome: ");
    scanf("%s", primeiroNome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome completo: %s %s\n", primeiroNome, sobrenome);

    return 0;
}
#questão 8 
int main() {
    int contador = 0;
    printf("Digite uma sequência de números separados por espaço: ");

    while (getchar() != '\n') {
        contador++;
    }

    printf("Quantidade de números digitados: %d\n", contador + 1);

    return 0;
}
#questão9
int main() {
    char nomeAnimal[50];

    printf("Digite o nome de um animal: ");
    scanf("%s", nomeAnimal);

    printf("Você digitou o animal: %s\n", nomeAnimal);

    return 0;
}
#questão10 
int main() {
    char primeiroNome[50], sobrenome[50];

    printf("Digite seu primeiro nome: ");
    scanf("%s", primeiroNome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome completo invertido: %s, %s\n", sobrenome, primeiroNome);

    return 0;
}
#questão11
int main() {
    char minhaString[100];

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    int tamanho = strlen(minhaString);

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
#questão12
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }

    return 0;
}
#questão13
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é um número positivo.\n", numero);
    } else if (numero < 0) {
        printf("%d é um número negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
#questão14 
int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d é maior que %d.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d é maior que %d.\n", num2, num1);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
#questão15 
int main() {
    float altura, peso;
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso (em quilogramas): ");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}
#questão16 
int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    if (strlen(nome) > 5) {
        printf("O nome tem mais de 5 caracteres.\n");
    } else {
        printf("O nome tem 5 caracteres ou menos.\n");
    }

    return 0;
}
#questão17 
int main() {
    char estadoCivil[20];
    printf("Digite seu estado civil: ");
    scanf("%s", estadoCivil);

    if (strcmp(estadoCivil, "casado") == 0 || strcmp(estadoCivil, "casada") == 0) {
        printf("Você é casado(a).\n");
    } else if (strcmp(estadoCivil, "solteiro") == 0 || strcmp(estadoCivil, "solteira") == 0) {
        printf("Você é solteiro(a).\n");
    } else {
        printf("Estado civil desconhecido.\n");
    }

    return 0;
}
#questão18 
int main() {
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
#questão19 
int main() {
    char cidade[50];
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    if (cidade[0] == 'S' || cidade[0] == 's') {
        printf("O nome da cidade começa com 'S'.\n");
    } else {
        printf("O nome da cidade não começa com 'S'.\n");
    }

    return 0;
}
#questão20 
int main() {
    float numero1, numero2;
    printf("Digite dois números decimais: ");
    scanf("%f %f", &numero1, &numero2);

    float restoDivisao = fmod(numero1, numero2);

    printf("O resto da divisão é: %.2f\n", restoDivisao);

    return 0;
}
#questão21 
int main() {
    float numeroDecimal;
    printf("Digite um número decimal: ");
    scanf("%f", &numeroDecimal);

    int numeroInteiro = (int)numeroDecimal;

    printf("Número inteiro: %d\n", numeroInteiro);

    return 0;
}
#questão22
int main() {
    char minhaString[20];
    printf("Digite uma string contendo um número inteiro: ");
    scanf("%s", minhaString);

    int numero = atoi(minhaString);
    numero += 10;

    sprintf(minhaString, "%d", numero);

    printf("Resultado após adicionar 10: %s\n", minhaString);

    return 0;
}
#questão23
int main() {
    int dia, mes, ano;
    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
#questão24 
int main() {
    char cidade[50], estado[50];
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    printf("Digite o nome do seu estado: ");
    scanf("%s", estado);

    printf("Você mora em %s, %s.\n", cidade, estado);

    return 0;
}
#questão25
int main() {
    int anoNascimento;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Bem-vindo ao nosso programa, nascido em %d!\n", anoNascimento);

    return 0;
}
#questão26
int main() {
    int numero;
    char minhaString[50];

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    printf("Resultado da concatenação: %d %s\n", numero, minhaString);

    return 0;
}
#questão27
int main() {
    char nomeProduto[50];
    float preco;

    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Produto: %s - Preço: R$ %.2f\n", nomeProduto, preco);

    return 0;
}
#questão28 
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Mensagem: O dobro de %d é %d.\n", numero, 2 * numero);

    return 0;
}
#questão29 
int main() {
    char email[50];
    printf("Digite seu endereço de e-mail: ");
    scanf("%s", email);

    printf("Obrigado por fornecer o  e-mail %s. \n", email);

    return 0;
}
#questão30
int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Quociente: %d\n", num1 / num2);
    } else {
        printf("Não é possível calcular o quociente, pois o segundo número é zero.\n");
    }

    return 0;
}
#questão31 
int main() {
    float base, altura;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    float area = 0.5 * base * altura;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
#questão32
#define PI 3.14159265358979323846

int main() {
    float raio;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    float perimetro = 2 * PI * raio;

    printf("O perímetro da circunferência é: %.2f\n", perimetro);

    return 0;
}
#questão33
int main() {
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float perimetro = 2 * (base + altura);

    printf("O perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}
#questão34
int main() {
    float num1, num2, num3;
    printf("Digite três números decimais: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float media = (num1 + num2 + num3) / 3;

    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
#questão35 
int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int meses = idade * 12;
    int dias = idade * 365;

    printf("Você viveu aproximadamente %d meses e %d dias.\n", meses, dias);

    return 0;
}
#questão36
int main() {
    float valorReais, cotacaoDolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    float valorDolares = valorReais / cotacaoDolar;

    printf("O valor em dólares é: %.2f\n", valorDolares);

    return 0;
}
#questão37
int main() {
    float numeroDecimal;
    printf("Digite um número decimal: ");
    scanf("%f", &numeroDecimal);

    int numeroInteiro = round(numeroDecimal);

    printf("Número arredondado: %d\n", numeroInteiro);

    return 0;
}
#questão38 
int main() {
    int n1, n2, n3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int resultado = (n1 + n2) * n3;

    printf("Resultado da operação: %d\n", resultado);

    return 0;
}
#questão39 
int main() {
    float temperaturaCelsius;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    float temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", temperaturaFahrenheit);

    return 0;
}

