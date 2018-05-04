#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DPROJECT_LIB)
#  define DPROJECT_EXPORT Q_DECL_EXPORT
# else
#  define DPROJECT_EXPORT Q_DECL_IMPORT
# endif
#else
# define DPROJECT_EXPORT
#endif
