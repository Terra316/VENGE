#pragma once

#include "../Platform/OSdetect.h"

#ifdef VSL_PF_LINUX
    #ifdef VSL_SHARED
        #define VSL_API __attributes((visibility("default")))
    #else
        #define VSL_API
    #endif
#elif defined VSL_PF_WIN32
    #ifdef VSL_SHARED
        #ifdef VSL_PF_WIN32
            #define VSL_API __declspec(dllexport)
        #elif defined(VSL_PF_WIN32)
            #define VSL_API __declspec(dllimport)
        #endif
    #else
        #define VSL_API
    #endif
#endif