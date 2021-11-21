#include "include/main.h"

int main(void);

/* array containing all of our examples */
EXAMPLE_TYPE examples[TOTAL_EXAMPLES] = {
	{example_1, 1},	  {example_2, 2},	{example_3, 3},	  {example_4, 4},
	{example_5, 5},	  {example_6, 6},	{example_7, 7},	  {example_8, 8},
	{example_9, 9},	  {example_10, 10}, {example_11, 11}, {example_12, 12},
	{example_13, 13}, {example_14, 14}, {example_15, 15}, {example_16, 16},
	{example_17, 17}, {example_18, 18}, {example_19, 19}, {example_20, 20}};

/*
 *	main()
 *
 *	@param argc number of arguments
 *	@param argv	list of arguments
 *
 *	@brief main function that calls w3 examples
 */
int main(void) {
	int example_index = 0, menu_option = 0;
	EXAMPLE_TYPE *current_example = NULL;
	RUN_MODE_TYPE run_mode = INVALID_RUNMODE;

	while (true) {
		printf("Enter example number to run that number, or "
			   "0 to run them all: ");

		while (!scanf("%d", &menu_option)) {
			printf("Bad input, try again\n");
		}

		decide_run_mode(menu_option, TOTAL_EXAMPLES, &run_mode);
		switch (run_mode) {
		case ALLTESTS:
			/* run examples */
			for (example_index = 0; example_index <= TOTAL_EXAMPLES;
				 example_index++) {
				/* create alias */
				current_example = &examples[example_index];

				if (NULL != current_example->fp) {
					call_example(current_example->fp,
								 current_example->example_number);
				}
			}

			/* You ran all the examples, time to leave :) */
			return SUCCESS;
		case SINGLETEST:
			/* create alias */
			current_example = &examples[menu_option - MENU_OPTION_OFFSET];

			if (NULL != current_example->fp) {
				call_example(current_example->fp,
							 current_example->example_number);
			}
			break;
		case INVALID:
		default:
			printf("Selection of %d must be between %d and %d\n", menu_option,
				   RUN_ALL_TESTS, TOTAL_EXAMPLES);
			break;
		}
	}

	return SUCCESS;
}