#include "artifacts.h"

int main()
{
	if(!_mkdir("./onsoim")) {
		cout << "make output folder : onsoim" << endl;
	}
	getRegistry();
	getMFT();
	// getPrefetch();
	getIE();
	getFirefox();
	getChrome();
	// getEvtlog();
	getEtc();

	return 0;
}