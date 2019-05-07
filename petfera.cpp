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



       	switch(num){
            case 1: emp.EntradadadosEmpresa();
            		emp.SaidadadosEmpresa();
              break;
            case 2: int qntfunc;
					cout << "Quantos funcionarios serao cadastrados?" << endl;
					cin >> qntfunc;
            		func.Entradadadosfuncionais(qntfunc);
            		func.Saidadadosfuncionais(qntfunc);
              break;
            case 3:
            	break;
            case 4:
            	break;
            case 5:
            	break;
            case 6:
            	break;
        }                




/*
    cout << "Cadastre o nome da empresa" << endl;

    string nomeemp;
    getline(cin, nomeemp);
    emp.setNomeEmp(nomeemp);



    cout << "Quantos funcionarios serao adicionados a empresa?" << endl;
    int quantfunc;
    cin >> quantfunc;

vector<Funcionario> func(quantfunc);

    for(int i=0; i<func.size(); i++){

	    func[i].Entradadadosfuncionais();

	}

	for(int i=0; i<func.size(); i++){

	    func[i].Saidadadosfuncionais();

	}



*/
    	
    return 0;
}


/*
		cout << "Cadastre o nome do funcionario, salario e data de admissao" << endl;
	    string nomefunc;
	    getline(cin, nomefunc);
	    func.setNomefunc(nomefunc); //nome do funcionario 

	    cout << "Cadastre o salario do funcionario" << endl;
	    float sal;
	    cin >> sal;
	    func.setSalario(sal); //salario do funcionario

	    cout << "Cadastre a data de admissao do funcionario" << endl;
	    int dia_adm, mes_adm, ano_adm;
	    cin >> dia_adm;
	    cin >> mes_adm;
	    cin >> ano_adm;
	    func.setDataAdm(dia_adm, mes_adm, ano_adm);//data de admissão

	

    cout << "Nome da empresa " << emp.getNomeEmp() << endl;
    cout << "Nome do funcionario " << func.getNomefunc() << endl;
    cout << "Salario do Funcionario  " << func.getSalario() << endl;
    cout << "Data de admissao " << func.getDataAdm() << endl;

 */