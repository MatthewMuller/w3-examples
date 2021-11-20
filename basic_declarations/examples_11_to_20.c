#include "include/main.h"

RETURN_CODE_ENUM_TYPE example_11(void) {
	int item_1_quantity = 0, item_2_quantity = 0, total_items = 0;
	float item_1_weight = 0, item_2_weight = 0, average_value = 0;

	printf("Average weight of multiples of two items\n");
	printf("Item one weight?");
	while (!scanf("%f", &item_1_weight)) {
		printf("Bad input, try again");
	}
	printf("Item one quantity?");
	while (!scanf("%d", &item_1_quantity)) {
		printf("Bad input, try again");
	}
	printf("Item two weight?");
	while (!scanf("%f", &item_2_weight)) {
		printf("Bad input, try again");
	}
	printf("Item two quantity?");
	while (!scanf("%d", &item_2_quantity)) {
		printf("Bad input, try again");
	}

	total_items = item_1_quantity + item_2_quantity;
	average_value = ((item_1_weight * item_1_quantity) +
					 (item_2_weight * item_2_quantity)) /
					total_items;
	printf("The average value is %f\n", average_value);

	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_12(void) {
	int employee_id = 0, total_hours_worked = 0, rate_per_hour = 0, salary = 0;

	printf("Employee ID Number?");
	while (!scanf("%d", &employee_id)) {
		printf("Bad input, try again");
	}
	printf("Total hours employee worked?");
	while (!scanf("%d", &total_hours_worked)) {
		printf("Bad input, try again");
	}
	printf("Employee hourly rate?");
	while (!scanf("%d", &rate_per_hour)) {
		printf("Bad input, try again");
	}

	salary = total_hours_worked * rate_per_hour;
	printf("Employee ID: %d\n", employee_id);
	printf("Employee Salary %d\n", salary);

	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_13(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_14(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_15(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_16(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_17(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_18(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_19(void) {
	return SUCCESS;
}

RETURN_CODE_ENUM_TYPE example_20(void) {
	return SUCCESS;
}