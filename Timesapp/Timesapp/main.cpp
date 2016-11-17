// Obs.: Incluir aspas no momento da inclusao da importação da biblioteca de Healder files
#include <iostream>;
#include <string>;
#include "Palmeira.h";
#include "Time.cpp"; // É necessario incluir este tambem?
#include "Time.H";


using namespace std;

/** 
Source files
Cpp ( renomear )
incluir **/

int main() {

	// Declaração: Reservando local na memoria "variavel nula"
	Time time;

	// Instancia: Momento em que eu atribuo o valor
	// Recordar sempre de colocar o parenteses!
	
	time = Palmeiras();
	
	// Eu como compilador estou indo no endereço de memoria " time" e estou executando a função
	// comprar jogador.


	time.comprarJogador();

	cout << "Jordan" << endl;

	system("pause");
	return 0;
	
};


