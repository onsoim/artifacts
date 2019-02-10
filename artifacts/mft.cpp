#include "artifacts.h"

void getMFT(void) {
	cout << "[*] Get MFT" << endl;

	system("tools\\forecopy_handy.exe -m onsoim\\");

	cout << "===== Complete! =====" << endl;
}