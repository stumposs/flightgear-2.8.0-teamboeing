

/* #undef FG_NDEBUG */
/* #undef ENABLE_SP_FDM */

// JSBSim needs this, to switch from standalone to in-FG mode
#define FGFS

#define PU_USE_NONE // PLIB needs this to avoid linking to GLUT

#define ENABLE_PLIB_JOYSTICK

// threads are required (used to be optional)
#define ENABLE_THREADS 1

// audio support is assumed
#define ENABLE_AUDIO_SUPPORT 1

#define HAVE_SYS_TIME_H
/* #undef HAVE_WINDOWS_H */
#define HAVE_MKFIFO

#define VERSION "2.8.0"

#define HAVE_VERSION_H 1 // version.h is assumed for CMake builds

/* #undef ENABLE_UIUC_MODEL */
/* #undef ENABLE_LARCSIM */
#define ENABLE_YASIM
#define ENABLE_JSBSIM

#define HAVE_SVN_CLIENT_H
#define HAVE_LIBSVN_CLIENT_1

#define PKGLIBDIR "/usr/local/FlightGear-devel/lib/FlightGear"

/* #undef FG_HAVE_HLA */
/* #undef FG_JPEG_SERVER */
