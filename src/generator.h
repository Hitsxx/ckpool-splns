/*
 * Copyright 2014-2017 Con Kolivas
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

void generator_add_send(ckpool_t *ckp, json_t *val);
json_t *generator_genbase(ckpool_t *ckp);
int generator_getbest(ckpool_t *ckp, char *hash);
bool generator_checkaddr(ckpool_t *ckp, const char *addr);
char *generator_get_txn(ckpool_t *ckp, const char *hash);
bool generator_submitblock(ckpool_t *ckp, char *buf);
bool generator_get_blockhash(ckpool_t *ckp, int height, char *hash);
void *generator(void *arg);

#endif /* GENERATOR_H */
