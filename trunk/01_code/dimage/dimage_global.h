#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DIMAGE_LIB)
#  define DIMAGE_EXPORT Q_DECL_EXPORT
# else
#  define DIMAGE_EXPORT Q_DECL_IMPORT
# endif
#else
# define DIMAGE_EXPORT
#endif
