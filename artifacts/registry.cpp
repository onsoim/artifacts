#include "artifacts.h"

void getRegistry(void) {
	cout << "[*] Get Registry" << endl;
	
	system("tools\\forecopy_handy.exe -g onsoim\\");
	system("tools\\RegEx.exe -h onsoim\\registry(RegEx)\\");
}