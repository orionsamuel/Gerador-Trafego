#include "GenerationFile.h"
#include <iostream>
#include <fstream>

using namespace std;
ifstream leitura;
ofstream escrita;

GenerationFile::GenerationFile(){

}

GenerationFile::~GenerationFile(){

}

void GenerationFile::setNomeArquivo(){
    cout << "Entre com o nome do arquivo do grafo da aplicacao: " << endl;
    cin >> this->nomeArquivo;
}

void GenerationFile::recebeParameters(int numCores, int numPacotes, int deadline){
    this->numCores = numCores;
    this->numPacotes = numPacotes;
    this->deadline = deadline;
}

void GenerationFile::setArquivoSaida(){
    cout << "Entre com o nome do arquivo de saida: " << endl;
    cin >> this->arquivoSaida;
}

void GenerationFile::leituraEscrita(){
    char linha[5];
    escrita.open(arquivoSaida);
    escrita << numCores << endl;
    leitura.open(nomeArquivo);
    while(leitura.getline(linha, 5)){
        //leitura.getline(linha, 5);
        escrita << linha << " " << numPacotes << " " << " " << deadline << endl;
    }
    leitura.close();
    escrita.close();
}
