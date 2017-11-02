#ifndef TIMESCALEDB_MSVC_EXTENSION_H
#define TIMESCALEDB_MSVC_EXTENSION_H
#include <postgres.h>

extern PGDLLIMPORT bool creating_extension;
extern PGDLLIMPORT Oid CurrentExtensionObject;

#endif   /* TIMESCALEDB_MSVC_EXTENSION_H */
