#pragma once

#include <nall/memory.hpp>
#include <nall/string.hpp>

#if defined(API_POSIX) && !defined(PLATFORM_HORIZON)
  #include <nall/posix/shared-memory.hpp>
#endif

// For Horizon we re-use the Windows stub
#if defined(API_WINDOWS) || defined(PLATFORM_HORIZON)
  #include <nall/windows/shared-memory.hpp>
#endif
