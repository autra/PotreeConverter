
#ifndef DEFINITIONS_H
#define DEFINITIONS_H

namespace Potree{

enum class OutputFormat{
	BINARY,
	LAS,
	LAZ,
	CUSTOM_BINARY,
};

enum class StoreOption{
	ABORT_IF_EXISTS,
	OVERWRITE,
	INCREMENTAL
};

}

#endif