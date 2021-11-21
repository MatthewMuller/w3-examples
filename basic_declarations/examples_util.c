#include "include/main.h"

RETURN_CODE_ENUM_TYPE
call_example(RETURN_CODE_ENUM_TYPE (*example_to_run)(void),
			 const unsigned int example_number) {
	/* sanatize inputs */
	if (NULL == example_to_run) {
		printf("example_to_run was NULL\n");
		return FAILURE;
	}

	if (0 >= example_number || TOTAL_EXAMPLES < example_number) {
		printf("example_number was not between 1 and %d\n", TOTAL_EXAMPLES);
		return FAILURE;
	}

	printf("Calling example %d\n", example_number);
	printf("Example returned %s\n\n", return_code_tostring(example_to_run()));
	return SUCCESS;
}

const char *return_code_tostring(RETURN_CODE_ENUM_TYPE return_code) {
	switch (return_code) {
	case SUCCESS:
		return "SUCCESS";
	case FAILURE:
		return "FAILURE";
	case INVALID:
	default:
		return "INVALID";
	}
};

RETURN_CODE_ENUM_TYPE
decide_run_mode(int menu_option, int total_examples, RUN_MODE_TYPE *run_mode) {
	if (RUN_ALL_TESTS == menu_option) {
		*run_mode = ALLTESTS;
	} else if (RUN_ALL_TESTS < menu_option && total_examples > menu_option) {
		*run_mode = SINGLETEST;
	} else {
		*run_mode = INVALID_RUNMODE;
	}
	return SUCCESS;
}