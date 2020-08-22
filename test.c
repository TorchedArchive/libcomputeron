#include <stdio.h>
#include "computer_on.h"

int main() {
	if (computer_on() == 1) {
		printf("Computer is on!\n");
		return 0;
	}
}