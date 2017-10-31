#ifndef CDB_STORAGE_FILE_HPP
#define CDB_STORAGE_FILE_HPP
#include "osType.hpp"

namespace cdb
{
    struct cdbStorageFileHeader
    {
        UINT32 magicNumber;
        UINT32 flag;
        UINT32 size;
        UINT32 pageSize;
        UINT32 pageNumber;
        UINT32 version;
    };

    class
}
#endif
