#include <string>
#include <vector>
using namespace std;
typedef int           int32;

#ifdef STRICT
typedef void* ENGHANDLE;
#define DECLARE_ENGHANDLE(name) struct name##__ { int unused; }; typedef struct name##__ *name
#else
typedef void* ENGHANDLE;
#define DECLARE_ENGHANDLE(name) typedef ENGHANDLE name
#endif

DECLARE_ENGHANDLE(EU_RDM);