#include "artifacts.h"

void getMEM(void) {
	cout << "[*] Get Memory Dump" << endl;

	system("tools\\DumpIt.exe");
	system("mkdir onsoim\\memory");
	system("move *.raw onsoim\\memory\\memdump.raw");


	cout << "===== Complete! =====" << endl;
}