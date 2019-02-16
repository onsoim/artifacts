#include "artifacts.h"

int main()
{
	if(!_mkdir("./onsoim")) {
		cout << "make output folder : onsoim" << endl;
	}
	
	getRegistry();
	getMFT();
	getPrefetch();
	getIE();
	getFirefox();
	getChrome();
	getEvtlog();
	getEtc();
	getMEM();
	getAllDir();

	cout << "[*] Get Packets " << endl;

	system("tools\\dumpcap\\dumpcap.exe -i 0 -a duration:10 -w onsoim\\dump0.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 1 -a duration:10 -w onsoim\\dump1.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 2 -a duration:10 -w onsoim\\dump2.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 3 -a duration:10 -w onsoim\\dump3.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 4 -a duration:10 -w onsoim\\dump4.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 5 -a duration:10 -w onsoim\\dump5.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 6 -a duration:10 -w onsoim\\dump6.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 7 -a duration:10 -w onsoim\\dump7.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 8 -a duration:10 -w onsoim\\dump8.pcap");
	system("tools\\dumpcap\\dumpcap.exe -i 9 -a duration:10 -w onsoim\\dump9.pcap");

	cout << "===== Complete! =====" << endl;

	return 0;
}