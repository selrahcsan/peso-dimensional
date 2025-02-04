# 📦 Cálculo do peso dimensional de uma caixa em C 

Este repositório contém um programa em C que calcula o peso dimensional de uma caixa, com base em suas dimensões (comprimento, largura e altura). O cálculo do peso dimensional é útil para determinar o custo de envio de pacotes, pois algumas transportadoras cobram pelo peso dimensional (que considera o volume do pacote) em vez do peso real, quando o peso dimensional é maior.

### 🧮 Fórmula do peso dimensional 
O peso dimensional é calculado da seguinte forma:

```bash
Peso dimensional = volume da caixa / 166
```

O volume da caixa é calculado multiplicando o comprimento, a largura e a altura.
166 é um fator de conversão (polegadas cúbicas por libra).

## 🤔 Como usar o programa ? 

### 📑 Clone o repositório: 

```bash
https://github.com/selrahcsan/peso-dimensional.git
```

### 📁 Acesse o diretório: 

```bash
cd cd peso-dimensional/src/
```

### ⚙️ Compile o Código

```bash
gcc main.c -o calculo_peso_dimensional -lm
```

Certifique-se de ter o compilador GCC instalado em seu sistema. A flag -lm é necessária para linkar a biblioteca matemática, que contém a função ceil.

### 🏃🏽‍➡️ Execute o programa:

```bash
./calculo_peso_dimensional
```

### ⚙️ Compile o Código

```bash
gcc calculo_peso_dimensional.c -o calculo_peso_dimensional -lm
```

Certifique-se de ter o compilador GCC instalado em seu sistema. A flag -lm é necessária para linkar a biblioteca matemática, que contém a função ceil.

### 🏃🏽‍➡️ Execute o programa:


```bash
./calculo_peso_dimensional
```

### ⌨️ Digite as dimensões:

O programa solicitará que você digite o comprimento, a largura e a altura da caixa, em polegadas. Digite cada valor e pressione Enter.

###  Resultado:

O programa exibirá o peso dimensional calculado, em libras.

###  Exemplo de uso:

```bash
Digite o comprimento da caixa em polegadas: 12
Digite a largura da caixa em polegadas: 10
Digite a altura da caixa em polegadas: 8
O peso dimensional da caixa é: 6 libras
```

### 🫣 Observações

- O programa assume que as dimensões da caixa são números inteiros positivos.
- O resultado do peso dimensional é arredondado para cima para o inteiro mais próximo, utilizando a função ceil da biblioteca matemática.
- O valor 166 (polegadas cúbicas por libra) é definido como uma constante no código.

### 🎯 Desafios
Este programa foi criado como um exercício para praticar o uso de matrizes e funções em C. Os desafios propostos eram:

Solicitar ao usuário que insira as dimensões da caixa (comprimento, largura e altura) por meio da entrada do programa.
Definir como constante o número 166 (que nessa expressão significa polegadas cúbicas por libra).

### 🤝 Contribuições
Contribuições são sempre bem-vindas! Se você tiver alguma sugestão de melhoria ou correção de bugs, por favor, abra uma issue ou envie um pull request.

