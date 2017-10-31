#ifndef CDB_PAGE_BUF_HPP
#define CDB_PAGE_BUF_HPP

#include "osType.hpp"
namespace cdb
{
    struct PageHeader
    {
        UINT32 magicNumber;
        UINT32 flags;
        UINT32 numberSlot;
        UINT32 slotOffset;
        UINT32 freeSpaceOffset;
        CHAR data[0];
    };
}
#endif
