#pragma once

#ifdef __linux__
    #define VSL_PF_LINUX
#elif defined(__WIN32)
    #define VSL_PF_WIN32
#endif