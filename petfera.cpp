#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <map>
#include "funcionario.h"

using namespace std;


int main() {

Funcionario func;
Empresa emp;
int num;


/*
cout << "Remoção de um animal da lista após a sua comercialização" << endl;
cout << "Alteração dos dados cadastrais de um animal" << endl;
cout << "Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais" << endl;
cout << "Consulta de animais sob a responsabilidade de um determinado Veterinário ou Tratador" << endl;
cout << "Todas as atividades relacionadas ao cadastro de Veterinários e Tratadores" << endl;
*/


using namespace std;

int main( int argc, char const *argv[] )
{
    /* Abrindo os arquivos
    fstream dados_funcionarios;
    fstream dados_animais;
    dados_funcionarios.exceptions ( fstream::failbit | fstream::badbit );
    dados_animais.exceptions ( fstream::failbit | fstream::badbit );
    try {
        dados_funcionarios.open( "./data/cadastro_funcionarios.csv", fstream::in | fstream::out );
        dados_animais.open( "./data/cadastro_animais.csv", fstream::in | fstream::out );
    } 
    catch (const ifstream::failure & e){
        cerr << "Erro ao ler arquivo(s)\n";
    }*/
    
    // Instanciando um petshop
    Petshop pet_fera("Pet Fera");

    // @TODO ler dados do cadastro
    // pet_fera.carregar_dados();

    // Menu
    //char option;
    pet_fera.main_menu();


    // Escrevendo saída para arquivo
    std::ofstream arq_saida ("test.csv", std::ofstream::out);
    
    arq_saida << pet_fera;
    arq_saida.close();
    //dados_funcionarios.close();
    //dados_animais.close();
    

    return 0;
}