#ifndef EXAMPLES_DEF_H
#define EXAMPLES_DEF_H

#define TOTAL_EXAMPLES 150
#define RUN_ALL_TESTS 0
#define MENU_OPTION_OFFSET 1

typedef enum { SUCCESS = 0, FAILURE = 1, INVALID = 2 } RETURN_CODE_ENUM_TYPE;

typedef enum {
	ALLTESTS = 0,
	SINGLETEST = 1,
	INVALID_RUNMODE = 2
} RUN_MODE_TYPE;

typedef struct {
	RETURN_CODE_ENUM_TYPE (*fp)(void);
	int example_number;
	char padding[4];
} EXAMPLE_TYPE;

#endif