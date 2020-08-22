# libcomputeron
Check if the computer is on, because of course you need to check if the device the code is running on is powered on, right?  

# Usage
Download header file  
```c
#include <stdio.h>
#include "computer_on.h"

int main() {
	if (computer_on() == 0 ) {
		printf("Computer is on!\n");
		return 0;
	}
}
```
???  
Profit