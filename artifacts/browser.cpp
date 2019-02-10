#include "artifacts.h"

void getIE(void) {
	cout << "[*] Get IE Traces" << endl;

	system("tools\\forecopy_handy.exe -i onsoim\\");

	cout << "===== Complete! =====" << endl;
}

void getFirefox(void) {
	cout << "[*] Get Firefox Traces" << endl;

	system("tools\\forecopy_handy.exe -x onsoim\\");

	cout << "===== Complete! =====" << endl;
}

void getChrome(void) {
	cout << "[*] Get Chrome Traces" << endl;

	system("tools\\forecopy_handy.exe -c onsoim\\");

	cout << "===== Complete! =====" << endl;
}