#include "src/common/headers.h"
#include "src/game/activation.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH: {
            DisableThreadLibraryCalls(hModule);
            HANDLE ThreadHandle = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE) MainThread, nullptr, 0, nullptr);
            if (ThreadHandle)CloseHandle(ThreadHandle);
            break;
        }
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
        default: {
            const char *message = "Hello, kernel log!"; // 要输出的消息
            OutputDebugStringA(message); // 将消息输出到内核日志
        }
    }
    return TRUE;
}