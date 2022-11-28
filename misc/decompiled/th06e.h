typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    dword hash;
    void * spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor * pType;
    ptrdiff_t dispCatchObj;
    void * addressOfHandler;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef int __ehstate_t;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_HandlerType HandlerType;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry * pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry * pTryBlockMap;
    uint nIPMapEntries;
    void * pIPToStateMap;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (* action)(void);
};

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType * pHandlerArray;
};

typedef unsigned short    wchar16;
typedef struct _s_FuncInfo FuncInfo;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void * LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void * HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef char CHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR * LPSTR;

typedef BYTE * LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef DWORD (* PTHREAD_START_ROUTINE)(LPVOID);

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _WIN32_FIND_DATAA * LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef enum enum_3269 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3269;

typedef enum enum_3269 INTRNCVT_STATUS;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef uint uintptr_t;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef uint size_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int intptr_t;

typedef struct localeinfo_struct * _locale_t;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef LONG_PTR LRESULT;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

typedef CHAR * LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagMSG * LPMSG;

typedef void (* TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef LONG * PLONG;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA * LPOSVERSIONINFOA;

typedef wchar_t WCHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR * LPWSTR;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef CHAR * LPCH;

typedef DWORD LCID;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef int (* FARPROC)(void);

typedef WORD ATOM;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT * LPRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef BOOL * LPBOOL;

typedef void * HGDIOBJ;

typedef DWORD COLORREF;

typedef struct HFONT__ * HFONT;

typedef DWORD * LPDWORD;

typedef DWORD * PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HTASK__ HTASK__, *PHTASK__;

struct HTASK__ {
    int unused;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef struct HDC__ * HDC;

typedef WORD * LPWORD;

typedef struct HTASK__ * HTASK;

typedef BYTE * PBYTE;

typedef void * LPCVOID;

typedef struct HBITMAP__ * HBITMAP;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct joyinfoex_tag joyinfoex_tag, *Pjoyinfoex_tag;

struct joyinfoex_tag {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwXpos;
    DWORD dwYpos;
    DWORD dwZpos;
    DWORD dwRpos;
    DWORD dwUpos;
    DWORD dwVpos;
    DWORD dwButtons;
    DWORD dwButtonNumber;
    DWORD dwPOV;
    DWORD dwReserved1;
    DWORD dwReserved2;
};

typedef struct timecaps_tag timecaps_tag, *Ptimecaps_tag;

struct timecaps_tag {
    UINT wPeriodMin;
    UINT wPeriodMax;
};

typedef struct midihdr_tag midihdr_tag, *Pmidihdr_tag;

struct midihdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    struct midihdr_tag * lpNext;
    DWORD_PTR reserved;
    DWORD dwOffset;
    DWORD_PTR dwReserved[8];
};

typedef struct _MMIOINFO _MMIOINFO, *P_MMIOINFO;

typedef struct _MMIOINFO MMIOINFO;

typedef DWORD FOURCC;

typedef LRESULT (MMIOPROC)(LPSTR, UINT, LPARAM, LPARAM);

typedef MMIOPROC * LPMMIOPROC;

typedef char * HPSTR;

typedef struct HMMIO__ HMMIO__, *PHMMIO__;

typedef struct HMMIO__ * HMMIO;

struct HMMIO__ {
    int unused;
};

struct _MMIOINFO {
    DWORD dwFlags;
    FOURCC fccIOProc;
    LPMMIOPROC pIOProc;
    UINT wErrorRet;
    HTASK htask;
    LONG cchBuffer;
    HPSTR pchBuffer;
    HPSTR pchNext;
    HPSTR pchEndRead;
    HPSTR pchEndWrite;
    LONG lBufOffset;
    LONG lDiskOffset;
    DWORD adwInfo[3];
    DWORD dwReserved1;
    DWORD dwReserved2;
    HMMIO hmmio;
};

typedef struct HMIDIOUT__ HMIDIOUT__, *PHMIDIOUT__;

typedef struct HMIDIOUT__ * HMIDIOUT;

typedef HMIDIOUT * LPHMIDIOUT;

struct HMIDIOUT__ {
    int unused;
};

typedef void (TIMECALLBACK)(UINT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

typedef TIMECALLBACK * LPTIMECALLBACK;

typedef struct _MMCKINFO _MMCKINFO, *P_MMCKINFO;

typedef struct _MMCKINFO MMCKINFO;

struct _MMCKINFO {
    FOURCC ckid;
    DWORD cksize;
    FOURCC fccType;
    DWORD dwDataOffset;
    DWORD dwFlags;
};

typedef struct tagJOYCAPSA tagJOYCAPSA, *PtagJOYCAPSA;

struct tagJOYCAPSA {
    WORD wMid;
    WORD wPid;
    CHAR szPname[32];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    CHAR szRegKey[32];
    CHAR szOEMVxD[260];
};

typedef struct joyinfoex_tag * LPJOYINFOEX;

typedef struct timecaps_tag * LPTIMECAPS;

typedef struct _MMIOINFO * LPMMIOINFO;

typedef struct tagJOYCAPSA * LPJOYCAPSA;

typedef UINT MMRESULT;

typedef struct midihdr_tag * LPMIDIHDR;

typedef struct _MMCKINFO * LPMMCKINFO;

typedef MMIOINFO * LPCMMIOINFO;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t * pchLanguage;
    wchar_t * pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct setloc_struct _setloc_struct;

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char * _token;
    wchar_t * _wtoken;
    uchar * _mtoken;
    char * _errmsg;
    wchar_t * _werrmsg;
    char * _namebuf0;
    wchar_t * _wnamebuf0;
    char * _namebuf1;
    wchar_t * _wnamebuf1;
    char * _asctimebuf;
    wchar_t * _wasctimebuf;
    void * _gmtimebuf;
    char * _cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void * _initaddr;
    void * _initarg;
    void * _pxcptacttab;
    void * _tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void * _terminate;
    void * _unexpected;
    void * _translator;
    void * _purecall;
    void * _curexception;
    void * _curcontext;
    int _ProcessingThrow;
    void * _curexcspec;
    void * _pFrameInfoChain;
    _setloc_struct _setloc_data;
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    void * _reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

typedef struct _tiddata * _ptiddata;

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct FrameInfo FrameInfo, *PFrameInfo;

struct FrameInfo { // PlaceHolder Structure
};

typedef struct CDocObjectServer CDocObjectServer, *PCDocObjectServer;

struct CDocObjectServer { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct COleDispParams COleDispParams, *PCOleDispParams;

struct COleDispParams { // PlaceHolder Structure
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo { // PlaceHolder Structure
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef int (* _onexit_t)(void);




int __fastcall FUN_00401000(int param_1);
int __fastcall FUN_004010e0(int param_1);
undefined4 __cdecl FUN_00401140(int param_1);
undefined4 __cdecl FUN_00401250(int param_1);
undefined4 __cdecl FUN_00401290(int param_1);
undefined4 FUN_004012c0(void);
undefined4 __cdecl FUN_004013a0(undefined4 *param_1);
void __fastcall FUN_00401410(undefined4 *param_1);
undefined4 FUN_004014d0(void);
void FUN_00401500(void);
void __thiscall FUN_00401530(int this,undefined4 *param_2,char *param_3);
void __cdecl FUN_00401650(int param_1,undefined4 *param_2,byte *param_3);
void __fastcall FUN_004016b0(int param_1);
void __thiscall FUN_00401940(int this,undefined4 *param_2,int param_3,undefined4 param_4);
void __thiscall FUN_00401a60(int this,undefined4 *param_2,int param_3,undefined4 param_4);
undefined4 __fastcall FUN_00401b80(int *param_1);
void __fastcall FUN_00402740(int *param_1);
undefined4 __fastcall FUN_00402870(int *param_1);
void __fastcall FUN_00403060(int *param_1);
void __fastcall FUN_004031e0(int param_1);
void __fastcall FUN_004033b0(int param_1);
void __fastcall FUN_00403580(undefined4 *param_1);
undefined4 * __cdecl FUN_00403670(undefined4 *param_1);
int __fastcall FUN_00403720(int param_1);
int __fastcall FUN_00403790(int param_1);
undefined4 __cdecl FUN_00403810(int *param_1);
undefined4 __cdecl FUN_004040d0(void *param_1);
undefined4 __cdecl FUN_00404180(void *param_1);
undefined4 __cdecl FUN_00404300(void *param_1);
undefined4 __cdecl FUN_004044c0(undefined4 param_1);
undefined4 __cdecl FUN_004045e0(void **param_1);
void FUN_00404650(void);
undefined4 __thiscall FUN_00404690(void *this,byte *param_1,byte *param_2);
undefined4 __fastcall FUN_00404860(int *param_1);
undefined4 __thiscall FUN_00404970(void *this,int param_1);
void __thiscall FUN_004051b0(int this,float *param_2,int param_3);
void __cdecl FUN_00405260(int param_1);
void __cdecl FUN_00405c10(int param_1);
void __cdecl FUN_00406020(int param_1);
void __cdecl FUN_00406160(int param_1);
void __cdecl FUN_004065e0(int param_1);
void __cdecl FUN_004066f0(int param_1);
void __cdecl FUN_00406b10(int param_1);
void __cdecl FUN_00406e70(int param_1);
void __cdecl FUN_004071b0(int param_1);
undefined4 __thiscall FUN_00407340(void *this,byte *param_1);
void __thiscall COleDispParams::~COleDispParams(COleDispParams *this);
undefined4 __thiscall FUN_00407440(int this,undefined4 *param_2,short param_3);
void __cdecl FUN_0040abe0(int param_1,int param_2);
void __cdecl FUN_0040ad10(int param_1,int param_2);
void __cdecl FUN_0040ae80(int param_1,int param_2);
undefined4 * __cdecl FUN_0040afb0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0040b380(int param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0040b3c0(int param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_0040b420(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_0040b4d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_0040b580(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_0040b650(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_0040b700(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_0040b7d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
float10 __cdecl FUN_0040b890(float *param_1);
void __cdecl FUN_0040b8e0(int param_1,int param_2);
void __cdecl FUN_0040ba80(int param_1,int param_2);
void __cdecl FUN_0040bb80(int param_1);
void __cdecl FUN_0040c100(int param_1);
void __cdecl FUN_0040c180(int param_1,int param_2);
void __cdecl FUN_0040c5b0(int param_1);
void __cdecl FUN_0040caf0(int param_1);
void __cdecl FUN_0040d040(int param_1,int param_2);
void __cdecl FUN_0040d400(int param_1);
void __cdecl FUN_0040d530(int param_1);
void __cdecl FUN_0040d770(int param_1);
void __cdecl FUN_0040d930(float *param_1);
void __cdecl FUN_0040daa0(int param_1);
void __cdecl FUN_0040dbc0(int param_1,int param_2);
void __cdecl FUN_0040dcc0(int param_1);
void __cdecl FUN_0040de00(float *param_1);
void __cdecl FUN_0040e1b0(int param_1,int param_2);
undefined4 * __fastcall FUN_0040e2d0(undefined4 *param_1);
void __fastcall FUN_0040e340(undefined4 *param_1);
undefined4 __cdecl FUN_0040e360(int param_1);
undefined4 __cdecl FUN_0040e5b0(int param_1);
undefined4 __cdecl FUN_0040e810(int param_1);
undefined4 __cdecl FUN_0040e920(int param_1);
undefined4 __cdecl FUN_0040ec10(int param_1);
undefined4 __cdecl FUN_0040edb0(int param_1);
float * __thiscall FUN_0040ef50(void *this,int param_1,float *param_2,int param_3,float param_4);
undefined4 __cdecl FUN_0040f100(int param_1);
undefined4 __cdecl FUN_0040f1f0(int param_1);
undefined4 __cdecl FUN_0040f280(undefined4 *param_1);
undefined4 FUN_0040f3d0(void);
undefined4 FUN_0040f3f0(void);
void FUN_0040f4a0(void);
long __fastcall FUN_0040f4d0(int param_1);
void __fastcall FUN_0040f550(int param_1);
void __fastcall FUN_0040f7c0(int param_1);
undefined4 __thiscall FUN_004106d0(int this,byte *param_2);
undefined4 FUN_004107b0(void);
undefined4 * __fastcall FUN_004108b0(undefined4 *param_1);
undefined4 __cdecl FUN_004109c0(int param_1);
undefined4 __cdecl FUN_00410a70(int param_1);
undefined4 __cdecl FUN_00410b10(int param_1);
undefined4 __cdecl FUN_00410d80(void *param_1);
void __fastcall FUN_00410e30(undefined4 *param_1);
undefined4 * __fastcall FUN_00411190(undefined4 *param_1);
int __fastcall FUN_00411240(int param_1);
float * __thiscall FUN_00411390(int this,short param_2,float *param_3,short param_4,undefined param_5,float param_6);
void __cdecl FUN_004114c0(int param_1);
void __fastcall FUN_00411530(int param_1);
undefined4 __fastcall FUN_00411da0(int param_1);
undefined4 __fastcall FUN_00411f40(int param_1);
void __fastcall FUN_004121b0(int param_1);
void __fastcall FUN_00412240(int param_1);
undefined4 __cdecl FUN_00412320(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_004123e0(int param_1);
void __cdecl FUN_00412e50(int param_1);
undefined4 __cdecl FUN_00412f10(int param_1);
undefined4 __cdecl FUN_00413220(byte **param_1);
undefined4 FUN_00413320(void);
void FUN_00413350(void);
void __fastcall FUN_00413380(int param_1);
void __fastcall FUN_00413430(undefined4 *param_1);
undefined4 * __fastcall FUN_00413450(undefined4 *param_1);
int __fastcall FUN_00413560(int param_1);
undefined4 __thiscall FUN_004135b0(int this,short *param_2,uint param_3,int param_4,float param_5);
void __thiscall FUN_00414160(int this,int param_2);
void __fastcall FUN_00414340(int param_1);
int __thiscall FUN_00414360(int this,int param_2,int param_3);
undefined4 __thiscall FUN_004145c0(int this,short *param_2);
float * __thiscall FUN_00414670(int this,short *param_2);
undefined4 __cdecl FUN_004148f0(undefined4 param_1);
undefined4 __cdecl FUN_004149d0(int param_1);
undefined4 __cdecl FUN_00416500(int param_1);
void __cdecl FUN_00416b50(float *param_1);
void __cdecl FUN_00416c50(int param_1);
undefined4 __cdecl FUN_00416d60(int param_1);
undefined4 FUN_00417270(void);
void FUN_004172b0(void);
undefined4 __fastcall FUN_004172d3(int param_1);
void __fastcall FUN_00417314(int param_1);
void __fastcall FUN_0041732c(int param_1);
undefined __fastcall FUN_00417344(int param_1);
void __thiscall FUN_0041735a(int this,undefined4 param_2);
void __thiscall FUN_004173d9(int this,undefined4 param_2);
void __thiscall FUN_00417458(int this,undefined4 param_2);
undefined4 __cdecl FUN_004174d7(int param_1);
void __cdecl FUN_00417502(uint *param_1);
void __thiscall FUN_00417acd(int this,int param_2,byte *param_3);
void __thiscall FUN_00417bfd(int this,int param_2,byte *param_3);
undefined4 __fastcall FUN_00417d29(uint *param_1);
undefined4 __thiscall FUN_00418665(int this,byte *param_2);
void __fastcall FUN_0041872a(int param_1);
void __thiscall FUN_00418768(int this,int param_2);
void __thiscall FUN_0041878b(int this,int param_2);
undefined4 __fastcall FUN_004188c9(int param_1);
undefined4 __fastcall FUN_004190ec(int param_1);
bool __fastcall FUN_00419572(int param_1);
bool __fastcall FUN_004195a2(int param_1);
void __fastcall FUN_004195bf(int param_1);
void __fastcall FUN_00419c99(uint *param_1);
void __fastcall FUN_0041adf3(int param_1);
void __cdecl FUN_0041b1a4(uint *param_1);
undefined4 __cdecl FUN_0041b1b1(int param_1);
undefined4 FUN_0041b252(void);
int __fastcall FUN_0041b34b(int param_1);
int __fastcall FUN_0041b4c4(int param_1);
void FUN_0041b58c(void);
undefined4 __fastcall FUN_0041b5af(undefined4 *param_1);
undefined4 FUN_0041b5e1(float param_1,float param_2,float param_3,float param_4);
undefined4 __cdecl FUN_0041b663(uint *param_1);
undefined4 __cdecl FUN_0041ba4a(int param_1);
undefined4 FUN_0041ba6a(void);
undefined4 __cdecl FUN_0041bb02(uint *param_1);
undefined4 __cdecl FUN_0041c1f7(int param_1);
void FUN_0041c269(void);
void __thiscall FUN_0041c28c(undefined4 this,float param_2);
void __thiscall FUN_0041c3f3(undefined4 this,float param_2);
void __thiscall FUN_0041c57e(int this,int param_2);
void __thiscall FUN_0041c5fa(int this,int param_2);
undefined4 * __fastcall FUN_0041c676(undefined4 *param_1);
void __fastcall FUN_0041c6d0(int param_1);
undefined2 * __fastcall FUN_0041c720(undefined2 *param_1);
void __fastcall FUN_0041c790(int param_1);
undefined2 * __fastcall FUN_0041c7f0(undefined2 *param_1);
undefined4 __thiscall FUN_0041c860(void *this,undefined2 *param_1,int param_2);
undefined4 __thiscall FUN_0041c940(int this,undefined2 *param_2,int param_3);
int __fastcall FUN_0041ca10(void *param_1);
int __fastcall FUN_0041cad0(void *param_1);
void __thiscall FUN_0041cb90(void *this,int param_1);
void __fastcall FUN_0041cd10(void *param_1);
undefined2 * FUN_0041cd40(undefined4 param_1);
void __thiscall FUN_0041cde0(void *this,void *param_1);
uint FUN_0041cf60(void);
void __cdecl FUN_0041cfc0(uint param_1);
ushort __cdecl FUN_0041d580(ushort *param_1,short param_2,ushort param_3,int param_4);
ushort __cdecl FUN_0041d600(ushort *param_1,short param_2,ushort param_3,uint param_4);
void FUN_0041d680(void);
void FUN_0041d820(void);
void FUN_0041e0c0(void);
void __thiscall FUN_0041e150(int this,int **param_2,int param_3,int param_4);
void __thiscall FUN_0041e210(int this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __thiscall CDocObjectServer::ReleaseDocSite(CDocObjectServer *this);
void * __cdecl FUN_0041e290(byte *param_1,int param_2);
undefined4 __cdecl FUN_0041e460(char *param_1,void *param_2,size_t param_3);
void __cdecl FUN_0041e4d0(int param_1,byte *param_2);
void __cdecl FUN_0041e620(int param_1,byte *param_2);
uint __fastcall FUN_0041e780(ushort *param_1);
uint __fastcall FUN_0041e7f0(ushort *param_1);
float10 __fastcall FUN_0041e820(ushort *param_1);
float10 __cdecl FUN_0041e850(float param_1,float param_2);
void __thiscall FUN_0041e8d0(undefined4 this,float *param_2,float *param_3);
void FUN_0041e940(void);
undefined4 * __fastcall FUN_0041e945(undefined4 *param_1);
void __fastcall FUN_0041e981(undefined4 *param_1);
bool __fastcall FUN_0041e992(undefined4 *param_1);
undefined4 __thiscall FUN_0041ea04(void *this,int param_1,int param_2,int param_3);
undefined4 __thiscall FUN_0041ea63(void *this,int param_1,int param_2,int param_3);
undefined * FUN_0041ec22(int param_1);
uint __thiscall FUN_0041ec72(void *this,undefined4 param_1,int param_2,int param_3,int param_4);
uint __thiscall FUN_0041ef11(void *this,int *param_1);
void FUN_0041f008(void);
void FUN_0041f02b(void);
void FUN_0041f050(void);
int __fastcall FUN_0041f230(int param_1);
void __thiscall FUN_0041f290(void *this,float *param_1,int param_2,int param_3);
void __fastcall FUN_0041f4a0(float *param_1);
void __fastcall FUN_00420130(int param_1);
void __fastcall FUN_00420190(int param_1);
undefined4 FUN_00420330(HINSTANCE param_1);
undefined4 __fastcall FUN_004206e0(uint param_1);
void __fastcall FUN_00420b50(undefined4 param_1);
bool FUN_00420bd0(void);
void __cdecl FUN_00420c10(HINSTANCE param_1);
LRESULT FUN_00420d40(HWND param_1,uint param_2,WPARAM param_3,LPMIDIHDR param_4);
undefined4 FUN_00420e60(void);
void FUN_00421420(void);
undefined4 FUN_00421900(void);
void __fastcall FUN_00421950(wchar_t *param_1);
void __fastcall FUN_004219d0(int param_1);
void __fastcall FUN_00421a40(int param_1);
undefined4 * __fastcall FUN_00421aa0(undefined4 *param_1);
void __fastcall FUN_00421ad0(HMIDIOUT *param_1);
bool __thiscall FUN_00421af0(void *this,HMIDIOUT param_1);
undefined4 __fastcall FUN_00421b50(HMIDIOUT *param_1);
bool __thiscall FUN_00421b90(void *this,LPMIDIHDR param_1);
bool __thiscall FUN_00421be0(void *this,undefined param_1,undefined param_2,undefined param_3);
undefined4 * __fastcall FUN_00421c30(undefined4 *param_1);
void __fastcall FUN_00421c60(undefined4 *param_1);
undefined4 __thiscall FUN_00421c90(DWORD_PTR this,UINT param_2,LPTIMECALLBACK param_3,DWORD_PTR param_4);
undefined4 __fastcall FUN_00421d10(int param_1);
void fptc_00421d50(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined2 __cdecl FUN_00421d70(undefined4 param_1);
int __cdecl FUN_00421d90(byte **param_1);
undefined4 * __fastcall FUN_00421df0(undefined4 *param_1);
void __fastcall FUN_00421f50(undefined4 *param_1);
undefined4 __thiscall FUN_00421ff0(int this,int param_2,byte *param_3);
void __thiscall FUN_00422070(int this,int param_2);
void __fastcall FUN_004220b0(int param_1);
void __thiscall FUN_00422140(int this,int param_2);
undefined4 __thiscall FUN_00422380(int this,byte *param_2);
void __fastcall FUN_004223c0(int param_1);
undefined4 __fastcall FUN_00422490(DWORD_PTR param_1);
undefined4 __fastcall FUN_004224e0(int param_1);
undefined4 __thiscall FUN_00422560(int this,LPMIDIHDR param_2);
undefined4 __thiscall FUN_00422630(int this,undefined4 param_2);
void __fastcall FUN_00422680(int param_1);
void __thiscall FUN_00422900(int this,undefined4 *param_2);
void __thiscall FUN_00423260(int this,int param_2);
void FUN_00423330(void);
undefined4 __cdecl FUN_0042333b(int param_1);
undefined4 FUN_00423785(void);
undefined4 FUN_00423801(int param_1,undefined4 param_2);
undefined4 FUN_0042386b(void);
undefined4 FUN_0042390a(void);
undefined4 __cdecl FUN_00423b14(int param_1);
undefined4 __thiscall FUN_00423da0(undefined4 this,int param_2);
undefined4 __cdecl FUN_00423ddf(int param_1);
void FUN_00423f3f(void);
void __fastcall FUN_004240f0(int param_1);
void __fastcall FUN_00424127(undefined4 *param_1);
void __thiscall FUN_00424145(void *this,int param_1);
void __thiscall FUN_004241e5(void *this,int param_1);
void __thiscall FUN_00424285(int this,int *param_2,float *param_3);
void __thiscall FUN_004242f3(int this,int param_2);
void FUN_00424375(void);
undefined4 __thiscall FUN_0042464d(int this,byte *param_2);
undefined4 FUN_00424aac(int param_1,byte *param_2);
undefined4 FUN_00424ae4(int param_1);
undefined4 FUN_00424b2f(void);
void FUN_00424b5d(byte *param_1);
undefined4 FUN_00424d38(void);
undefined4 __fastcall FUN_00424d82(int param_1);
void __fastcall FUN_00424e41(int param_1);
undefined4 __fastcall FUN_00424e8f(int param_1);
void __fastcall FUN_00424ead(int param_1);
undefined4 FUN_0042523a(void);
undefined4 * __fastcall FUN_00425318(undefined4 *param_1);
undefined4 __cdecl FUN_004253dd(int param_1);
undefined4 __cdecl FUN_0042545a(int param_1);
void __cdecl FUN_0042564c(int param_1);
undefined4 __cdecl FUN_00425d97(int param_1);
int __fastcall FUN_00425e10(int param_1);
int __fastcall FUN_00426000(int param_1);
void __cdecl FUN_004260d0(int param_1,float *param_2,int param_3,int param_4);
uint __cdecl FUN_00426100(int param_1,float *param_2,int param_3,int param_4,int *param_5);
void __cdecl FUN_00426420(int param_1,float *param_2,int param_3,int param_4);
void __cdecl FUN_00426450(int param_1,float *param_2,int param_3,int param_4);
void __cdecl FUN_00426480(int param_1,float *param_2,int param_3,int param_4);
int __thiscall FUN_004264b0(int this,float *param_2,float *param_3,undefined4 *param_4);
undefined4 __thiscall FUN_00426c40(int this,float *param_2,float *param_3);
undefined4 __thiscall FUN_00426df0(int this,float *param_2,float *param_3);
undefined4 __thiscall FUN_00426fd0(int this,float *param_2,float *param_3);
undefined4 __thiscall FUN_00427190(int this,float *param_2,float *param_3,float *param_4,undefined4 param_5,int param_6);
void __thiscall FUN_00427630(int this,float *param_2);
void __fastcall FUN_00427770(int param_1);
undefined4 __fastcall FUN_00427860(float *param_1);
void __cdecl FUN_00428630(int param_1);
float10 __thiscall FUN_00428680(int this,float *param_2);
float10 __thiscall FUN_00428700(int this,float *param_2);
undefined4 __cdecl FUN_00428780(undefined param_1);
undefined4 __cdecl FUN_004288c0(float *param_1);
void __cdecl FUN_004291b0(int param_1);
undefined4 __cdecl FUN_00429710(int param_1);
void __cdecl FUN_00429820(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_00429930(int param_1);
void __cdecl FUN_00429b00(int param_1);
undefined4 __cdecl FUN_00429b90(int param_1);
void __cdecl FUN_00429bb0(int param_1);
undefined4 __cdecl FUN_00429c50(float *param_1);
undefined4 FUN_0042a0b0(void);
void FUN_0042a0e0(void);
undefined4 __cdecl FUN_0042a140(int *param_1,int param_2);
undefined4 __cdecl FUN_0042a240(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0042a470(int *param_1);
undefined4 __cdecl FUN_0042a510(int *param_1);
undefined4 __cdecl FUN_0042a570(int *param_1);
undefined4 FUN_0042a670(void);
undefined4 __cdecl FUN_0042a680(undefined4 *param_1);
undefined4 __cdecl FUN_0042a840(undefined4 *param_1);
undefined4 __cdecl FUN_0042aa20(int param_1);
void FUN_0042aab0(void);
void __cdecl FUN_0042ab30(char *param_1,char *param_2);
char * __cdecl FUN_0042b0d9(byte *param_1);
undefined4 __cdecl FUN_0042b280(int param_1,int param_2,uint param_3,uint param_4);
int __cdecl FUN_0042b3a6(int param_1,int param_2);
void __cdecl FUN_0042b437(void *param_1);
undefined4 __cdecl FUN_0042b466(int param_1,int param_2);
undefined4 __cdecl FUN_0042b502(int param_1,int param_2);
undefined4 __cdecl FUN_0042b65e(int param_1,undefined4 *param_2);
void __cdecl FUN_0042b7dc(void *param_1);
void __cdecl FUN_0042b809(void **param_1);
void __thiscall FUN_0042bc2d(int this,int param_2,int param_3,int param_4);
void __thiscall FUN_0042bc5b(int this,int param_2,int param_3);
undefined4 __fastcall FUN_0042bc85(int param_1);
void __fastcall FUN_0042c2d4(int param_1);
void __cdecl FUN_0042d0a4(int param_1,int param_2);
undefined4 __cdecl FUN_0042d18f(int param_1,int param_2);
undefined4 __fastcall FUN_0042d292(int param_1);
undefined4 __fastcall FUN_0042d35a(int param_1);
undefined4 FUN_0042d773(void);
void * __fastcall FUN_0042d8a1(void *param_1);
undefined4 __cdecl FUN_0042d98e(int param_1);
void __cdecl FUN_0042e446(int param_1);
undefined4 __cdecl FUN_0042f060(char **param_1);
undefined4 __cdecl FUN_0042f5bc(void **param_1);
void FUN_0042f6c4(void);
void __cdecl FUN_0042f6d0(undefined4 param_1);
void __cdecl FUN_0042f790(undefined4 param_1);
bool __cdecl FUN_0042f800(int param_1);
void __cdecl FUN_0042f8b0(undefined4 *param_1,undefined4 param_2);
bool __cdecl FUN_0042fc80(int param_1);
int * __cdecl FUN_0042fd30(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 __cdecl FUN_0042fee0(int param_1);
undefined4 __cdecl FUN_0042ff70(int param_1);
undefined4 __cdecl FUN_0042ffc0(int param_1);
undefined4 __cdecl FUN_004301f0(int param_1);
undefined4 __cdecl FUN_00430220(void *param_1);
void __thiscall FUN_00430270(void *this,HWND param_1);
undefined4 __fastcall FUN_00430510(undefined4 *param_1);
void __thiscall FUN_004306e0(void *this,int param_1,byte *param_2);
char * __cdecl FUN_004309f0(char *param_1,char *param_2,int *param_3,int param_4);
undefined4 __thiscall FUN_00430a50(void *this,LPSTR param_1);
undefined4 __thiscall FUN_00430e10(int this,byte *param_2);
undefined4 __thiscall FUN_00430ec0(int this,int param_2);
void __fastcall FUN_00430f80(int param_1);
undefined4 __fastcall FUN_00431080(int **param_1);
void __thiscall FUN_004311e0(int this,int param_2);
void __fastcall FUN_00431270(int param_1);
undefined4 lpStartAddress_00431370(void);
undefined4 * __fastcall FUN_00431420(undefined4 *param_1);
undefined4 * __fastcall FUN_00431470(undefined4 *param_1);
void __fastcall FUN_00431660(int param_1);
undefined4 __thiscall FUN_00431920(int this,int param_2,byte *param_3,int param_4,uint param_5);
undefined4 __thiscall FUN_00431a10(int this,int param_2,byte *param_3,undefined4 param_4,uint param_5);
undefined4 __thiscall FUN_00431d70(int this,int param_2,uint param_3,uint param_4,int param_5);
undefined4 __thiscall FUN_00431dc0(int this,int param_2,byte *param_3,int param_4);
void __thiscall FUN_00432030(int this,int param_2);
void __thiscall FUN_004321e0(int this,int param_2);
void __thiscall FUN_00432260(int this,int param_2,undefined4 *param_3);
undefined4 __thiscall FUN_004323a0(int this,int param_2,int param_3);
void __thiscall FUN_00432430(int this,float *param_2,float param_3);
void __thiscall FUN_004324d0(int this,int param_2);
undefined4 __thiscall FUN_00432730(int this,int param_2,int param_3);
undefined4 __thiscall FUN_00432ad0(int this,int param_2);
void FUN_00432c80(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7);
undefined4 __thiscall FUN_00432cc0(int this,int param_2);
undefined4 __thiscall FUN_00432fa0(int this,int param_2);
undefined4 __thiscall FUN_00433150(int this,float *param_2);
undefined4 __thiscall FUN_00433590(int this,float *param_2);
undefined4 __thiscall FUN_00433960(int this,float *param_2);
void FUN_00434af0(void);
void __cdecl FUN_00434b60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,byte *param_5);
void __cdecl thunk_FUN_00434b60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,byte *param_5);
void __cdecl FUN_00434e20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,byte *param_5);
undefined4 __thiscall FUN_00435010(int this,int param_2,byte *param_3);
void __thiscall FUN_00435270(int this,int param_2);
void __thiscall FUN_00435300(int this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_004354c0(int this,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8);
void __thiscall FUN_00435670(int this,int param_2,int param_3,int param_4,int param_5,int param_6);
int __fastcall FUN_0043575d(int param_1);
undefined4 __cdecl FUN_0043579f(int param_1);
undefined4 __cdecl FUN_0043753c(int param_1,int param_2);
void __cdecl FUN_00437672(int param_1,short param_2,undefined2 param_3,int param_4);
void __cdecl FUN_004377a3(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6);
undefined4 __fastcall FUN_004378a2(int param_1);
undefined4 __fastcall FUN_004379e4(int param_1);
undefined4 __fastcall FUN_00437b41(int param_1);
void __fastcall FUN_004381ec(int param_1);
undefined4 __fastcall FUN_00438bc1(int param_1);
void __thiscall FUN_00438ef8(int this,int param_2,int param_3,int param_4,int param_5);
undefined4 __fastcall FUN_00439137(int param_1);
undefined4 __fastcall FUN_00439965(int param_1);
undefined4 __cdecl FUN_00439ad6(int param_1);
undefined4 __cdecl FUN_00439da0(int param_1);
undefined4 __cdecl FUN_00439f88(int param_1);
undefined4 __cdecl FUN_0043a1ec(int param_1);
undefined4 __cdecl FUN_0043a338(int param_1);
undefined4 __cdecl FUN_0043a464(int param_1);
undefined4 __cdecl FUN_0043a659(int param_1);
void FUN_0043a70a(void);
undefined4 __thiscall FUN_0043a736(int this,int param_2,int param_3);
undefined4 * __fastcall FUN_0043a7b0(undefined4 *param_1);
void __fastcall FUN_0043a7d0(int **param_1);
int __thiscall FUN_0043a800(void *this,undefined4 param_1,undefined4 param_2,short param_3,int param_4,ushort param_5);
void __thiscall FUN_0043a890(void *this,short param_1,int param_2,ushort param_3);
void __thiscall FUN_0043a9c0(void *this,undefined4 *param_1,LPSTR param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,int param_9,undefined4 param_10);
undefined4 * __thiscall FUN_0043ac90(void *this,int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
undefined4 * __thiscall FUN_0043ad70(void *this,uint param_1);
void __fastcall FUN_0043ada0(undefined4 *param_1);
int __thiscall FUN_0043aea0(int this,int *param_2,int param_3);
int __thiscall FUN_0043b090(undefined4 this,int *param_2,undefined4 *param_3);
undefined4 __fastcall FUN_0043b140(int param_1);
undefined4 __thiscall FUN_0043b200(int this,uint param_2);
int __thiscall FUN_0043b240(int this,undefined4 param_2,undefined4 param_3);
uint __fastcall FUN_0043b300(int param_1);
uint __fastcall FUN_0043b3b0(int param_1);
undefined4 * __thiscall FUN_0043b420(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * __thiscall FUN_0043b480(void *this,uint param_1);
void __fastcall FUN_0043b4b0(undefined4 *param_1);
undefined4 __fastcall FUN_0043b4d0(int param_1);
int __thiscall FUN_0043b560(int this,int param_2);
int __fastcall FUN_0043b8e0(int param_1);
undefined4 * __fastcall FUN_0043b9b0(undefined4 *param_1);
void __fastcall FUN_0043ba10(void **param_1);
int __thiscall FUN_0043ba60(void *this,LPSTR param_1,undefined4 param_2,uint *param_3);
undefined4 __fastcall FUN_0043bc00(uint **param_1);
undefined4 __fastcall FUN_0043be50(int param_1);
undefined4 __thiscall FUN_0043be70(int this,char param_2);
undefined4 __thiscall FUN_0043c080(int this,undefined4 *param_2,uint param_3,uint *param_4);
undefined4 __fastcall FUN_0043c2c0(int param_1);
void __fastcall FUN_0043c2f0(int param_1);
uint __fastcall FUN_0043c310(undefined4 *param_1);
int __fastcall FUN_0043c380(int *param_1);
undefined4 __thiscall FUN_0043c3c0(void *this,int param_1,uint param_2);
undefined4 * __fastcall FUN_0043c440(undefined4 *param_1);
undefined4 __thiscall FUN_0043c4a0(int this,LPCSTR param_2);
void __fastcall FUN_0043c4f0(int param_1);
bool __fastcall FUN_0043c510(int param_1);
undefined4 __thiscall FUN_0043c610(void *this,uint param_1);
undefined4 __fastcall FUN_0043c650(undefined4 *param_1);
void __fastcall FUN_0043c6e0(undefined4 *param_1);
undefined4 * __thiscall FUN_0043c750(void *this,byte param_1);
void __fastcall FUN_0043c770(undefined4 *param_1);
undefined4 __fastcall FUN_0043c790(int **param_1);
undefined4 __fastcall FUN_0043c8d0(int **param_1);
uint __thiscall FUN_0043c920(int this,byte *param_2);
undefined4 __thiscall FUN_0043c990(int this,uint param_2);
void * __thiscall FUN_0043c9c0(void *this,int param_1,int param_2,int *param_3);
undefined4 __fastcall thunk_FUN_0043c8d0(int **param_1);
undefined4 __thiscall FUN_0043ca90(void *this,LPCSTR param_1);
void __thiscall FUN_0043cb40(void *this,int *param_1);
void __fastcall FUN_0043ce40(undefined4 *param_1);
undefined4 __thiscall FUN_0043ce60(void *this,LPCSTR param_1,char *param_2);
void __fastcall FUN_0043cf20(int param_1);
BOOL __thiscall FUN_0043cf50(int this,LPVOID param_2,DWORD param_3,LPDWORD param_4);
uint __fastcall FUN_0043cfb0(int *param_1);
undefined4 __thiscall FUN_0043d030(int this,LONG param_2,DWORD param_3);
void __fastcall FUN_0043d130(undefined4 *param_1);
void DirectInput8Create(void);
void DirectSoundCreate8(void);
void Direct3DCreate8(void);
float * FUN_0043ebb2(float *param_1,float *param_2,float *param_3);
void FUN_0043ec4b(float *param_1,float *param_2,float *param_3);
void FUN_0043ed2e(undefined4 *param_1,undefined4 *param_2);
void FUN_0043ed9b(undefined4 *param_1,float param_2);
void FUN_0043ee15(float *param_1,float param_2);
void FUN_0043ee90(float *param_1,float param_2);
void FUN_0043ef0c(float *param_1,float *param_2);
void FUN_0043efee(float *param_1,float param_2,float param_3,float param_4,float param_5);
void __cdecl FUN_0043f082(float *param_1,float *param_2,float *param_3);
void FUN_0043f0ce(float *param_1,float *param_2);
float * FUN_0043f175(float *param_1,float *param_2,float *param_3);
float * FUN_0043f245(float *param_1,float *param_2,uint *param_3,float *param_4,float *param_5,float *param_6);
float * FUN_0043f362(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,float *param_7);
void FUN_0043f561(float *param_1,float *param_2,float *param_3,float *param_4);
int FUN_0043f667(int **param_1,LOGFONTA *param_2,undefined4 *param_3);
int FUN_0043f6db(int *param_1,undefined4 *param_2);
int FUN_0043f745(int **param_1,HANDLE param_2,undefined4 *param_3);
int * __cdecl FUN_0043f778(int param_1);
int __fastcall FUN_0043f79c(int param_1);
undefined4 __cdecl FUN_0043f81c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,int *param_6,uint param_7,int param_8);
int FUN_0043fbfe(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,int *param_9,undefined4 param_10);
void FUN_0043fe34(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,int *param_6,uint param_7);
int FUN_0043fe5c(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,uint param_7,int param_8);
int FUN_0043fec2(int *param_1,undefined4 param_2,int *param_3,uint *param_4,uint param_5,int *param_6,int *param_7,undefined4 param_8,undefined4 *param_9);
int FUN_0043ff78(int *param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6,int *param_7,undefined4 param_8);
int FUN_00440095(int *param_1,undefined4 param_2,uint param_3,int *param_4);
int FUN_004401c6(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,int *param_10,int *param_11,uint param_12,undefined4 *param_13,uint *param_14,int **param_15);
void __fastcall FUN_004405d7(undefined4 *param_1);
int __thiscall FUN_00440616(int this,int **param_2,LOGFONTA *param_3);
undefined4 FUN_0044068e(int param_1,undefined4 *param_2);
void FUN_004406d0(int param_1,LPCWSTR param_2,int param_3,int *param_4,uint param_5,undefined4 param_6);
void FUN_004406f6(int param_1,LPCWSTR param_2,int param_3,int *param_4,uint param_5,undefined4 param_6);
undefined4 FUN_0044071c(int *param_1,int *param_2,int **param_3);
undefined4 FUN_00440760(undefined4 *param_1);
void __fastcall FUN_00440781(undefined4 *param_1);
void __fastcall FUN_0044079c(undefined4 *param_1);
int __thiscall FUN_004407dc(int this,int *param_2);
undefined4 FUN_00440a89(int param_1);
undefined4 FUN_00440ac6(int param_1);
undefined4 FUN_00440af1(int *param_1,int *param_2,int **param_3);
undefined4 FUN_00440b35(undefined4 *param_1);
void FUN_00440b56(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,float param_6,undefined4 *param_7,undefined4 param_8);
void __fastcall FUN_00440eec(undefined4 *param_1);
void __fastcall FUN_00440f0a(undefined4 *param_1);
void __fastcall FUN_00440f14(int *param_1);
void __fastcall FUN_00440f32(void **param_1);
int * __cdecl FUN_00440f54(uint param_1,uint param_2,int param_3);
undefined4 __fastcall FUN_004411f5(int **param_1);
undefined4 __fastcall FUN_004415ab(int **param_1);
undefined4 __fastcall FUN_00441a82(int *param_1);
undefined4 FUN_00441c03(void);
undefined4 __fastcall FUN_00441c09(int *param_1);
undefined4 __fastcall FUN_00441d67(int *param_1);
undefined4 __fastcall FUN_00441e83(int *param_1);
undefined4 __fastcall FUN_00441fd3(int *param_1);
undefined4 __fastcall FUN_004420f7(int *param_1);
undefined4 __fastcall FUN_00442246(int *param_1);
undefined4 __fastcall FUN_00442399(int *param_1);
undefined4 __fastcall FUN_004424d8(int *param_1);
undefined4 __fastcall FUN_00442573(int *param_1);
undefined4 __fastcall FUN_004426bf(int *param_1);
undefined4 __fastcall FUN_004427e0(int *param_1);
undefined4 __fastcall FUN_0044292c(int *param_1);
void FUN_00442a6b(void);
void FUN_00442a8e(void);
undefined4 __fastcall FUN_00442a9e(int *param_1);
undefined4 __fastcall FUN_00442bd0(int **param_1);
undefined4 __fastcall FUN_00442c72(int **param_1);
undefined4 __fastcall FUN_00442de7(int **param_1);
undefined4 __fastcall FUN_00442f7d(int **param_1);
undefined4 __fastcall FUN_00443312(int **param_1);
uint * __cdecl FUN_004436bb(int param_1);
undefined4 __fastcall FUN_0044378c(int **param_1);
undefined4 __fastcall FUN_00443acd(int **param_1);
undefined4 __thiscall FUN_0044411a(void *this,int param_1,undefined4 param_2,int *param_3);
void __fastcall FUN_0044422c(undefined4 *param_1);
void __fastcall FUN_00444245(int param_1);
undefined4 __thiscall FUN_0044429e(void *this,uint *param_1,uint param_2);
void FUN_004448d9(int *param_1);
void FUN_00444938(void);
undefined4 FUN_00444939(undefined4 param_1,undefined4 param_2);
undefined4 __thiscall FUN_00444b8e(void *this,uint *param_1,uint param_2);
uint __thiscall FUN_00445006(void *this,uint *param_1,uint param_2);
undefined4 FUN_004452cb(int param_1,uint param_2);
undefined4 __thiscall FUN_004457e1(void *this,int *param_1,uint param_2);
undefined4 __thiscall FUN_00445af4(void *this,short *param_1,uint param_2);
undefined4 __thiscall FUN_00445b24(void *this,uint *param_1,uint param_2,undefined4 *param_3);
void __fastcall FUN_00445c7e(undefined4 *param_1);
void __fastcall FUN_00445cbd(int param_1);
void __fastcall FUN_00445d88(int *param_1);
int __thiscall FUN_00445d8b(int this,int **param_2);
undefined4 __fastcall FUN_00445f45(int param_1);
undefined4 __fastcall FUN_00445f87(int param_1);
void __fastcall FUN_00445fb7(int *param_1);
int __cdecl FUN_00445fcc(int **param_1,void **param_2);
int __thiscall FUN_00446048(int this,int **param_2,LPCWSTR param_3,int param_4,int *param_5,uint param_6,undefined4 param_7,uint param_8);
void __fastcall FUN_004465e2(undefined4 *param_1);
void __thiscall FUN_004465ec(void *this,uint param_1);
void __thiscall FUN_00446642(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004466ab(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00446741(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004467b9(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00446837(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004468a1(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00446940(void *this,float *param_1,float *param_2);
void FUN_0044696c(void);
void FUN_0044698f(void);
undefined4 * __thiscall FUN_0044699f(void *this,undefined4 *param_1,uint param_2,int param_3);
undefined4 * __thiscall FUN_00446b88(void *this,byte param_1);
void __thiscall FUN_00446ba4(int this,uint param_2);
void __thiscall FUN_00446c14(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00446cd5(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00446dce(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00446ea5(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00446f7c(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447053(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447146(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_0044723f(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447310(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447392(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_0044748b(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447562(int this,uint param_2,float *param_3,void *param_4);
void __thiscall FUN_0044765f(int this,uint param_2,float *param_3,void *param_4);
void __thiscall FUN_00447719(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_004477b7(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447887(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_0044794f(int this,uint param_2,uint param_3,float *param_4);
void __thiscall FUN_004479ff(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447ade(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447bc5(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447cd6(int this,uint param_2,uint param_3,float *param_4);
void __thiscall FUN_00447d87(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00447e73(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00447eff(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00447fa1(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448039(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004480de(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448180(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448230(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004482df(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448381(int this,int param_2,int param_3,undefined4 *param_4);
void __thiscall FUN_004483f3(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_004484a5(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448544(int this,int param_2,int param_3,undefined4 *param_4);
void __thiscall FUN_0044862f(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_0044869d(int this,int param_2,int param_3,float *param_4);
void __thiscall FUN_00448726(int this,int param_2,int param_3,float *param_4);
undefined4 * FUN_004487af(void);
undefined4 __fastcall FUN_00448880(int param_1);
int __thiscall FUN_00448a73(int this,uint param_2,uint param_3,uint param_4);
undefined4 * FUN_00448e2b(void);
undefined4 __fastcall FUN_00448f42(int param_1);
int __thiscall FUN_0044926f(int this,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00449516(int this,int param_2,int param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_00449610(void *this,byte param_1);
void __fastcall FUN_0044962c(undefined4 *param_1);
void FUN_00449631(void);
void FUN_00449676(void);
undefined4 * FUN_004496ca(void);
void * __thiscall FUN_00449cf6(void *this,byte param_1);
void * __thiscall FUN_00449d12(void *this,byte param_1);
void thunk_FUN_00449631(void);
void * __thiscall FUN_00449d33(void *this,byte param_1);
void thunk_FUN_00449676(void);
void __cdecl FUN_00449d54(int *param_1,int param_2,int param_3);
void __cdecl thunk_FUN_0044fe4e(int param_1);
void FUN_00449e19(void);
int __cdecl FUN_00449f98(int *param_1);
undefined4 __cdecl FUN_0044a032(int *param_1);
int __cdecl FUN_0044a0d3(int *param_1,char param_2);
uint FUN_0044a136(void);
int * __cdecl FUN_0044a1da(int *param_1,undefined4 param_2,undefined4 param_3);
uint __cdecl FUN_0044a25e(int *param_1);
undefined4 FUN_0044a31f(void);
uint __thiscall FUN_0044a3ad(undefined param_1,undefined param_2);
uint FUN_0044a6a8(void);
undefined4 __cdecl FUN_0044a991(int *param_1);
undefined4 __cdecl FUN_0044abcd(int *param_1);
uint FUN_0044ad47(void);
uint FUN_0044ae9e(void);
uint FUN_0044b132(void);
uint __cdecl FUN_0044b37c(int *param_1);
uint __cdecl FUN_0044b45b(int *param_1);
undefined4 __cdecl FUN_0044b4f7(int *param_1);
uint FUN_0044b5ce(void);
uint __cdecl FUN_0044b85a(int *param_1);
void __cdecl FUN_0044b9c7(int param_1);
void __cdecl FUN_0044b9f1(int param_1);
void __cdecl FUN_0044ba6e(int *param_1);
void __cdecl FUN_0044bb62(undefined **param_1);
void __thiscall FUN_0044bbae(int this,int param_2,undefined4 *param_3);
void FUN_0044bc35(int *param_1);
void __cdecl FUN_0044bc40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0044bc5a(int *param_1,undefined4 param_2);
void __cdecl FUN_0044bc7d(int param_1,undefined4 param_2);
void __cdecl FUN_0044bc92(int *param_1,undefined4 *param_2);
void __cdecl FUN_0044bcb7(int param_1,undefined4 *param_2);
int * __cdecl FUN_0044bcdc(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0044bddf(int *param_1,uint *param_2);
void __cdecl FUN_0044bf53(int *param_1,int *param_2);
void __thiscall FUN_0044bf73(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0044c31b(int *param_1,undefined4 *param_2);
void __cdecl FUN_0044c368(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0044c48b(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint __cdecl FUN_0044c50c(int param_1,int param_2,uint param_3);
undefined4 __cdecl FUN_0044c526(int param_1,int param_2);
uint __cdecl FUN_0044c53c(int param_1,uint param_2);
undefined4 __cdecl FUN_0044c552(int param_1,int param_2,double *param_3);
undefined4 __cdecl FUN_0044c57b(int param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_0044c5a6(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9);
undefined4 __cdecl FUN_0044c677(int param_1,int param_2,undefined4 *param_3,uint *param_4);
undefined4 __cdecl FUN_0044c6aa(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5);
void __cdecl FUN_0044c711(int param_1);
void __cdecl FUN_0044c71a(int param_1);
undefined4 __cdecl FUN_0044c733(int param_1);
void __cdecl FUN_0044c74c(int param_1,byte param_2,int param_3);
void __cdecl FUN_0044c799(int *param_1,undefined *param_2);
void __cdecl FUN_0044c858(int param_1);
void __cdecl FUN_0044c861(int param_1,double param_2,double param_3);
void __cdecl FUN_0044c897(int param_1);
void __cdecl FUN_0044c8a0(int param_1,int *param_2);
void __cdecl FUN_0044c98b(int *param_1,int param_2);
int ** __cdecl FUN_0044ca9a(int *param_1,int **param_2,int **param_3);
void __cdecl FUN_0044cc15(int *param_1,undefined *param_2);
void __cdecl FUN_0044cc59(uint *param_1,int param_2,uint param_3,uint param_4);
void __cdecl FUN_0044ce90(int *param_1,byte *param_2,int param_3,byte *param_4,byte param_5);
void __cdecl FUN_0044d202(uint *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_0044d409(int *param_1,int param_2,int param_3);
void __cdecl FUN_0044d75c(int *param_1,byte *param_2,int param_3,int param_4);
void __cdecl FUN_0044d869(int *param_1);
void __cdecl FUN_0044db68(int *param_1);
void __cdecl FUN_0044dc7d(int *param_1);
void __cdecl FUN_0044de19(int param_1,int param_2,double param_3);
void __cdecl FUN_0044de34(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,undefined param_7,undefined param_8,undefined param_9);
void __cdecl FUN_0044ded6(int param_1,int param_2,undefined4 param_3,undefined2 param_4);
void __cdecl FUN_0044defa(int param_1,int param_2,undefined param_3);
void __cdecl FUN_0044df15(int param_1,int param_2,undefined param_3);
void __cdecl FUN_0044df4e(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
void __cdecl FUN_0044df95(int *param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0044dfbd(int param_1,undefined4 param_2,undefined4 param_3);
int __cdecl FUN_0044dffc(int param_1,uint param_2,uint param_3);
undefined4 * __cdecl FUN_0044e044(int *param_1,int param_2,int param_3);
void __cdecl thunk_FUN_004509fa(int param_1,void *param_2);
void __cdecl FUN_0044e09c(int param_1);
void __cdecl FUN_0044e0b4(int param_1,byte *param_2,uint param_3);
void __cdecl FUN_0044e0f3(undefined4 *param_1);
void __cdecl FUN_0044e101(undefined4 param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_0044e10c(int param_1);
void __thiscall FUN_0044e12e(uint this,int param_2,undefined2 *param_3);
void __cdecl FUN_0044e197(ushort *param_1,undefined4 *param_2);
void __cdecl FUN_0044e1bd(int param_1);
void __cdecl FUN_0044e1ef(int param_1);
void __cdecl FUN_0044e224(ushort *param_1);
void __cdecl FUN_0044e254(uint *param_1);
void __fastcall FUN_0044e2a1(float *param_1);
void __cdecl FUN_0044e340(undefined4 param_1,undefined4 param_2,int param_3);
void __fastcall FUN_0044e3cb(undefined4 param_1,float *param_2);
void __cdecl FUN_0044e4fd(ushort param_1);
void __cdecl FUN_0044e55e(int param_1,undefined2 *param_2,float param_3,float param_4);
void __cdecl FUN_0044e9f5(ushort *param_1,undefined4 *param_2);
void __cdecl FUN_0044eade(int param_1,undefined4 *param_2);
void __cdecl FUN_0044eb2c(byte *param_1,undefined4 *param_2);
void __thiscall FUN_0044ec2c(uint this,int param_2,undefined2 *param_3);
void __cdecl FUN_0044ec5e(int param_1,ushort *param_2);
void __cdecl FUN_0044ecb7(int param_1,byte *param_2);
int __cdecl FUN_0044ee0d(int param_1,int param_2);
int __cdecl FUN_0044ee1d(int param_1,int param_2);
void __cdecl FUN_0044ee35(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __cdecl FUN_0044ee7c(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_0044ee9e(undefined4 *param_1,uint param_2);
uint FUN_0044eeb9(void);
void FUN_0044eeea(void);
uint FUN_0044f0a5(void);
void FUN_0044f21b(void);
void __cdecl FUN_0044f2ad(int param_1);
void __cdecl FUN_0044f37a(int *param_1);
void __cdecl FUN_0044f3c2(int param_1);
void __fastcall FUN_0044f403(undefined4 param_1,undefined4 param_2);
int __thiscall FUN_0044f418(undefined4 this,int *param_2,int param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_0044f514(undefined4 this,int *param_2,int param_3,uint param_4);
int __cdecl FUN_0044f5a2(int *param_1,int param_2,uint param_3,uint param_4);
int __cdecl FUN_0044f634(int *param_1,int param_2,int param_3,uint param_4);
void __thiscall FUN_0044f6d2(void *this,int *param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_0044f733(void *this,int *param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl FUN_0044f794(int *param_1);
void __cdecl FUN_0044f913(undefined4 param_1,char param_2);
void __cdecl FUN_0044f99b(undefined4 param_1,char param_2);
int __cdecl FUN_0044fa26(int *param_1,int *param_2,uint param_3,uint param_4,char param_5);
int __cdecl FUN_0044fb44(int *param_1,int *param_2,uint param_3,uint param_4,char param_5);
void __cdecl FUN_0044fc67(int *param_1,int param_2);
void __cdecl FUN_0044fd48(int *param_1);
void __cdecl FUN_0044fd78(int *param_1);
void __cdecl FUN_0044fe2c(int param_1);
void __cdecl FUN_0044fe4e(int param_1);
void __cdecl FUN_0044fe69(int param_1);
void __cdecl FUN_0044fe85(int param_1);
uint __fastcall FUN_0044fea1(undefined4 param_1,int param_2);
void __cdecl FUN_0044ff12(int *param_1);
void FUN_00450101(void);
void FUN_00450170(void);
void __cdecl FUN_0045046b(int param_1);
undefined4 __cdecl FUN_0045049b(int param_1);
undefined4 __cdecl FUN_004504da(int param_1);
undefined4 __cdecl FUN_00450518(int param_1,int param_2,char *param_3,int param_4);
void __cdecl FUN_004505fd(int param_1,char *param_2,int param_3);
byte * __cdecl FUN_00450614(byte **param_1,byte *param_2);
undefined4 * __cdecl FUN_00450975(int param_1);
void __cdecl FUN_004509b7(void *param_1);
void * __cdecl FUN_004509c4(int *param_1,size_t param_2);
void __cdecl FUN_004509fa(int param_1,void *param_2);
undefined4 * __cdecl FUN_00450a13(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4);
undefined4 * __cdecl FUN_00450a36(undefined4 param_1,undefined4 *param_2,undefined param_3,uint param_4);
undefined4 __cdecl FUN_00450a69(undefined *param_1);
int __cdecl FUN_00450a8c(byte *param_1);
void __cdecl FUN_00450a9f(int *param_1,byte *param_2,uint param_3);
bool __cdecl FUN_00450ac3(int *param_1);
void __cdecl FUN_00450b21(int *param_1,byte *param_2);
void __cdecl FUN_00450b83(int param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_00450d97(uint *param_1,int *param_2,int param_3);
void __cdecl FUN_00451060(int param_1,int param_2,byte *param_3,byte *param_4,int param_5);
void __cdecl FUN_004511d9(int *param_1);
undefined4 __cdecl FUN_00451375(int *param_1,uint param_2);
void __cdecl FUN_00451401(int *param_1,uint *param_2,int param_3);
void __cdecl FUN_004515f8(int *param_1,int param_2,uint param_3);
void __cdecl FUN_00451721(int *param_1,int param_2,uint param_3);
void __cdecl FUN_0045176b(int *param_1,int param_2,uint param_3);
void __cdecl FUN_0045186b(int *param_1,int param_2,uint param_3);
void __cdecl FUN_0045195a(int *param_1,int param_2,uint param_3);
void __cdecl FUN_00451af3(int *param_1,int param_2,uint param_3);
void __thiscall FUN_00451b3d(undefined4 this,int *param_2);
uint __cdecl FUN_00451d62(uint param_1,byte *param_2,uint param_3);
void __cdecl FUN_00451e6b(undefined4 param_1,size_t param_2);
void __cdecl FUN_00451e76(undefined4 param_1,void *param_2);
undefined4 __cdecl FUN_00451e81(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_00451e86(int *param_1);
void FUN_00451e9a(void);
void FUN_00451f42(void);
void FUN_00452073(void);
void FUN_00452147(void);
void __cdecl FUN_004521dd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00452245(int param_1,undefined4 param_2,uint *param_3,uint param_4);
void __cdecl FUN_004523d8(int *param_1,char param_2);
void __fastcall FUN_004524ab(int param_1);
undefined4 __cdecl FUN_004524fa(int param_1,int param_2);
undefined4 __cdecl FUN_004526d4(int param_1);
int __cdecl FUN_00452873(uint param_1,int param_2);
uint FUN_004529d9(void);
void __cdecl FUN_00452fd4(int param_1);
void __cdecl FUN_0045300f(int param_1,char param_2);
void __cdecl FUN_00453107(int param_1,int param_2,int *param_3);
undefined4 __cdecl FUN_004532aa(byte **param_1,byte *param_2,byte *param_3,int param_4);
uint __cdecl FUN_00453394(byte **param_1,int *param_2,byte *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_0045347a(int param_1);
uint __cdecl FUN_004534d8(int param_1,int param_2);
void __cdecl FUN_004538a5(int *param_1);
void __cdecl FUN_004539d4(int param_1);
undefined4 FUN_00453a0e(void);
uint __cdecl FUN_00453a69(int *param_1,int param_2);
uint __cdecl FUN_00453c66(uint param_1,int *param_2);
uint __cdecl FUN_00453e93(int param_1,int param_2);
uint __cdecl FUN_00453f75(int *param_1,int *param_2);
void __cdecl FUN_004542e3(int *param_1);
void __cdecl FUN_00454586(int param_1);
void __cdecl FUN_004545e7(undefined *param_1);
void __cdecl FUN_0045479e(undefined4 *param_1);
void __cdecl FUN_00454812(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_00454877(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_00454907(int param_1);
void __cdecl FUN_00454a39(int param_1,char param_2);
void __cdecl FUN_00454ad6(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_00454baf(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_00454c8e(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_00454ce5(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_00454d4f(int param_1,int param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_00454df2(int param_1,int param_2,byte **param_3,int *param_4);
void __cdecl FUN_00454ef9(int *param_1);
void FUN_004550ba(void);
void __cdecl FUN_0045516a(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_004551d4(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_004551f7(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_00455329(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5);
void __cdecl FUN_00455466(int param_1,int *param_2,int param_3,uint **param_4,int param_5);
void __cdecl FUN_00455684(int *param_1);
void FUN_004557a5(void);
void __cdecl FUN_0045586a(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_00455910(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6);
void __cdecl FUN_00455941(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_00455a97(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_00455c7d(int param_1);
void __cdecl FUN_00455cf2(int param_1,int param_2,undefined4 param_3,int param_4);
int * __fastcall FUN_00455d5e(int param_1);
int * __fastcall FUN_00455d87(int param_1);
void FUN_00455daa(void);
int __cdecl FUN_004560e2(undefined4 param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_004561fc(int param_1);
void __cdecl FUN_00456334(int param_1);
void __cdecl FUN_004563c1(int param_1,int param_2,int param_3);
void __cdecl FUN_00456541(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7);
void __cdecl FUN_0045665b(int param_1,int param_2,int param_3);
void __cdecl FUN_0045672b(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_004567d4(int param_1,int param_2,int *param_3,int param_4);
void FUN_00456a42(void);
void __cdecl FUN_00456af4(int *param_1,char param_2);
void __cdecl FUN_00456c05(int *param_1);
int __cdecl FUN_00456d18(int *param_1,int *param_2);
int __thiscall FUN_00456de3(int this,undefined4 param_2,undefined4 param_3,int param_4);
int __fastcall FUN_00456dfc(int param_1);
void FUN_00456e0f(void);
void FUN_00456f2c(void);
int * __fastcall FUN_0045704d(int param_1);
void FUN_004570af(void);
void __cdecl FUN_00457108(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_00457190(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_0045721d(int param_1,int param_2,char **param_3,uint param_4);
void __cdecl FUN_00457308(uint param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_00457407(int param_1,int param_2,short **param_3,char **param_4);
void FUN_0045758b(void);
void __cdecl FUN_004575c1(int *param_1);
void __cdecl FUN_0045769d(int *param_1);
void __cdecl FUN_00457726(int *param_1,int param_2,int *param_3);
int * __cdecl FUN_00457791(int param_1,int param_2,int param_3);
void __cdecl FUN_0045781c(uint *param_1,byte **param_2,byte *param_3);
undefined4 __cdecl FUN_00458135(int *param_1,int param_2);
uint __cdecl FUN_00458169(uint param_1,byte *param_2,uint param_3);
void __cdecl FUN_00458292(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_004585a7(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_00458765(int param_1,int param_2,short *param_3,int *param_4,int param_5);
void __cdecl FUN_004587a2(int param_1,int param_2,undefined8 *param_3,int param_4,int param_5);
void __cdecl FUN_004587ee(int param_1,int param_2,undefined8 *param_3,int *param_4,int param_5);
void __cdecl FUN_0045883a(int param_1,int param_2,short *param_3,int param_4,int param_5);
void __cdecl FUN_00458c1b(undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_00458c4f(byte *param_1,byte **param_2,int param_3);
void __cdecl FUN_004591a5(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_004591b6(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,int param_7,uint *param_8,uint *param_9);
int __cdecl FUN_0045953b(uint *param_1,int *param_2,int *param_3,int param_4,int param_5);
int __cdecl FUN_004595ba(uint param_1,uint param_2,uint *param_3,int *param_4,int *param_5,int *param_6,int *param_7,int param_8,int param_9);
undefined4 __cdecl FUN_004596bd(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int __cdecl FUN_004596ec(undefined *param_1,int param_2,int param_3);
void __cdecl FUN_00459801(short *param_1,short *param_2,int *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_00459cee(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_0045a479(short *param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_0045a822(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,int *param_4,int param_5,int param_6);
uint __cdecl FUN_0045b5f5(uint param_1,uint param_2,int param_3,int param_4,byte *param_5,byte **param_6);
void __onexit_lk(void);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_0045b979(void);
int __cdecl _atexit(void *param_1);
void FUN_0045b991(void);
void FUN_0045b9c9(void);
undefined4 __cdecl FUN_0045b9e0(char *param_1,byte *param_2,int **param_3);
void __fastcall @__security_check_cookie@4(int param_1);
undefined8 __ftol2(void);
void __cdecl _free(void *_Memory);
void FUN_0045bb40(void);
void * __cdecl __heap_alloc(size_t _Size);
void FUN_0045bbd0(void);
void * __cdecl __nh_malloc(size_t _Size,int _NhFlag);
void * __cdecl _malloc(size_t _Size);
undefined8 FUN_0045bc20(void);
void __fastcall FUN_0045bc34(undefined4 param_1,undefined param_2,undefined param_3);
undefined8 __fastcall FUN_0045bc3d(undefined4 param_1,uint param_2,int param_3,uint param_4);
undefined8 FID_conflict:__CIsin_default(void);
void __fastcall FUN_0045bcf4(undefined4 param_1,undefined param_2,undefined param_3);
undefined8 __fastcall start(undefined4 param_1,uint param_2,int param_3,undefined4 param_4);
undefined8 FID_conflict:__CIcos_default(void);
void __fastcall FUN_0045bda4(undefined4 param_1,undefined param_2,undefined param_3);
undefined8 __fastcall start(undefined4 param_1,uint param_2,int param_3,undefined4 param_4);
void __cdecl FUN_0045be40(uint param_1,int param_2,uint param_3,int param_4);
void __cdecl FUN_0045be60(uint param_1,int param_2,uint param_3,int param_4);
long __cdecl _atol(char *_Str);
long __cdecl _atol(char *_Str);
void __cdecl _free(void *_Memory);
void * __cdecl operator_new(uint param_1);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl ___CxxFrameHandler(int *param_1,int param_2,EHRegistrationNode *param_3,_CONTEXT *param_4);
undefined4 __cdecl FUN_0045c015(int *param_1,EHRegistrationNode *param_2,EHRegistrationNode *param_3);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * __cdecl FUN_0045c100(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl FUN_0045c128(int param_1);
void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1);
undefined4 __cdecl FUN_0045c195(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __cdecl FUN_0045c1e6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,int param_2);
int __cdecl __abnormal_termination(void);
void __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
undefined4 __cdecl FUN_0045c386(char *param_1,byte *param_2);
void FUN_0045c3e0(void);
double __cdecl _fabs(double _X);
undefined8 FID_conflict:__CItan_default(void);
void __fastcall FUN_0045c4c4(undefined4 param_1,undefined param_2,undefined param_3);
undefined8 __fastcall start(undefined4 param_1,uint param_2,int param_3,undefined4 param_4);
int __cdecl __fclose_lk(FILE *param_1);
int __cdecl _fclose(FILE *_File);
void FUN_0045c5f7(void);
uint __cdecl __fread_lk(undefined *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File);
void FUN_0045c72a(void);
int __cdecl __ftell_lk(char **param_1);
long __cdecl _ftell(FILE *_File);
void FUN_0045c8cd(void);
int __cdecl __fseek_lk(FILE *param_1,int param_2,int param_3);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
void FUN_0045c9a5(void);
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag);
void FUN_0045ca01(void);
void __cdecl FUN_0045ca0b(char *param_1,char *param_2);
char * __cdecl _strrchr(char *_Str,int _Ch);
uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
void FUN_0045cb96(void);
size_t __cdecl _strlen(char *_Str);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
int __cdecl FID_conflict:_fwprintf(FILE *_File,wchar_t *_Format,...);
void FUN_0045d361(void);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4);
char * __cdecl FUN_0045d414(char *param_1);
char * __cdecl _strcpy(char *_Dest,char *_Source);
char * __cdecl _strcat(char *_Dest,char *_Source);
undefined4 __cdecl FUN_0045d588(LPCSTR param_1);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
void __cdecl FUN_0045d5f9(LPCSTR param_1);
int __cdecl _rand(void);
void __chkstk(void);
void __cdecl __amsg_exit(int param_1);
void __cdecl _fast_error_exit(DWORD param_1);
UINT entry(void);
void FID_conflict:__CIacos(void);
float10 __cdecl start(uint param_1,uint param_2);
int __cdecl FUN_0045d9eb(int param_1,uint param_2);
int __cdecl _isdigit(int _C);
int __cdecl _isspace(int _C);
float10 __cdecl FUN_0045db00(double param_1,undefined2 param_2);
longlong __ftol(void);
void __cdecl _longjmp(int *_Buf,int _Value);
undefined4 __cdecl __setjmp3(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_0045dd90(void);
void FUN_0045dded(undefined4 param_1,undefined4 param_2,uint param_3);
void __cdecl ___crtExitProcess(int param_1);
void FUN_0045e00a(void);
void FUN_0045e013(void);
int FUN_0045e01c(void);
void __cdecl FUN_0045e081(UINT param_1,int param_2,int param_3);
void __cdecl FUN_0045e154(UINT param_1);
void __cdecl __exit(int _Code);
void FUN_0045e176(void);
void * __cdecl _calloc(size_t _Count,size_t _Size);
void FUN_0045e23e(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_0045e3b7(void);
size_t __cdecl __msize(void *_Memory);
void FUN_0045e469(void);
void __cdecl __SEH_prolog(undefined4 param_1,int param_2);
void __SEH_epilog(void);
void __cdecl __forcdecpt(char *_Buf);
void __cdecl __fassign(int flag,char *argument,char *number);
void __shift(void);
void __cdecl __cftoe2(int param_1,int param_2,char param_3);
void __cdecl FUN_0045e66a(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined * __cdecl FUN_0045e6de(undefined *param_1,size_t param_2,char param_3);
void __cdecl FUN_0045e77a(undefined4 *param_1,undefined *param_2,size_t param_3);
void __cdecl FUN_0045e7e2(undefined4 *param_1,undefined *param_2,size_t param_3,int param_4);
errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps);
void FUN_0045e8d3(void);
undefined4 __ms_p5_test_fdiv(void);
void __ms_p5_mp_test_fdiv(void);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __fastcall _write_char(FILE *param_1);
void __cdecl _write_multi_char(undefined4 param_1,int param_2,FILE *param_3);
void __cdecl _write_string(int param_1);
void __cdecl FUN_0045eaf5(FILE *param_1,byte *param_2,int **param_3);
void FUN_0045f28a(void);
void FUN_0045f2e0(int param_1);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_0045f533(int param_1);
undefined4 __cdecl FUN_0045f548(int param_1);
void __cdecl __lock(int _File);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
LPVOID __cdecl ___sbh_find_block(int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
int __cdecl __callnewh(size_t _Size);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
float10 __fastcall FUN_00460310(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
float10 __fastcall __startOneArgErrorHandling(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __load_CW(undefined4 param_1);
undefined4 __convertTOStoQNaN(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint __cdecl FUN_004603f8(undefined4 param_1,uint param_2);
undefined1 (*) [10] __cdecl FUN_0046056c(undefined1 (*__return_storage_ptr__) [10]);
void __fastcall __cintrindisp2(undefined4 param_1,int param_2);
void __fastcall __cintrindisp1(undefined4 param_1,int param_2);
void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4);
void FUN_00460673(void);
void cintrinexit(void);
void __cdecl __ctrandisp1(uint param_1,int param_2);
float10 __cdecl __fload(uint param_1,int param_2);
undefined4 __cdecl __fprem_common(undefined4 param_1,uint param_2,ushort param_3);
float10 __adj_fprem(void);
uint __thiscall FUN_004615bb(undefined4 this,int param_2,uint param_3,uint param_4);
void __cdecl FUN_00461632(void *param_1);
int FUN_004616fc(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_004617f0(void);
void FUN_004617f9(void);
_ptiddata __cdecl __getptd(void);
undefined4 FUN_00461888(void);
int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_00461a17(void);
void __cdecl ___DestructExceptionObject(int param_1);
int __fastcall FUN_00461a77(int *param_1);
undefined4 __thiscall FUN_00461a94(undefined4 this,void *param_2,int param_3,void *param_4,undefined4 param_5,int param_6,int param_7);
void FUN_00461bd7(void);
void __cdecl BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,_s_CatchableType *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FUN_00461e1e(int *param_1,undefined4 param_2,EHRegistrationNode *param_3,_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,_s_FuncInfo *param_7,_s_HandlerType *param_8);
void __cdecl FUN_00461ede(int *param_1,int param_2,EHRegistrationNode *param_3,_CONTEXT *param_4,_s_FuncInfo *param_5,char param_6,_s_FuncInfo *param_7,_s_HandlerType *param_8);
undefined4 __cdecl ___InternalCxxFrameHandler(int *param_1,int param_2,EHRegistrationNode *param_3,_CONTEXT *param_4,_s_FuncInfo *param_5,_s_FuncInfo *param_6,_s_HandlerType *param_7,char param_8);
void FUN_00462162(void);
void __cdecl _inconsistency(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
void __cdecl __raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,undefined8 *param_6);
bool __cdecl FUN_004624c1(uint param_1,double *param_2,uint param_3);
errno_t __cdecl FID_conflict:__set_errno_from_matherr(int _Value);
int __cdecl __errcode(byte param_1);
float10 __cdecl __umatherr(int param_1,int param_2);
float10 __cdecl __handle_qnan1(int param_1,double param_2);
void __cdecl FUN_00462829(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5);
float10 __cdecl __set_exp(ulonglong param_1,short param_2);
undefined4 __cdecl __sptype(int param_1,uint param_2);
float10 __cdecl FUN_0046296c(uint param_1,uint param_2,int *param_3);
int FUN_00462a26(void);
int FUN_00462a33(void);
int __ctrlfp(void);
void FUN_00462a65(void);
undefined4 __cdecl FUN_00462abe(uint param_1);
int __cdecl __close(int _FileHandle);
void FUN_00462bb8(void);
void __cdecl __freebuf(FILE *_File);
int __cdecl __flush(FILE *_File);
int __cdecl __fflush_lk(FILE *param_1);
void __cdecl __lock_file(FILE *_File);
void __cdecl FID_conflict:__lock_file2(int _Index,void *_File);
void __cdecl __unlock_file(FILE *_File);
void __cdecl FID_conflict:__lock_file2(int _Index,void *_File);
int __cdecl __filbuf(FILE *_File);
int __cdecl FUN_00462fb2(uint param_1,char *param_2,char *param_3);
int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount);
void FUN_00463206(void);
int * FUN_0046322a(void);
ulong * FUN_00463233(void);
void __cdecl __dosmaperr(ulong param_1);
undefined4 FUN_004632af(void);
DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3);
long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin);
void FUN_004635a8(void);
FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File);
FILE * __cdecl __getstream(void);
void FUN_0046384d(void);
void __cdecl FUN_00463856(uint param_1,char *param_2,uint param_3);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_00463a82(void);
int FUN_00463aa6(int **param_1);
int __cdecl __stbuf(FILE *_File);
void __cdecl __ftbuf(int _Flag,FILE *_File);
uint __cdecl __mbctoupper(uint _Ch);
void __cdecl FUN_00463c43(DWORD param_1);
void __cdecl __FF_MSGBANNER(void);
int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
byte * FUN_00463f57(void);
int __cdecl __setenvp(void);
void __thiscall FUN_00464087(void *this,byte **param_1,int *param_2);
undefined4 __fastcall FUN_004641f3(int param_1);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void FUN_004643b7(void);
void __cdecl FUN_0046443f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4);
undefined4 _has_osfxsr_set(void);
undefined4 FUN_00464708(void);
void __rt_probe_read4@4(void);
void __CIpow_pentium4(void);
float10 __cdecl __pow_pentium4(double param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_004655d7(double param_1);
undefined4 __cdecl __powhlp(int param_1,int param_2,double param_3,double *param_4);
void __seh_longjmp_unwind@4(int param_1);
uint __thiscall FUN_00465884(uint this,uint param_2,uint param_3);
int __cdecl _tolower(int _C);
undefined4 __cdecl __ZeroTail(int param_1,int param_2);
void __cdecl __IncMan(int param_1,int param_2);
undefined4 __cdecl __RoundMan(int param_1,int param_2);
void __cdecl __CopyMan(int param_1,undefined4 *param_2);
undefined4 __cdecl __IsZeroMan(int param_1);
void __cdecl __ShrMan(int param_1,int param_2);
undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3);
INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
void __cdecl FUN_00465c92(_CRT_DOUBLE *param_1,byte *param_2);
void __cdecl FUN_00465cd5(_CRT_DOUBLE *param_1,byte *param_2);
void __cdecl FUN_00465d18(char *param_1,int param_2,int param_3);
void __cdecl ___dtold(uint *param_1,uint *param_2);
void __cdecl FUN_00465e49(uint param_1,undefined4 param_2,int *param_3,char *param_4);
void FUN_00465ebb(void);
uint __abstract_cw(void);
uint __hw_cw(void);
uint __cdecl __control87(uint _NewValue,uint _Mask);
uint __cdecl __controlfp(uint _NewValue,uint _Mask);
void __cdecl __getbuf(FILE *_File);
int __cdecl __isatty(int _FileHandle);
int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3);
int __cdecl _wctomb(char *_MbCh,wchar_t _WCh);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_0046647f(int param_1,int *param_2,ushort *param_3);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
void __cdecl ___free_lc_time(void **param_1);
void __cdecl ___free_lconv_num(void **param_1);
void __cdecl ___free_lconv_mon(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
int __cdecl _strcmp(char *_Str1,char *_Str2);
char * __cdecl _strpbrk(char *_Str,char *_Control);
undefined4 FUN_00466be0(void);
void _setSBCS(void);
void FUN_00466c38(void);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_00466e30(void);
void __cdecl FUN_00466e39(UINT param_1);
int __cdecl __setmbcp(int _CodePage);
void FUN_00467116(void);
undefined4 ___initmbctable(void);
bool __cdecl FID_conflict:_ValidateRead(void *param_1,UINT_PTR param_2);
bool __cdecl FID_conflict:_ValidateRead(LPVOID param_1,UINT_PTR param_2);
int __cdecl _ValidateExecute(FuncDef3 *param_1);
undefined4 FUN_004671a5(void);
int __cdecl __set_osfhnd(int param_1,intptr_t param_2);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
undefined4 __cdecl FUN_004672e4(uint param_1);
void __cdecl __unlock_fhandle(int _Filehandle);
uint FUN_00467379(void);
int __cdecl __commit(int _FileHandle);
void FUN_00467566(void);
uint __thiscall FUN_0046761d(int this,undefined4 *param_2,uint *param_3,LPCSTR param_4,uint param_5,byte param_6);
int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...);
void FUN_00467949(void);
undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
undefined4 __cdecl FUN_00467d98(byte param_1,uint param_2,byte param_3);
void __cdecl FUN_00467dc9(byte param_1);
BOOL FUN_00467dda(void);
float10 __cdecl FUN_00467eab(double param_1);
undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3);
void __cdecl ___add_12(uint *param_1,uint *param_2);
void __cdecl ___shl_12(uint *param_1);
void __cdecl ___shr_12(uint *param_1);
void __cdecl FUN_00467f98(char *param_1,int param_2,uint *param_3);
void __cdecl FUN_0046807c(undefined2 *param_1,byte **param_2,byte *param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_004684b6(int param_1,uint param_2,short *param_3,int param_4,byte param_5,short *param_6);
uint __fastcall _siglookup(undefined4 param_1,uint param_2);
int __cdecl _raise(int _SigNum);
void __fastcall FUN_004688b3(int param_1);
void __cdecl FUN_004688f1(LCID param_1);
void __cdecl FUN_0046893a(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6);
int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2);
void __cdecl FUN_00468b5e(uint param_1,int param_2);
void __cdecl FUN_00468c99(int *param_1,int *param_2);
void __cdecl FUN_00468ed1(int *param_1,uint param_2,int param_3);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl FUN_00468fc1(uint param_1,int param_2);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
void Unwind@00469110(void);
void Unwind@00469125(void);
void Unwind@00469140(void);
void Unwind@00469160(void);
void Unwind@00469168(void);
void Unwind@00469173(void);
void Unwind@00469190(void);
void Unwind@004691a5(void);
void Unwind@004691c0(void);
void Unwind@004691e0(void);
void Unwind@004691e8(void);
void Unwind@00469200(void);
void Unwind@00469214(void);
void Unwind@0046922b(void);
void Unwind@00469242(void);
void Unwind@00469260(void);
void Unwind@00469280(void);
void Unwind@004692a0(void);
void Unwind@004692c0(void);
void Unwind@004692cb(void);
void Unwind@004692e0(void);
void Unwind@00469300(void);
void Unwind@00469308(void);
void Unwind@00469340(void);
void Unwind@00469358(void);
void Unwind@0046936c(void);
void Unwind@00469376(void);
void Unwind@00469380(void);
void Unwind@0046938a(void);
void Unwind@00469394(void);
void Unwind@0046939e(void);
void Unwind@004693a8(void);
void FUN_004693c0(void);
void FUN_004693e0(void);
void FUN_00469400(void);
void FUN_00469420(void);
void FUN_00469440(void);
void FUN_00469460(void);
void FUN_00469480(void);
void FUN_004694a0(void);
void FUN_004694c0(void);
void FUN_004694e0(void);
void FUN_00469530(void);
void FUN_00469550(void);
void FUN_00469570(void);
void FUN_00469590(void);
void FUN_004695b0(void);
void FUN_004695d0(void);
void FUN_004695e0(void);
void FUN_00469600(void);
void FUN_00469620(void);
void FUN_0046962f(void);
void FUN_00469649(void);
void FUN_00469663(void);
void FUN_00469672(void);
void FUN_0046968c(void);
void FUN_004696b0(void);
void FUN_004696d0(void);
void FUN_004696f0(void);
void FUN_00469710(void);
void FUN_00469750(void);
void FUN_00469770(void);
void FUN_00469790(void);
void FUN_004697ac(void);
void FUN_004697d0(void);
void FUN_004697f0(void);
void FUN_00469810(void);
void FUN_00469830(void);
void FUN_00469870(void);
void FUN_004698b0(void);
void FUN_004698e9(void);
void FUN_00469900(void);
void FUN_00469910(void);
void FUN_00469920(void);
void FUN_00469930(void);
void FUN_00469940(void);
void FUN_00469950(void);
void FUN_00469960(void);
void FUN_00469970(void);
void FUN_00469980(void);
void FUN_00469990(void);
void FUN_004699a0(void);
void FUN_004699b0(void);
void FUN_004699c0(void);
void FUN_004699cf(void);
void FUN_004699de(void);
void FUN_004699ed(void);
void FUN_004699fc(void);
void FUN_00469a10(void);
void FUN_00469a20(void);
void FUN_00469a30(void);
void FUN_00469a40(void);
void FUN_00469a50(void);

