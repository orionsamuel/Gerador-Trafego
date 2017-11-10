#include "Parameters.h"
#include <iostream>

using namespace std;

Parameters::Parameters(){

}

Parameters::~Parameters(){

}

void Parameters::setParameters(){
	cout << "Entre com numero de cores da aplicacao: " << endl;
	cin >> this->numCores;

	cout << "Entre com o numero de pacotes de trasmissao por core: " << endl;
	cin >> this->numPacotes;

	cout << "Entre com o prazo de deadline em ciclos de clock: " << endl;
	cin >> this->deadline;


}

