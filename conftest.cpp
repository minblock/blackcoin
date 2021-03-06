/* confdefs.h */
#define PACKAGE_NAME "Blackcoin Core"
#define PACKAGE_TARNAME "blackcoin"
#define PACKAGE_VERSION "0.18.1"
#define PACKAGE_STRING "Blackcoin Core 0.18.1"
#define PACKAGE_BUGREPORT "https://github.com/blackcoin-project/blackcoin/issues"
#define PACKAGE_URL "https://blackcoin.org/"
#define HAVE_CXX11 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define USE_ASM 1
#define ENABLE_SSE41 1
#define ENABLE_AVX2 1
#define ENABLE_SHANI 1
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_STRERROR_R 1
#define STRERROR_R_CHAR_P 1
#define HAVE_FUNC_ATTRIBUTE_VISIBILITY 1
#define HAVE_ENDIAN_H 1
#define HAVE_BYTESWAP_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_UNISTD_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_PRCTL_H 1
#define HAVE_DECL_GETIFADDRS 1
#define HAVE_DECL_FREEIFADDRS 1
#define HAVE_DECL_STRNLEN 1
#define HAVE_DECL_DAEMON 1
#define HAVE_DECL_LE16TOH 1
#define HAVE_DECL_LE32TOH 1
#define HAVE_DECL_LE64TOH 1
#define HAVE_DECL_HTOLE16 1
#define HAVE_DECL_HTOLE32 1
#define HAVE_DECL_HTOLE64 1
#define HAVE_DECL_BE16TOH 1
#define HAVE_DECL_BE32TOH 1
#define HAVE_DECL_BE64TOH 1
#define HAVE_DECL_HTOBE16 1
#define HAVE_DECL_HTOBE32 1
#define HAVE_DECL_HTOBE64 1
#define HAVE_DECL_BSWAP_16 1
#define HAVE_DECL_BSWAP_32 1
#define HAVE_DECL_BSWAP_64 1
#define HAVE_DECL___BUILTIN_CLZ 1
#define HAVE_DECL___BUILTIN_CLZL 1
#define HAVE_DECL___BUILTIN_CLZLL 1
#define HAVE_MALLOC_INFO 1
#define HAVE_MALLOPT_ARENA_MAX 1
#define HAVE_VISIBILITY_ATTRIBUTE 1
#define HAVE_THREAD_LOCAL 1
#define HAVE_SYS_GETRANDOM 1
#define HAVE_MINIUPNPC_MINIWGET_H 1
#define HAVE_MINIUPNPC_MINIUPNPC_H 1
#define HAVE_MINIUPNPC_UPNPCOMMANDS_H 1
#define HAVE_MINIUPNPC_UPNPERRORS_H 1
#define HAVE_BOOST /**/
#define HAVE_BOOST_SYSTEM /**/
#define HAVE_BOOST_FILESYSTEM /**/
#define HAVE_BOOST_THREAD /**/
#define HAVE_BOOST_CHRONO /**/
#define HAVE_BOOST_UNIT_TEST_FRAMEWORK /**/
/* end confdefs.h.  */

  #include <boost/config.hpp>
  #include <boost/version.hpp>
  #if !defined(BOOST_NO_SCOPED_ENUMS) && !defined(BOOST_NO_CXX11_SCOPED_ENUMS) && BOOST_VERSION < 105700
  #define BOOST_NO_SCOPED_ENUMS
  #define BOOST_NO_CXX11_SCOPED_ENUMS
  #define CHECK
  #endif
  #include <boost/filesystem.hpp>

int
main ()
{

  #if defined(CHECK)
    boost::filesystem::copy_file("foo", "bar");
  #else
    choke;
  #endif

  ;
  return 0;
}
