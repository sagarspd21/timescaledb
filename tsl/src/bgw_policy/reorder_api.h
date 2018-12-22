/*
 * Copyright (c) 2018  Timescale, Inc. All Rights Reserved.
 *
 * This file is licensed under the Timescale License,
 * see LICENSE-TIMESCALE at the top of the tsl directory.
 */

#ifndef TIMESCALEDB_TSL_BGW_POLICY_REORDER_API_H
#define TIMESCALEDB_TSL_BGW_POLICY_REORDER_API_H

#include <postgres.h>

/* User-facing API functions */
extern Datum reorder_add_policy(PG_FUNCTION_ARGS);
extern Datum reorder_remove_policy(PG_FUNCTION_ARGS);

#endif							/* TIMESCALEDB_TSL_BGW_POLICY_REORDER_API_H */
