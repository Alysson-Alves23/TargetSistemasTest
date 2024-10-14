//
// Created by User on 13/10/2024.
//
/*

3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora de todos os dias de um ano, faça um programa, na linguagem que desejar, que calcule e retorne:

- O menor valor de faturamento ocorrido em um dia do ano;
- O maior valor de faturamento ocorrido em um dia do ano;
- Número de dias no ano em que o valor de faturamento diário foi superior à média anual.

a) Considerar o vetor já carregado com as informações de valor de faturamento.

b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média.

c) Utilize o algoritmo mais veloz que puder definir.

* */


#include <iostream>
#include <vector>
#include <limits>

int main() {

    std::vector<double> faturamento = {0, 1500, 2300, 0, 0, 5000, 0, 1000, 600, 0, 2500};

    double menorFaturamento = std::numeric_limits<double>::max();
    double maiorFaturamento = std::numeric_limits<double>::min();
    double somaFaturamento = 0;
    int diasComFaturamento = 0;


    for (double valor : faturamento) {
        if (valor > 0) {
            if (valor < menorFaturamento) {
                menorFaturamento = valor;
            }
            if (valor > maiorFaturamento) {
                maiorFaturamento = valor;
            }
            somaFaturamento += valor;
            diasComFaturamento++;
        }
    }

    double mediaAnual = somaFaturamento / diasComFaturamento;

    int diasAcimaMedia = 0;
    for (double valor : faturamento) {
        if (valor > 0 && valor > mediaAnual) {
            diasAcimaMedia++;
        }
    }

    std::cout << "Menor valor de faturamento: " << menorFaturamento << std::endl;
    std::cout << "Maior valor de faturamento: " << maiorFaturamento << std::endl;
    std::cout << "Numero de dias com faturamento superior a media anual: " << diasAcimaMedia << std::endl;

    return 0;
}
