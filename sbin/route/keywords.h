/* $OpenBSD: keywords.h,v 1.31 2015/09/11 20:08:40 mpi Exp $ */

/* WARNING!  This file was generated by keywords.sh  */

struct keytab {
	char	*kt_cp;
	int	kt_i;
};

enum {
	K_NULL,
	K_ADD,
	K_BGP,
	K_BLACKHOLE,
	K_CHANGE,
	K_CLONING,
	K_CONNECTED,
	K_DELETE,
	K_DST,
	K_EXEC,
	K_EXPIRE,
	K_FLUSH,
	K_GATEWAY,
	K_GET,
	K_HOPCOUNT,
	K_HOST,
	K_IFA,
	K_IFACE,
	K_IFP,
	K_IN,
	K_INET,
	K_INET6,
	K_INTERFACE,
	K_JUMBO,
	K_LABEL,
	K_LINK,
	K_LLINFO,
	K_LOCAL,
	K_LOCK,
	K_LOCKREST,
	K_MONITOR,
	K_MPATH,
	K_MPLS,
	K_MPLSLABEL,
	K_MTU,
	K_NET,
	K_NETMASK,
	K_NOJUMBO,
	K_NOSTATIC,
	K_OSPF,
	K_OUT,
	K_POP,
	K_PREFIXLEN,
	K_PRIORITY,
	K_PROTO1,
	K_PROTO2,
	K_PUSH,
	K_RECVPIPE,
	K_REJECT,
	K_RIP,
	K_RTT,
	K_RTTVAR,
	K_SA,
	K_SENDPIPE,
	K_SHOW,
	K_SSTHRESH,
	K_STATIC,
	K_SWAP,
};

struct keytab keywords[] = {
	{ "add",	K_ADD },
	{ "bgp",	K_BGP },
	{ "blackhole",	K_BLACKHOLE },
	{ "change",	K_CHANGE },
	{ "cloning",	K_CLONING },
	{ "connected",	K_CONNECTED },
	{ "delete",	K_DELETE },
	{ "dst",	K_DST },
	{ "exec",	K_EXEC },
	{ "expire",	K_EXPIRE },
	{ "flush",	K_FLUSH },
	{ "gateway",	K_GATEWAY },
	{ "get",	K_GET },
	{ "hopcount",	K_HOPCOUNT },
	{ "host",	K_HOST },
	{ "ifa",	K_IFA },
	{ "iface",	K_IFACE },
	{ "ifp",	K_IFP },
	{ "in",	K_IN },
	{ "inet",	K_INET },
	{ "inet6",	K_INET6 },
	{ "interface",	K_INTERFACE },
	{ "jumbo",	K_JUMBO },
	{ "label",	K_LABEL },
	{ "link",	K_LINK },
	{ "llinfo",	K_LLINFO },
	{ "local",	K_LOCAL },
	{ "lock",	K_LOCK },
	{ "lockrest",	K_LOCKREST },
	{ "monitor",	K_MONITOR },
	{ "mpath",	K_MPATH },
	{ "mpls",	K_MPLS },
	{ "mplslabel",	K_MPLSLABEL },
	{ "mtu",	K_MTU },
	{ "net",	K_NET },
	{ "netmask",	K_NETMASK },
	{ "nojumbo",	K_NOJUMBO },
	{ "nostatic",	K_NOSTATIC },
	{ "ospf",	K_OSPF },
	{ "out",	K_OUT },
	{ "pop",	K_POP },
	{ "prefixlen",	K_PREFIXLEN },
	{ "priority",	K_PRIORITY },
	{ "proto1",	K_PROTO1 },
	{ "proto2",	K_PROTO2 },
	{ "push",	K_PUSH },
	{ "recvpipe",	K_RECVPIPE },
	{ "reject",	K_REJECT },
	{ "rip",	K_RIP },
	{ "rtt",	K_RTT },
	{ "rttvar",	K_RTTVAR },
	{ "sa",	K_SA },
	{ "sendpipe",	K_SENDPIPE },
	{ "show",	K_SHOW },
	{ "ssthresh",	K_SSTHRESH },
	{ "static",	K_STATIC },
	{ "swap",	K_SWAP },
};

