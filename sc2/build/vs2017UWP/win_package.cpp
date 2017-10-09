//#undef NDEBUG
//#undef _DEBUG
#include "win_package.h"
#include <iostream>

using namespace winrt;
//using namespace Windows::Storage;
using namespace Windows::ApplicationModel;

//const std::wstring make_logfilepath() {
//	std::wstring wDirPath(ApplicationData::Current->LocalFolder->Path->Data());
//	wDirPath.append(L"\\");
//	wDirPath.append(L"LogFile.txt");
//	wDirPath.append(L"\0");
//	return wDirPath;
//}



extern "C" {

	const char * const win_getPackageDir() {
		std::wstring wPackageFolder = Package::Current().InstalledLocation().Path().data();

		int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wPackageFolder[0], (int)wPackageFolder.size(), NULL, 0, NULL, NULL);
		std::string strTo(size_needed, 0);
		WideCharToMultiByte(CP_UTF8, 0, &wPackageFolder[0], (int)wPackageFolder.size(), &strTo[0], size_needed, NULL, NULL);
		char * result = new char[size_needed];
		strTo.copy(result, size_needed, 0);
		result[size_needed] = '\0';
		return result;
	}

	//const wchar_t * const win_getdirname() {

	//	auto current_package = Package::Current;
	//	auto local_folder = ApplicationData::Current->LocalFolder->Path;
	//	return local_folder->Data();
	//}

	//const wchar_t * const win_getLocalDirPath() {
	//	std::wstring wDirPath(ApplicationData::Current->LocalFolder->Path->Data());
	//	return wDirPath.c_str();
	//}

	//const int const win_getLogFilePath(char *buffer) {
	//	std::wstring logpath = make_logfilepath();

	//	mbstate_t state;
	//	memset(&state, 0, sizeof state);
	//	const wchar_t *logpath_c = logpath.c_str();
	//	int len = 1 + wcsrtombs(NULL, &logpath_c, 0, &state);
	//	wcsrtombs(buffer, &logpath_c, len, &state);

	//	return 0;
	//}

	//const int const win_wGetLogFilePath(wchar_t *buffer) {
	//	std::wstring logpath = make_logfilepath();
	//	const wchar_t *logpath_c = logpath.c_str();
	//	//wcscpy_s()
	//	wcscpy(buffer, logpath_c);
	//	return 0;
	//}

	//errno_t _wfreopen(
	//	FILE** pFile,
	//	const wchar_t *path,
	//	const wchar_t *mode,
	//	FILE *stream
	void test() {
		errno_t err;
		FILE *logFile;
		//std::wstring logpath = make_logfilepath();

		//err = _wfreopen_s(&logFile, logpath.c_str(), L"w+", stderr);
		//std::cerr << "BLAH BLAH BLAH" << std::endl;
		//fclose(logFile);
	}

	//const size_t win_getLogFilePathLength()
	//{
	//	return make_logfilepath().length();
	//}

}