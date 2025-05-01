// must be the first include in all compile units
#ifndef SASS_SASS_H
#define SASS_SASS_H

// 1 vài OS define macro này để enable 1 số tính năng đặc biệt
// Tắt cái này đi để tránh conflict với các thư viện khác
#undef __EXTENSIONS__

#ifdef _MSC_VER
#pragma warning(disable : 4005)
#endif

#endif