#ifndef _EXAMPLES_DEF_H
#define _EXAMPLES_DEF_H

#define TOTAL_EXAMPLES 150
#define RUN_ALL_TESTS 0
#define MENU_OPTION_OFFSET 1

typedef enum RETURN_CODE_ENUM {
	SUCCESS = 0,
	FAILURE = 1,
	INVALID = 2
} RETURN_CODE_ENUM_TYPE;

typedef enum RUN_MODE {
	ALLTESTS = 0,
	SINGLETEST = 1,
	INVALID_RUNMODE = 2
} RUN_MODE_TYPE;

typedef struct EXAMPLE {
	RETURN_CODE_ENUM_TYPE (*fp)(void);
	int example_number;
	char padding[4];
} EXAMPLE_TYPE;

#endif