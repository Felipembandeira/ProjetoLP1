#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <ostream>

using namespace std;


class Funcionario
{
protected:
		  int id;
		  string nome;
		  string cpf;
		  short idade;
		  short tipo_sanguineo;
		  char fator_rh;
		  string especialidade;


public:
		//Construtores e Destrutores Publicos
		Funcionario();
		~Funcionario();

		//Metodos Publicos
		string getNome();
		void setNome(string nome_);
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

		//Outros Metodos
		//Metodos e Atributos estaticos
		
		//friend std::ostream& operator<< (std::ostream &funcionario, Funcionario const func);

};	

class Veterinario : public Funcionario
{
private:
		string crmv;
		
public:
		Veterinario();
		~Veterinario();
};

class Tratador : public Funcionario
{
private:
		int nivel_de_seguranca; //0  somente aves;1  aves, mamíferos e répteis;2  apenas animais venenosos ou perigosos. 

public:
		Tratador();
		~Tratador();
};




#endif