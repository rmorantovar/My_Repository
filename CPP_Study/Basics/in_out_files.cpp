// basic file operations

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;

int main () {

	int L_alphabet = 20;
	vector < vector<float> > MJ;
	MJ.resize(L_alphabet);
	for (int ka= 0; ka<L_alphabet; ka++)
	{
		(MJ[ka]).resize(L_alphabet);
	};

	ifstream file("MJ2.txt");

	for (unsigned int i = 0; i < L_alphabet; i++) {
	    for (unsigned int j = 0; j < L_alphabet; j++) {
	        file >> MJ[i][j];
	        //MJ[i][j] = 1.2;
	    }
	}
	//fscanf (pFile, "%f", &MJ);
	for (unsigned int i = 0; i < L_alphabet; i++) {
	    for (unsigned int j = 0; j < L_alphabet; j++) {
	        cout << MJ[i][j] << "\t" ;
	    }
	    cout << "\n" ;
	}
}