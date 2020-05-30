#ifndef _WINDOWS_WORKAROUND_H_
#define _WINDOWS_WORKAROUND_H_

// TODO(robinlinden): Remove once the wchar-functions are merged.
void *wcscpy(void *, const void *);
int _wcsicmp(const void *, const void *);
#include <windows.h>

#endif
