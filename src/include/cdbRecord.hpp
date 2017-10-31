#ifndef CDB_RECORD_HPP
#define CDB_RECORD_HPP

namespace cdb
{
    class cdbRecordElement;

    class cdbRecord
    {
    public:

    };

    class cdbRecordBuilder
    {
        cdbRecordBuilder();
        cdbRecordBuilder( UINT32 len );
        append( cdbRecordElement& element );
    private:
        UINT32 _len;
        const CHAR *_data;
    };
}
#endif
