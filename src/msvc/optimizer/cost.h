#ifndef TIMESCALEDB_MSVC_OPTIMIZER_COST_H
#define TIMESCALEDB_MSVC_OPTIMIZER_COST_H
#include <postgres.h>

typedef enum
{
	CONSTRAINT_EXCLUSION_OFF,	/* do not use c_e */
	CONSTRAINT_EXCLUSION_ON,	/* apply c_e to all rels */
	CONSTRAINT_EXCLUSION_PARTITION		/* apply c_e to otherrels only */
}	ConstraintExclusionType;

extern PGDLLIMPORT int constraint_exclusion;

#endif   /* TIMESCALEDB_MSVC_OPTIMIZER_COST_H */
