#include <iostream>
#include "Parameters.h"
#include "GenerationFile.h"

Parameters parameters;
GenerationFile generation;

using namespace std;

int main()
{
    parameters.setParameters();
    generation.recebeParameters(parameters.numCores, parameters.numPacotes, parameters.deadline);
    generation.setNomeArquivo();
    generation.setArquivoSaida();
    generation.leituraEscrita();
    return 0;
}
