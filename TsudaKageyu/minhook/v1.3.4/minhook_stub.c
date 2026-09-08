#include "MinHook.h"

MH_STATUS MH_Initialize(void)
{
    return MH_OK;
}

MH_STATUS MH_Uninitialize(void)
{
    return MH_OK;
}

MH_STATUS MH_CreateHook(void *pTarget, void *pDetour, void **ppOriginal)
{
    (void)pTarget;
    (void)pDetour;
    if (ppOriginal) {
        *ppOriginal = 0;
    }
    return MH_OK;
}

MH_STATUS MH_RemoveHook(void *pTarget)
{
    (void)pTarget;
    return MH_OK;
}

MH_STATUS MH_EnableHook(void *pTarget)
{
    (void)pTarget;
    return MH_OK;
}

MH_STATUS MH_DisableHook(void *pTarget)
{
    (void)pTarget;
    return MH_OK;
}

const char *MH_StatusToString(MH_STATUS status)
{
    (void)status;
    return "MH_OK";
}
