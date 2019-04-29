#ifndef fooarpa_inethfoo
#define fooarpa_inethfoo

#if defined(HAVE_ARPA_INET_H)

#include <arpa/inet.h>

#elif defined(OS_IS_WIN32)

/* On Windows winsock2.h (here included via pulsecore/socket.h) provides most of the functionality of arpa/inet.h. */

#include <pulsecore/socket.h>

#endif

#endif
