
#****************************************************************
#                                                               
# Pro*C/C++ Server ALTqTrainHieu Makefile												 
# 2022.06.02 										 
#																					 
#****************************************************************
include ../../common.mk

#Dynamic share library
DYNAME		= ALTqBond30
LIBNAME3 	= ${DYNAME}.so.1.0.0
LIBNAME2 	= ${DYNAME}.so.1.0
LIBNAME1	= ${DYNAME}.so.1
LIBNAME		= ${DYNAME}.so

ORGS		= ALTqBond30_3111.c ALTqBond30_3112.c

# Compile Option -shared
MYLFLAGS	= -I$(ORAINCDIR) ${ORA_LIBS} -L${BIN_LIB} -l${MWLIB_SERVICES} -l${LIB_ZMQ} -l${LIB_CZMQ} -l${LIB_DBA_COM} -l${LIB_WRKAPI} -l${LIB_SYSCOM} \

MYCFLAGS	= -I$(ORAINCDIR)

all : ${LIBNAME3}

${LIBNAME3} : ${OBJS}
	${CC} ${LFLAGS} -o ${LIBNAME3}
	
install :
	rm -f ${BIN_LIB}/${LIBNAME}* 
	cp -p ${LIBNAME3} ${BIN_LIB}
	ln -s ${BIN_LIB}/${LIBNAME3} ${BIN_LIB}/${LIBNAME2}
	ln -s ${BIN_LIB}/${LIBNAME3} ${BIN_LIB}/${LIBNAME1}
	ln -s ${BIN_LIB}/${LIBNAME3} ${BIN_LIB}/${LIBNAME}	
	chmod 775 ${BIN_LIB}/*

clean :
	rm -f *.o ${LIBNAME3} core	
	rm -f *.c
	touch *c
	touch *pc

build:
	cp -p ${DYNAME}.h ${INC}
	make clean; \
	make all; \
	rm *.c *.o; \
	if [ -f ${LIBNAME3} ]; then make install; fi;

