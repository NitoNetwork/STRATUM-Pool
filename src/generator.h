/*
 * Copyright 2014-2018,2023 Con Kolivas
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.  See COPYING for more details.
 */

#ifndef GENERATOR_H
#define GENERATOR_H

#include "config.h"

#define GETBEST_FAILED -1
#define GETBEST_NOTIFY 0
#define GETBEST_SUCCESS 1

void generator_add_send(nitopool_t *ckp, json_t *val);
struct genwork *generator_getbase(nitopool_t *ckp);
int generator_getbest(nitopool_t *ckp, char *hash);
bool generator_checkaddr(nitopool_t *ckp, const char *addr, bool *script, bool *segwit);
bool generator_checktxn(const nitopool_t *ckp, const char *txn, json_t **val);
char *generator_get_txn(nitopool_t *ckp, const char *hash);
bool generator_submitblock(nitopool_t *ckp, const char *buf);
void generator_preciousblock(nitopool_t *ckp, const char *hash);
bool generator_get_blockhash(nitopool_t *ckp, int height, char *hash);
void *generator(void *arg);

#endif /* GENERATOR_H */
