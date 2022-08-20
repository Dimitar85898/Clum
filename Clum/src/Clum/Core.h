#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define CLUM_API __declspec(dllexport)
	#else
		#define CLUM_API __declspec(dllimport)
	#endif
#endif