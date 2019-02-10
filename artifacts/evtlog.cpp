#include "artifacts.h"

void getEvtlog(void) {
	cout << "[*] Get Event Log" << endl;

	system("tools\\forecopy_handy.exe -e onsoim\\");

	cout << "===== Complete! =====" << endl;
}