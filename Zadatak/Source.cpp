#include <iostream>

#include "MojVektor.h"

using namespace std;


int main() {
	MojVektor v1;
	MojVektor v2(6);
	MojVektor v3(4, 2.3);

	cout << "v1: " << v1.velicina() << endl;;
	cout << "v2: " << v2.velicina() <<endl;
	cout << "v3: " << v3.velicina()<<endl;
	
	cout << "v3 na mjestu 3: " << v3.naMjestu(3) << endl;

	v3.umetni(3.1, 3);

	cout << "v3 na mjestu 3 nova: " << v3.naMjestu(3) << endl;

	return 0;
}

