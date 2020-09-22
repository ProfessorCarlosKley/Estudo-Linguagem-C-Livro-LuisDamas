#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.

int main(){
	
char ch1, ch2;
	printf("Introduza um caractere: ");
	scanf("%c",&ch1);
	printf("Introduza outro caractere: ");
	scanf("%c",&ch2);
	printf("Os caracteres introduzidos foram: '%c' e '%c'\n", ch1, ch2);
	/*
	Neste exemplo, a digitarmos um caractere e pressionarmos enter, logo, o resultado
	será a exibição do primeiro caractere com o valor '' para o segundo caractere.
	Isso acontece porque ao pressionar enter, este é lido por scanf como um caractere
	o que é correto pois um enter é um caractere normal do teclado.
	Neste caso se quisessemos considerar dois caracteres ab por exemplo, devemos
	digitar na sequência "ab" e depois pressionar enter. 
	Scanf captura as teclas pressionadas no teclado e na sequência. Portando, 
	pressinoar 'a' e depois enter siginfica que scanf vai ler a letra a e depois
	a tecla enter. Mais detalhes na p. 50.
	- Interessante notar que a pressionar enter, o cursor escreve a primeira aspas
	na mesma linha e a segunda na linha seguinte, pois o scanf leu o enter e passou
	para a próxima linha. A solução para isso está no prog 0212b. Colocando um espaço
	antes do %c do segundo scanf. 
	*/
	return 0;
	system("PAUSE");
}
