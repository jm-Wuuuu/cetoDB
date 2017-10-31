#ifndef CDB_RECORD_ELEMENT_BASE_HPP
#define CDB_RECORD_ELEMENT_BASE_HPP

namespace cdb
{
    enum CDB_RECORD_ELE_TYPE
    {
        CDB_RECORD_ELE_TYPE_BOOL = 0,
        CDB_RECORD_ELE_TYPE_INT,
        CDB_RECORD_ELE_TYPE_LONG,
        CDB_RECORD_ELE_TYPE_VARCHAR;
    };

    class cdbRecordElement
    {
    public:
        CDB_RECORD_ELE_TYPE getType()
        {
            return _eleType;
        }

        void setData()
    private:
        CDB_RECORD_TYPE _eleType;
        const CHAR* data;
    };
}
#endif
