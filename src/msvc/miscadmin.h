#ifndef TIMESCALEDB_MSVC_MISCADMIN_H
#define TIMESCALEDB_MSVC_MISCADMIN_H
#include <postgres.h>


typedef enum ProcessingMode
{
	BootstrapProcessing,		/* bootstrap creation of template database */
	InitProcessing,				/* initializing system */
	NormalProcessing			/* normal processing */
} ProcessingMode;

extern PGDLLIMPORT ProcessingMode Mode;

#define IsBootstrapProcessingMode() (Mode == BootstrapProcessing)
#define IsInitProcessingMode()		(Mode == InitProcessing)
#define IsNormalProcessingMode()	(Mode == NormalProcessing)

#endif   /* TIMESCALEDB_MSVC_MISCADMIN_H */
