#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int As = 0;
	int Fs = 0;
	int as = 0;
	int bs = 0;
	int total = 0;
	char item;
	
	ifstream inFromFile;
	inFromFile.open("info.dat");
	
	if( inFromFile.fail() ) { 
		cout << "Something went wrong opening info.dat." << endl;
	}
	
	for(int i=0; i<200; i++){
		inFromFile >> item;
		if(item == 'A'){ As++; }
		
		total++;
	}
	
	cout << "Total A: " << As << endl;
	cout << "Total F: " << Fs << endl;
	cout << "Total a: " << as << endl;
	cout << "Total b: " << bs << endl;
	cout << "Total All Characters: " << total << endl;
	
	inFromFile.close();
	return 0;
}
