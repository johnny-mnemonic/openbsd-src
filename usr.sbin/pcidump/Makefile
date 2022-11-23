#	$OpenBSD: Makefile,v 1.15 2021/05/20 00:46:34 jsg Exp $
#	$OpenBSD: Makefile,v 1.13 2020/06/28 19:11:53 drahn Exp $

.if ${MACHINE} == "alpha" || ${MACHINE} == "amd64" || \
    ${MACHINE} == "arm64" || ${MACHINE} == "armv7" || \
    ${MACHINE} == "hppa" || ${MACHINE} == "i386" || \
    ${MACHINE} == "landisk" || ${MACHINE} == "loongson" || \
    ${MACHINE} == "macppc" || ${MACHINE} == "octeon" || \
    ${MACHINE} == "powerpc64" || ${MACHINE} == "riscv64" || \
    ${MACHINE} == "sgi" || ${MACHINE} == "sparc64"

PROG=	pcidump

.else
NOPROG=yes
.endif

MAN=	pcidump.8

.include <bsd.prog.mk>
