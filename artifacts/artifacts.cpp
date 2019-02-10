#include "artifacts.h"

int main()
{
	if(!_mkdir("./onsoim")) {
		cout << "make output folder : onsoim" << endl;
	}
	getRegistry();
}