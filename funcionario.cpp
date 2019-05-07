#include <iostream>
#include <string>
#include <ostream>
#include "funcionario.h"

using namespace std;

/*
	Construtores
*/

Funcionario::Funcionario()
{
	//Construtor padrão que não faz nada
	totalFuncionarios++;
}

Funcionario::~Funcionario()
{
	//Destrutor
}

/*
	Getters and Setters
*/


string Funcionario::getNome()
{
	return nome;
}

void Funcionario::setNome(string nome_)
{
	nome = nome_;
}

//falta fazer
		string getCpf();
		void setCpf(string cpf_);
		short getIdade();
		void setIdade(string idade_);
		short getTipo_sanguineo();
		void setTipo_sanguineo(short tipo_sanguineo_);		
		char getFator_rh();
		void setFator_rh(char fator_rh_);	
		string getEspecialidade();
		void setEspecialidade(string especialidade_);		


