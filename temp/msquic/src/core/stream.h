#ifdef QUIC_CLOG
#include "stream.h.clog.h"
#endif

typedef struct QUIC_CONNECTION QUIC_CONNECTION;

typedef struct QUIC_SEND_REQUEST
{
    // The pointer to the next item in the list.
    struct QUIC_SEND_REQUEST *Next;
    _Field_size_bytes_(BufferCount)
        const QUIC_BUFFER *Buffers;
};