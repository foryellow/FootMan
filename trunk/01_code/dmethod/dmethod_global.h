#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DMETHOD_LIB)
#  define DMETHOD_EXPORT Q_DECL_EXPORT
# else
#  define DMETHOD_EXPORT Q_DECL_IMPORT
# endif
#else
# define DMETHOD_EXPORT
#endif
