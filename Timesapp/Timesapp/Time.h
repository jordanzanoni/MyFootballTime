#ifndef _ TIME_H
#define _TIME_H
#include<string>;
#include"Jogador.h";
#include<vector>; // NOVO 28/10/16
using namespace std;

// sempre incluir #ifdef  etc...


class Time {
	public:
		
		Time (); // Construtor : é o ponto de partida da classe. 1ª met a ser instanciado
		string nome;
		string cor;
		
		int pontos;
		int dinheiro;
		int numeroDeJogadores;

		vector<Jogador> jogadores;

		void venderJogador();
		void comprarJogador();
		
		
};

#endif // ** TIME_H * H/

