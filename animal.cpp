#include "animal.h"

using namespace std;




 /* Recebe dados em estream no formato csv da seguinte forma:
 Id,Classe,Nome,Nome científico,Sexo,Tamanho(m),Dieta predominante,Veterinário associado,Tratador responsável,Nome de batismo.*/

 
istream& operator>> ( istream& is, Animal & a )
{

	string entrada[10];
	
	for (int i = 0; i < 10; ++i)
		getline( is, entrada[i], ',' );
	
	// Carregando os atributos na classe
	a.set_id( stoi( entrada[0]) );
	a.set_classe( entrada[1] );
	a.set_nome(entrada[2]);
	a.set_nome_cientifico ( entrada[3] );
	a.set_sexo( entrada[4] );
	a.set_tamanho ( stof(entrada[5]) );
	a.set_dieta ( entrada[6] );
	a.set_veterinario ( Veterinario(stoi(entrada[7])) );
	a.set_tratador ( Tratador(stoi(entrada[8])) );
	a.set_nome_batismo ( entrada[9] );
	
	return is;
}