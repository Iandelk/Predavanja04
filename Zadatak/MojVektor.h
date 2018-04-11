#pragma once
class MojVektor
{
private:
	double* vrijednosti = nullptr;
	int vel = 0;
	int kap = 0;
	void rast();
public:
	MojVektor();
	MojVektor(int n);
	MojVektor(int n, double val);
	~MojVektor();
	int velicina();
	double naMjestu(int i);
	void umetni(double broj, int pozicija);
	

	
};

