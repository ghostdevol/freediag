#ifndef _CCONF_H
#define _CCONF_H
// cconf.h.in is processed by cmake to generate cconf.h
// Replaces autotools' config.h.in + config.h combo.

// or  will be replaced by the contents of the cmake variable varname
/* #undef generates */

/* #undef HAVE_LIBREADLINE */

/* #undef HAVE_GETTIMEOFDAY */
#define HAVE_STRCASECMP
/* #undef HAVE_MS_KBHIT */
/* #undef HAVE_MS_GETCH */
/* #undef HAVE_ALARM */
/* #undef HAVE_SELECT */

/* #undef USE_RCFILE */
#define USE_INIFILE

#define PACKAGE_VERSION "1.09"
#define SCANTOOL_PROGNAME "freediag"
#define DIAG_TEST_PROGNAME "diag_test"
#define PROJECT_NAME "freediag"

#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
    #define PACKAGE_VERSION_VALUE 1,9,0,0
    #define PACKAGE_VERSION_STR "1.09\0"
    #define PROJECT_NAME_STR "freediag\0" 
    #define SCANTOOL_PROGNAME_EXE "freediag.exe\0"
    #define DIAG_TEST_PROGNAME_EXE "diag_test.exe\0"
#endif //Windows

#endif //ifndef _cconf_h
