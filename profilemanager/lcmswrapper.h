#include "config.h"
#ifdef HAVE_LCMS2
#include "lcmswrapper_lcms2.h"
#else if HAVE_LCMS1
#include "lcmswrapper_lcms1.h"
#endif

