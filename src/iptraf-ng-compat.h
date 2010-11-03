/*
    Copyright (C) 2010  Nikola Pajkovsky (npajkovs@redhat.com)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef IPTRAF_NG_COMPAT_H
#define IPTRAF_NG_COMPAT_H

#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <signal.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>
#include <ctype.h>
#include <netdb.h>
#include <curses.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <sys/un.h>

#include <netinet/in.h>
#include <netinet/udp.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/ip6.h>
#include <netinet/icmp6.h>

#include <arpa/inet.h>

#include <linux/if_ether.h>
#include <linux/if_packet.h>
#include <linux/if_fddi.h>
#include <linux/if_tr.h>
#include <linux/types.h>
#include <linux/isdn.h>

#include <net/if.h>
#include <net/if_arp.h>

/* move it out! */
#include "panel.h"
#include "labels.h"
#include "listbox.h"
#include "input.h"
#include "menurt.h"
#include "winops.h"
#include "msgboxes.h"
//#include "txbox.h"


#define NORETURN __attribute__((noreturn))


extern void *xmalloc(size_t size);
extern void *xcalloc(size_t nmemb, size_t size);
extern void *xrealloc(void *ptr, size_t size);
extern char* xvasprintf(const char *format, va_list p);


extern void die(const char *err, ...);
extern void error(const char *err, ...);


#endif