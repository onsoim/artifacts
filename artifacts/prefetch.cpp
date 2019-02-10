#include "artifacts.h"

void getPrefetch(void) {
	cout << "[*] Get Prefetch" << endl;

	system("tools\\forecopy_handy.exe -p onsoim\\");

	cout << "===== Complete! =====" << endl;
}