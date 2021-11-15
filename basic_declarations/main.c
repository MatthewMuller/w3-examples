#include ".\include\main.h"

/* function prototypes */
int main(void);

/* array of function pointers to examples */
int (*fa_1_to_10[EXAMPLES_PER_GROUP])(void) =
{
	example_1,
	example_2,
	example_3,
	example_4,
	example_5,
	example_6,
	example_7,
	example_8,
	example_9,
	example_10
};

/*
*	main()
* 
*	@param argc number of arguments
*	@param argv	list of arguments
*
*	@brief main function that calls w3 examples
*/
int main(void) {

	int curr_example = 0;

	for (curr_example = 0; curr_example <= EXAMPLES_PER_GROUP; curr_example++) {
		if (NULL != fa_1_to_10[curr_example]) {
			fa_1_to_10[curr_example]();
		}
	}
	
	return SUCCESS;
}
