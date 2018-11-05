#pragma once

#ifdef KG_PLATFORM_WINDOWS
	#ifdef KG_BUILD_DLL
		#define KIGGINS_API __declspec(dllexport)
	#else
		#define KIGGINS_API __declspec(dllimport)
	#endif
#else
	#error Kiggins only supports Windows
#endif