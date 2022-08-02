# Funções

## Funções Keyboard

As funções da **biblioteca Keyboard** permitem placas baseadas nos micros 32u4 ou SAMD funcionar como um teclado e enviar sinais de teclas pressionadas a um computador conectado através da porta micro USB nativa.

## Funções mais comuns

## **Keyboard.begin()**

Faz com que sua placa **inicie** a *emulação* de um teclado conectado ao computador.

## **Keyboard.end()**

Faz com que a placa **pare** a *emulação* de um teclado.

## **Keyboard.press()**

Funciona como se uma tecla fosse pressionada e segurada em seu teclado. É útil quando usado com *teclas modificadoras* **( é uma tecla especial em um teclado que modifica a ação comum de outra tecla quando as duas são pressionadas em conjunto ).**

Recebe como parâmetro **char** que é a tecla a ser precionada.

## **Keyboard.print()**

Envia uma tecla pressionada, ou uma sequência de teclas, para um computador conectado. Deve ser chamado após a função **Keyboard.begin()**.

Recebe como parâmetro **caractere** e **caracteres**.

 - caractere -> é um *char ou int*, como se fosse uma tecla pressionada.
  - caracteres -> é uma *string*, como se fosse uma palavra digitada pelo teclado.

## **Keyboard.println()**

Tem as mesma funcionalidade do **Keyboard.print()**, mas pula uma linha no final da mensagem.

## **Keyboard.release()**

Libera **uma** tecla que está sendo precionada pelo **Keyboard.press()**.

## **Keyboard.releaseAll()**

Libera **todas** tecla que está sendo precionada pelo **Keyboard.press()**.

## **Keyboard.write()**

Preciona e solta uma tecla.

Recebe como parâmetro **caracterer**.

 - caractere -> é um *char ou int*. Pode ser enviado em qualquer notação que é aceitável para um char.

---------

## Funções Mouse

As funções da **biblioteca Mouse** permitem placas baseadas nos micros 32u4 ou SAMD funcionar como um mouse e enviar sinais de click a um computador conectado através da porta micro USB nativa.

## Funções mais comuns

## **Mouse.begin()**

Faz com que sua placa **inicie** a *emulação* de um mouse conectado ao computador

## **Mouse.click()**

Envia um click momentâneo no local em que seu mouse está.

Pode receber como parâmetro qual botão vai ser clicado.

 - MOUSE_LEFT
 - MOUSE_RIGHT
 - MOUSE_MIDDLE

## **Mouse.end()**

Faz com que a placa **pare** a *emulação* de um mouse.

## **Mouse.move()**

Move o mouse em uma posição relativa em que **o seu mouse** está.

Recebe como parâmetro a quantidade de movimento em cada eixo.

*Mouse.move(**xVal, yVal, whell**)*

 - xVal => Quantidade de movimentos em X.
 - yVal => Quantidade de movimentos em Y.
 - whell => Quantidade de no *scroll* do mouse.

## **Mouse.press()**

Envia um click continuo de um botão do mouse para o computador no local em que **o seu mouse** está.

Pode receber como parâmetro qual botão vai ser clicado.

 - MOUSE_LEFT
 - MOUSE_RIGHT
 - MOUSE_MIDDLE

## **Mouse.release()**

Libera o botão previamente precionado pelo **Mouse.press()**.

## **Mouse.isPressed()**

Chega se o botão do mouse virtual está precionado ou não.

Pode receber como parâmetro qual botão vai ser clicado.

 - MOUSE_LEFT
 - MOUSE_RIGHT
 - MOUSE_MIDDLE

E retorna um **Boolean**.

[Anterior](./01-oque-e.md)

<!--
[Próximo](../Exemplos-Praticos/Mouse_Move/mouse_move.md)
>