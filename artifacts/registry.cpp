#include "artifacts.h"

void getRegistry(void) {
	cout << "getRegistry" << endl;
	
	char path[] = "./onsoim/registry";
	int result = _mkdir(path);
	
	system("tools\\RegEx.exe -h onsoim\\registry\\");
	/*
	ifstream fin;
	ofstream fout;

	fin.open("C:\Windows\System32\config\SOFTWARE", ios::binary);
	fout.open("./onsoim/registry/SOFTWARE", ios::binary);
	char buf[1000000];
	string s;

	fin.seekg(0, ios::end);

	int sz = fin.tellg();

	cout << sz << endl;

	fin.seekg(0, ios::beg);

	fin.read(buf, sz);
	fout.write(buf, sz);
	*/
}