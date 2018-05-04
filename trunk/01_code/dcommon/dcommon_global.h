#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DCOMMON_LIB)
#  define DCOMMON_EXPORT Q_DECL_EXPORT
# else
#  define DCOMMON_EXPORT Q_DECL_IMPORT
# endif
#else
# define DCOMMON_EXPORT
#endif
