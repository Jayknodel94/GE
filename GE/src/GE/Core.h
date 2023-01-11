#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GE_API _declspec(dllexport)
	#else
		#define GE_API _declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error GE only supports Windows!
#endif // GE_PLATFORM_WINDOWS
