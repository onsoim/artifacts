#include "artifacts.h"

// hosts, Imhosts.sam, protocol, services
void getEtc(void) {
	cout << "[*] Get Etc Files" << endl;

	system("tools\\forecopy_handy.exe -t onsoim\\");

	cout << "===== Complete! =====" << endl;
}