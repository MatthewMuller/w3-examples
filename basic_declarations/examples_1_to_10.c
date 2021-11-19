#include ".\include\main.h"

int example_1(void) {
	printf("Name:\tMatt Muller\n");
	printf("DOB:\tNov. 2 1988\n");
	printf("Mobile:\t123-456-7890\n");
	return SUCCESS;
}

int example_2(void) {
	printf("TODO: EX2\n");
	return SUCCESS;
}

int example_3(void) {
	printf("######\n");
	printf("#\n");
	printf("#\n");
	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#\n\n");
	printf("   ######\n");
	printf(" ##      ##\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
	printf(" ##      ##\n");
	printf("   ######\n");
	return SUCCESS;
}

int example_4(void) {
	const char x = 'X';
	const char m = 'M';
	const char l = 'L';

	printf("Test Characters: 'X','M','L'\n");
	printf("The reverse of %c%c%c is %c%c%c\n", x,m,l,l,m,x);
	return SUCCESS;
}

int example_5(void) {
	const int height = 7;
	const int width = 5;
	const int parameter = 2 * height + 2 * width;
	const int area = height * width;

	printf("Rectangle Height is 7 inches, Rectangle Width is 5 inches\n");
	printf("Perimeter of the rectangle = %d inches\n", parameter);
	printf("Area of the rectangle = %d inches\n", area);
	return SUCCESS;
}

int example_6(void) {
	const int radius = 6;
	const double circumference = 2 * M_PI * radius;
	const double area = M_PI * radius * radius;

	printf("Radius of Circle is 6 inches\n");
	printf("Circumference of the circle = %lf inches\n", circumference);
	printf("Area of the circle = %lf inches\n", area);
	return SUCCESS;
}

int example_7(void) {
	const int a = 125, b = 12345;
	const long ax = 1234567890;
	const short s = 4043;
	const float x = 2.13459f;
	const double dx = 1.1415927;
	const char c = 'W';
	const unsigned long ux = 2541567890;

	printf("Variables:\n"
		"a = 125\n"
		"b = 12345\n"
		"ax = 1234567890\n"
		"s = 4043\n"
		"x = 2.13459\n"
		"dx = 1.1415927\n"
		"c = 'W'\n"
		"ux = 2541567890\n");

	printf("Equations:\n");
	printf("a + c = %d\n", a + c);
	printf("x + c = %f\n", x + c);
	printf("dx + x = %lf\n", dx + x);
	printf("(int)dx + ax = %ld\n", (int)dx + ax);
	printf("a + x = %f\n", a + x);
	printf("s + b = %d\n", s + b);
	printf("ax + b = %ld\n", ax + b);
	printf("s + c = %hd\n", s + c);
	printf("ax + c = %ld\n", ax + c);
	printf("ax + ux = %lu\n", ax + ux);
	return SUCCESS;
}

int example_8(void) {
	/* SOLUTION 1 8/
	//const unsigned int total_num_of_days = 1329;
	//unsigned int years = 0, weeks = 0, days = 0, days_remaining = 0;
	//days_remaining = total_num_of_days;

	///* calculate and remove number of years */
	//years = total_num_of_days / 365;
	//days_remaining = days_remaining - (365 * years);

	///* calculate and remove number of weeks */
	//weeks = days_remaining / 7;
	//days_remaining = days_remaining - (7 * weeks);

	///* calculate number of days */
	//days = days_remaining;

	/* SOLUTION 2*/
	const unsigned int total_num_of_days = 1329;
	unsigned int years = 0, weeks = 0, days = 0;
	 
	years = total_num_of_days / 365;
	weeks = (total_num_of_days % 365) / 7;
	days = total_num_of_days - ((years * 365) + (weeks * 7));
	
	printf("Number of total days is %d\n", total_num_of_days);
	printf("Number of years is %u\n", years);
	printf("Number of weeks is %u\n", weeks);
	printf("Number of days is %u\n", days);

	return SUCCESS;
}

int example_9(void) {
	int input_1 = 0, input_2 = 0, sum = 0;

	printf("Intput two values to be summed\n");
	printf("Value one?");
	while(!scanf_s("%d", &input_1)){
		printf("Bad input, try again\n");
	}
	printf("Value two?");
	while (!scanf_s("%d", &input_2)) {
		printf("Bad input, try again\n");
	}

	sum = input_1 + input_2;
	printf("The sum of the values is %d\n", sum);

	return SUCCESS;
}

int example_10(void) {
	int input_1 = 0, input_2 = 0, product = 0;

	printf("Intput two values to be multiplied\n");
	printf("Value one?");
	while (!scanf_s("%d", &input_1)) {
		printf("Bad input, try again\n");
	}
	printf("Value two?");
	while (!scanf_s("%d", &input_2)) {
		printf("Bad input, try again\n");
	}

	product = input_1 * input_2;
	printf("The product of the values is %d\n", product);

	return SUCCESS;
}