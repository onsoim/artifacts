#include "artifacts.h"

#define _MAX_BUFFER_SIZE 4096

void getDesktop(void) {
	char folderpath[_MAX_BUFFER_SIZE];
	char fullpath[_MAX_BUFFER_SIZE];

	cout << "[*] Get Desktop Files" << endl;

	system("mkdir onsoim\\files\\Desktop");
	GetEnvironmentVariableA("USERPROFILE",folderpath,_MAX_BUFFER_SIZE);
	sprintf_s(fullpath, _MAX_BUFFER_SIZE, "xcopy %s\\Desktop onsoim\\files\\Desktop /c /e /q /h /y",folderpath);

	system(fullpath);

	cout << "===== Complete! =====" << endl;
}

void getDownloads(void) {
	char folderpath[_MAX_BUFFER_SIZE];
	char fullpath[_MAX_BUFFER_SIZE];

	cout << "[*] Get Downloads Files" << endl;

	system("mkdir onsoim\\files\\Downloads");
	GetEnvironmentVariableA("USERPROFILE", folderpath, _MAX_BUFFER_SIZE);
	sprintf_s(fullpath, _MAX_BUFFER_SIZE, "xcopy %s\\Downloads onsoim\\files\\Downloads /c /e /q /h /y", folderpath);

	system(fullpath);

	cout << "===== Complete! =====" << endl;
}

void getDocuments(void) {
	char folderpath[_MAX_BUFFER_SIZE];
	char fullpath[_MAX_BUFFER_SIZE];

	cout << "[*] Get Documents Files" << endl;

	system("mkdir onsoim\\files\\Documents");
	GetEnvironmentVariableA("USERPROFILE", folderpath, _MAX_BUFFER_SIZE);
	sprintf_s(fullpath, _MAX_BUFFER_SIZE, "xcopy %s\\Documents onsoim\\files\\Documents /c /e /q /h /y", folderpath);

	system(fullpath);


	cout << "===== Complete! =====" << endl;
}

void getAppData(void) {
	char folderpath[_MAX_BUFFER_SIZE];
	char fullpath[_MAX_BUFFER_SIZE];

	cout << "[*] Get AppData Files" << endl;

	system("mkdir onsoim\\files\\AppData");
	GetEnvironmentVariableA("USERPROFILE", folderpath, _MAX_BUFFER_SIZE);
	sprintf_s(fullpath, _MAX_BUFFER_SIZE, "xcopy %s\\AppData onsoim\\files\\AppData /c /e /q /h /y", folderpath);

	system(fullpath);

	cout << "===== Complete! =====" << endl;
}

void getProgramData(void) {
	char folderpath[_MAX_BUFFER_SIZE];
	char fullpath[_MAX_BUFFER_SIZE];

	cout << "[*] Get ProgramData Files" << endl;

	system("mkdir onsoim\\files\\ProgramData");
	GetEnvironmentVariableA("ProgramData", folderpath, _MAX_BUFFER_SIZE);
	sprintf_s(fullpath, _MAX_BUFFER_SIZE, "powershell -command \"xcopy %s onsoim\\files\\ProgramData /c /e /q /h /y\"", folderpath);

	system(fullpath);

	cout << "===== Complete! =====" << endl;
}

void getAllDir(void) {
	cout << "[*] Get All Important Files" << endl;

	getDesktop();
	getDownloads();
	getDocuments();
	getProgramData();
	getAppData();
	// cout << "===== Complete! =====" << endl;
}