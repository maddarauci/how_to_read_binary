#include <stdio.h>
#include <stdlib.h>

/* program 1.3: reading in character */

int main() {
	int ch; 

	ch = getchar();
	while(ch != 'a') {
		if(ch != '\n')
			printf("ch was %c, value %d\n", ch, ch);
		ch = getchar();
	}
	exit(EXIT_SUCCESS);
}