// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MARKER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MARKER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MARKER_EXPORTS
#define MARKER_API __declspec(dllexport)
#else
#define MARKER_API __declspec(dllimport)
#endif

// This class is exported from the marker.dll
extern "C" {
	MARKER_API int enableTrace(void);
	MARKER_API int disableTrace(void);
	MARKER_API void Java_org_jaka_Native_enableTrace(void);
	MARKER_API void Java_org_jaka_Native_disableTrace(void);
}
