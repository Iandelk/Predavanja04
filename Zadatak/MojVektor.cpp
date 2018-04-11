#include "MojVektor.h"

MojVektor::MojVektor()
{
	vrijednosti = new double[1];
	vel = 1;
	kap = 1;
}

MojVektor::~MojVektor() {
	if (vrijednosti != nullptr) {
		delete[] vrijednosti;
	}
}


MojVektor::MojVektor(int n, double val) {

	vrijednosti = new double[n];
	for (int i = 0; i < n; i++) {
		vrijednosti[i] = val;
	}
	vel = n;
	kap = n;

}

MojVektor::MojVektor(int n) {

	vrijednosti = new double[n];

	kap = n;

}


int MojVektor::velicina() {
	return vel;
}


double MojVektor::naMjestu(int i) {
	return vrijednosti[i];
}

void MojVektor::rast() {

	kap = kap + (kap / 3);

	double *nove_vrijednosti = new double[kap];

	for (int i = 0; i < vel; i++) {
		nove_vrijednosti[i] = vrijednosti[i];
	}
	
	delete[] vrijednosti;

	vrijednosti = nove_vrijednosti;

}

void MojVektor::umetni(double broj, int pozicija) {

	if (vel == kap) {
	rast();
}

	for (int i = vel; i >= 0; i--)
	{
	

		if (i == pozicija) {
			vrijednosti[i] = broj;
			break;
		}


		vrijednosti[i+1] = vrijednosti[i];


	}

}