#include <stdio.h>

float calculateTax(float income, int age) {  
	float tax = 0.0;
// conditional statements wrt age.
	if (age < 61) {
		if (income <= 250000)
			tax = 0;
		else if (income <= 500000)
			tax = (income - 250000) * 0.05;
		else if (income <= 1000000)
			tax = (250000 * 0.05) + (income - 500000) * 0.20;
		else
			tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
	}
	else if (age < 81) {
		if (income <= 300000)
			tax = 0;
		else if (income <= 500000)
			tax = (income - 300000) * 0.05;
		else if (income <= 1000000)
			tax = (200000 * 0.05) + (income - 500000) * 0.20;
		else
			tax = (200000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
	}
	else {
		if (income <= 500000)
			tax = 0;
		else if (income <= 1000000)
			tax = (income - 500000) * 0.20;
		else
			tax = (500000 * 0.20) + (income - 1000000) * 0.30;
	}

	return tax;
}

int main() {
	float income;
	int age;

	printf("\n\n\nTAX CALCULATOR BASED ON AY--2026-27\n");
           printf("Name-Saurav kumar\nId- B125114\n");
	printf("\nEnter your age: ");
	scanf("%d", &age);

	printf("\nEnter your annual income (in Rs. ): ");
	scanf("%f", &income);

	float tax = calculateTax(income, age);
	printf("\n Your calculated tax is: Rs.  %.2f/-\n", tax);

	return 0;
}