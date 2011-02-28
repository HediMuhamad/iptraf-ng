
struct OPTIONS {
    unsigned int color:1,
        logging:1,
        revlook:1, servnames:1, promisc:1, actmode:1, mac:1, v6inv4asv6:1, dummy:8;
    unsigned int timeout;
    unsigned int logspan;
    unsigned int updrate;
    unsigned int closedint;
};

#define DEFAULT_UPDATE_DELAY 50000      /* usec screen delay if update rate 0 */
#define HOSTMON_UPDATE_DELAY 100000
