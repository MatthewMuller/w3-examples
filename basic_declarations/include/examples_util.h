#include "examples_def.h"

RETURN_CODE_ENUM_TYPE
call_example(RETURN_CODE_ENUM_TYPE (*example_to_run)(void),
			 const unsigned int example_number);
const char* return_code_tostring(RETURN_CODE_ENUM_TYPE return_code);
RETURN_CODE_ENUM_TYPE
decide_run_mode(int menu_option, int total_examples, RUN_MODE_TYPE* run_mode);