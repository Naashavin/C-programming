#include <stdio.h>

int main()
{
	int coffee = 20;
	switch (coffee) {
		case 20:
			printf("40 rupees");
			break;

		case 30:
			printf("60 rupees");
			break;

		case 50:
			printf("80 rupees");
			break;

		default:
			printf("there is no such type of coffee");
			break;
	}

	return 0;
}

