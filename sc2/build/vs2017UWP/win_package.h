#pragma once

#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Storage.h"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/Windows.Storage.h"

#ifdef __cplusplus
extern "C" {
	const char * const win_getPackageDir();
	const char * const win_getLocalAppDataDir();
	const char * const win_getLogFile();
	const char * const win_getMeleeDir();

	//const wchar_t * const win_getdirname();
	//const wchar_t * const win_getLocalDirPath();

	//const int const win_getLogFilePath(char *buffer);
	//const size_t win_getLogFilePathLength();

	//const int const win_wGetLogFilePath(wchar_t *buffer);

	void test();
}
#else
const wchar_t * const win_getdirname();
#endif