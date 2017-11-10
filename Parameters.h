#ifndef PARAMETERS_H_INCLUDED
#define PARAMETERS_H_INCLUDED


class Parameters{
public:
	int numCores;
	int numPacotes;
	int deadline;

	Parameters();
	~Parameters();
	void setParameters();

};

#endif
