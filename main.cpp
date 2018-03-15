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
	
	inFromFile >> item;
	cout << "Item 1 is " << item << endl;
	cout << "Item 2 is " << item << endl;
	inFromFile >> item;
	cout << "Item 3 is " << item << endl;
	inFromFile >> item;
	cout << "Item 4 is " << item << endl;
	inFromFile >> item;
	cout << "Item 1 is " << item << endl;
	inFromFile >> item;
	cout << "Item 2 is " << item << endl;
	inFromFile >> item;
	cout << "Item 3 is " << item << endl;
	inFromFile >> item;
	cout << "Item 4 is " << item << endl;
	
	cout << "Total A: " << As << endl;
	cout << "Total F: " << Fs << endl;
	cout << "Total a: " << as << endl;
	cout << "Total b: " << bs << endl;
	cout << "Total All Characters: " << total << endl;
	
	inFromFile.close();
	return 0;
}
