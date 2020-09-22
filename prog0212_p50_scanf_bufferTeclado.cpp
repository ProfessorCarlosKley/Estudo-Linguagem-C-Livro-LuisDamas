#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.

int main(){
	
char ch1, ch2;
	printf("Introduza um caractere: ");
	scanf("%c",&ch1);
	printf("Introduza outro caractere: ");
	scanf("%c",&ch2);
	printf("Os caracteres introduzidos foram: '%c' e '%c'\n", ch1, ch2);
	/*
	Neste exemplo, a digitarmos um caractere e pressionarmos enter, logo, o resultado
	ser� a exibi��o do primeiro caractere com o valor '' para o segundo caractere.
	Isso acontece porque ao pressionar enter, este � lido por scanf como um caractere
	o que � correto pois um enter � um caractere normal do teclado.
	Neste caso se quisessemos considerar dois caracteres ab por exemplo, devemos
	digitar na sequ�ncia "ab" e depois pressionar enter. 
	Scanf captura as teclas pressionadas no teclado e na sequ�ncia. Portando, 
	pressinoar 'a' e depois enter siginfica que scanf vai ler a letra a e depois
	a tecla enter. Mais detalhes na p. 50.
	- Interessante notar que a pressionar enter, o cursor escreve a primeira aspas
	na mesma linha e a segunda na linha seguinte, pois o scanf leu o enter e passou
	para a pr�xima linha. A solu��o para isso est� no prog 0212b. Colocando um espa�o
	antes do %c do segundo scanf. 
	*/
	return 0;
	system("PAUSE");
}
