#ifndef GENERATIONFILE_H_INCLUDED
#define GENERATIONFILE_H_INCLUDED

#include <fstream>
#include <string.h>

class GenerationFile{
public:
    char nomeArquivo[30];
    char arquivoSaida[30];
    int numCores;
    int numPacotes;
    int deadline;

    GenerationFile();
    ~GenerationFile();
    void setNomeArquivo();
    void leituraEscrita();
    void recebeParameters(int numCores, int numPacotes, int deadline);
    void setArquivoSaida();
};

#endif // GENERATIONFILE_H_INCLUDED
