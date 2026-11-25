
/* O compilador não vai gerar o executável por causa
de um erro. A inteção do programa era subtrair 100
de 10. 100 se trata de um inteiro,
mas o tipo de dado de "10" não é inteiro e 
sim char, logo, a operação se mostra inválida.

ex2.c: In function ‘main’:
ex2.c:4:30: error: invalid operands to binary - (have ‘int’ and ‘char *’)
    4 |     printf("Soma = %d\n", 100-"10");
      |                              ^
      |                              |
      |                              char *

       O texto explica que a operação em questão
       (subtração) é inválida para o tipo de dado 
       inteiro junto com o tipo de dado char
       (tipos de dados que se comportam de formas
       distintas diante de um operador)*/