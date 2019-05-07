#ifndef ANIMAL_H
#define ANIMAL_H

#include "funcionario.h"
#include <iostream>
using namespace std;


class Animal 
{
	protected:
		int id;
		string classe;
		string nome; 
		string nome_cientifico;
		char sexo;
		float tamanho;
		string dieta;
		Veterinario veterinario;
		Tratador tratador;
		string nome_batismo;
	public:

		Animal();
		~Animal(); 

		//Falta modificar igual ao id

		void set_id( int id_ ){ this->id = id_; }
		void set_classe( string _classe ) { this->classe = _classe; }
		void set_nome( string _nome ) { this->nome = _nome; }
		void set_nome_cientifico( string _cientifico ) { this->cientifico = _cientifico; }
		void set_sexo( char _sexo ) { this->sexo = _sexo; }
		void set_tamanho( float _tamanho) { this->tamanho = _tamanho; }
		void set_dieta( string _dieta ) { this->dieta = _dieta; }
		void set_veterinario( Veterinario _vet ) { this->veterinario = _vet; }
		void set_tratador( Tratador _tratador ) { this->tratador = _tratador; }
		void set_nome_batismo( string _batismo ) { this->batismo = _batismo; }


};

class Anfibio : public Animal
{
	protected:
		int total_mudas;
		string ultima_muda;

	public:

		Anfibio();
		~Anfibio();

};

class Ave : public Animal
{
	protected:
		int tamanho_bico;
		int evergadura_asa;

	public:

		Ave();
		~Ave();

};

class Mamifero : public Animal
{
	protected:
		string cor_pelo;

	public:

		Mamifero(); 
		~Mamifero();

};

class Reptil : public Animal
{
	protected:
		bool venenoso;
		string tipo_veneno;

	public:

		Reptil();
		~Reptil();

};


class AnimalSilvestre
{
protected:
	string autorizacao_ibama;
public:
	AnimalSilvestre();
	~AnimalSilvestre();
};


class AnimalNativo : public AnimalSilvestre
{
protected:
	string uf_origem;
	string autorizacao;
public:
	AnimalNativo();
	~AnimalNativo();
};

class AnimalExotico: public AnimalSilvestre
{
protected:
	string pais_origem;
public:
	AnimalExotico();
	~AnimalExotico();
};

class AveExotica : public Ave , public AnimalExotico
{

public:
	AveExotica();
	~AveExotica();


};

class AveNativa : public Ave, public AnimalNativo
{
public:
	AveNativa();
	~AveNativa();


};

class ReptilExotico : public Reptil, public AnimalExotico
{
public:
	ReptilExotico();
	~ReptilExotico();


};

class ReptilNativo : public Reptil, public AnimalNativo
{
public:
	ReptilNativo();
	~ReptilNativo();


};

class MamiferoExotivo : public Mamifero, public AnimalExotico
{
public:
	MamiferoExotivo();
	~MamiferoExotivo();


};

class MamiferoNativo : public Mamifero, public AnimalNativo
{
public:
	MamiferoNativo();
	~MamiferoNativo();


};

class AnfibioExotivo : public Anfibio, public AnimalExotico
{
public:
	AnfibioExotivo();
	~AnfibioExotivo();


};

class AnfibioNativo : public Anfibio, public AnimalNativo
{
public:
	AnfibioNativo();
	~AnfibioNativo();


};



#endif
