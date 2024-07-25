#ifndef _ALTxBond30_
#define _ALTxBond30_
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <global.h>
#include <numlib.h>
#include <servicecall.h>
#include <strlib.h>
#include <datacryption.h>
#include <libSysCom.h>
#include <libCheck.h>

// Normal
int ALTxBond30_3112(altwrk_t *session, zmsg_t *zmsg, const nx_json *json, char *jsonOut, char *errcode);

// Special
int ALTxBond30_3112_01(altwrk_t *session, zmsg_t *zmsg, const nx_json *json, char *jsonOut, char *errcode);

#endif
