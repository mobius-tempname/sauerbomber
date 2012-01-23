#ifndef _SHARED_DISCONNECT_H
#define _SHARED_DISCONNECT_H

enum {
    DISC_NONE = 0,
    DISC_EOP,
    DISC_CN,
    DISC_KICK,
    DISC_TAGT,
    DISC_IPBAN,
    DISC_PRIVATE,
    DISC_MAXCLIENTS,
    DISC_TIMEOUT,
    DISC_OVERFLOW,
    DISC_NUM
};

#endif
