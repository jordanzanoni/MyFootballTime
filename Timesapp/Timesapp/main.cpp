// Obs.: Incluir aspas no momento da inclusao da importa��o da biblioteca de Healder files
#include <iostream>;
#include <string>;
#include "Palmeira.h";
#include "Time.cpp"; // � necessario incluir este tambem?
#include "Time.H";


using namespace std;

/** 
Source files
Cpp ( renomear )
incluir **/

int main() {

	// Declara��o: Reservando local na memoria "variavel nula"
	Time time;

	// Instancia: Momento em que eu atribuo o valor
	// Recordar sempre de colocar o parenteses!
	
	time = Palmeiras();
	
	// Eu como compilador estou indo no endere�o de memoria " time" e estou executando a fun��o
	// comprar jogador.


	time.comprarJogador();

	cout << "Jordan" << endl;

	system("pause");
	return 0;
	
};


