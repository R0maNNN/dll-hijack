#include "version.h"

void DLLHijackAttach(bool isSucceed) {
    if (isSucceed) {
        MessageBoxW(NULL, TEXT("DLL Hijack Attach Succeed!"), TEXT(DLL_NAME " DLL Hijack Attach"), 0);
    }
}

