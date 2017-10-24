#ifdef __cplusplus
extern "C" {
#endif

/* See https://stackoverflow.com/a/28031039 */
#ifdef _WIN32
  /* See http://stackoverflow.com/questions/12765743/getaddrinfo-on-win32 */
  #ifndef _WIN32_WINNT
    #define _WIN32_WINNT 0x0501 /* Windows XP */
  #endif
  #include <winsock2.h>
  #include <Ws2tcpip.h>
#else
  /* Assume that any non-Windows platform uses POSIX-style sockets instead */
  #include <sys.socket.h>
  #include <arpa/inet.h>
  #include <netdb.h>
  #include <unistd.h>
#endif

int sockInit(void);
int sockQuit(void);
int sockClose(SOCKET sock);

#ifdef __cplusplus
} /* extern "C" */
#endif
