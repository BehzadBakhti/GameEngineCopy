#pragma once
#ifdef HZ_PlATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define	HAZEL_API __declspec(dllexport)
	#else
		#define	HAZEL_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL

#endif