# O que são funções ?

É a encapsulação de um fragmento de código nomeado que será usado em outro lugar no programa.

## Por que usar funções ?

- Deixam o código mais organizado;
- Reduz erros em casos de modificações no código;

Funções fazem com que seu código fique menor pelo fato de poder ser reaproveitado sem a necessidade de ter que reescrever o código novamente.

## Funções dentro do Arduino:

Existem duas funções que são padrão para a inicialização da programação com o arduino, que são a *setup()* e a *loop()*. Outras funções devem ser criadas fora dessas duas.

O código inicial de um programa no arduino tem essa cara:

```C++
void setup() {
  // Código aqui
}

void loop() {
  // Código aqui
}
```

### *setup()* 

É chamada apenas uma vez quando o programa é iniciado, é utilizado geralmente para inicialização de variaveis e de bibliotecas.

### *loop()*

É chamada repetidamente durante toda a execução do programa, é nele que geralmente se faz toda a lógica do programa.

## Algumas funções muito usadas:

São elas, *pinMode(), digitalWrite(), delay*.

### pinMode()

É responsavel por configurar quais os pinos sera utilizado para mandar ou receber dados, respectivamente OUTPUT e INPUT. Essa função recebe dois parametros, o primeiro é qual pino será utilizado e o segundo é qual sua responsabilidade (receber ou enviar dados). Ficando desse modo:

```C++
int pin = 13;

void setup() {
  pinMode(pin, OUTPUT);
}
```
Nesse exemplo o pino 13 ira ficar responsavel de mandar um sinal.

### digitalWrite()

É responsavel por mandar sinais para os pinos. o primeiro é qual pino será utilizado e o segundo é qual sua responsabilidade (ligar ou desligar). Ficando desse modo:

```C++
void loop() {
  digitalWrite(pin, HIGH);
}
```
Nesse exemplo o pino 13 iria mandar um sinal para a ativação de um led, um motor ou algo do tipo. E no exemplo ficará continuamente ligado, pois está na função loop e sem nenhuma condição de ativação ou parada.

### delay()

É responsavel por fazer com que o cógido espera uma quantidade de tempo para ser executado. Recebe um parametro que é o tempo de espera em milisegundos (ms). Ficando desse modo:

```C++
void loop() {
  delay(2000);
}
```
Nesse exemplo esse fica 2 segundos em espera.

[Anterior](./01-variaveis.md)

[Próximo](./03-bibliotecas.md)