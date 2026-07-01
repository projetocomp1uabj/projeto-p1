# ALGORITMOS

Um **algoritmo** é uma sequência finita e bem definida de passos (instruções) que resolve um problema ou realiza uma tarefa. É o passo a passo sequêncial do que quer ser feito: primeiro, executa ação a, depois b, depois c, para aí sim chegar numa conclusão d, o resultado esperado.

Algoritmos tem características essenciais para seu funcionamento, são essas:

- Finitude — precisa terminar em algum momento, após um número finito de passos;
- Precisão/clareza — cada passo deve ser bem definido, sem ambiguidade, para evitar conflitos;
- Entrada (input) — recebe zero ou mais dados de entrada;
- Saída (output) — produz pelo menos um resultado;
- Efetividade — cada passo deve ser executável (na realidade).

A exemplo, vamos analisar um algoritmo simples:
- Levantar;
- Andar para frente 5 passos;
- Gire 90 graus à esquerda;
- Andar para frente 5 passos;
- Gire 90 graus à esquerda;
- Andar para frente 5 passos;
- Gire 90 graus à esquerda;
- Andar para frente 5 passos;
- Sentar.
	
Esse algoritmo faz com que nosso objeto (a bolinha) ande uma trajetória de um quadrado. Quando se programa, um algoritmo é a lógica por trás de um código, ele em si, em qualquer linguagem, é apenas uma forma de expressar esse algoritmo de uma forma que o computador poderá entender.

# ORDENAMENTO

**Algoritmos de ordenação** são algoritmos que organizam uma coleção de elementos (números, strings, objetos) em uma ordem específica, geralmente crescente ou decrescente. São bons como preparação para entender algoritmos mais complexos, além de uma boa introdução didática a lógica de resolução de problemas.

Existem vários tipos, como o Quick Sort, Selection Sort, Merge Sort, entre outros. Neste trabalho, será analisado e estudado o Bubble Sort.


# BUBBLE SORT


O que é o bubble sort 
**Bubble Sort** é um algoritmo de ordenação simples utilizado para organizar elementos, como números ou palavras, em ordem crescente ou decrescente. Seu funcionamento consiste em comparar dois elementos vizinhos por vez e, caso estejam na ordem errada, trocar suas posições.

Esse processo é repetido várias vezes, fazendo com que os maiores (ou menores) elementos "flutuem" para a posição correta, o que deu origem ao nome **Bubble Sort** ("ordenação por bolha"). O algoritmo continua realizando essas comparações até que toda a sequência esteja ordenada.

Apesar de ser fácil de entender e implementar, o Bubble Sort não é eficiente para listas grandes, pois realiza muitas comparações e trocas. Por isso, ele é mais utilizado para fins de aprendizado sobre algoritmos de ordenação do que em aplicações que exigem alto desempenho.
