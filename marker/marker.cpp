// marker.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "marker.h"


// This is an example of an exported function.
MARKER_API int wawawa(void)
{
	return 1;
}

MARKER_API int enableTrace(void)
{
	puts("ENABLETRACE");
	return 1;
}

MARKER_API int disableTrace(void)
{
	puts("DISABLETRACE");
	return 2;
}

MARKER_API void Java_org_jaka_Native_enableTrace(void) {
	puts("ENABLETRACE_JAVA");
}

MARKER_API void Java_org_jaka_Native_disableTrace(void) {
	puts("DISABLETRACE_JAVA");
}
