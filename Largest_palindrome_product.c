
#include <stdio.h>
#include <string.h>

int main() {
	char largest_palindrome[5];
	char *f;
	char *l;
	int forward, backward, i, j, mult_one, mult_two, pal_len, largest;
	largest = 0;
	for (j = 999; j > 0; j--){
		for (i = 999; i > 0; i--){
			sprintf(largest_palindrome,"%d",i * j);
			forward = 0;
			backward = pal_len = strlen(largest_palindrome) - 1;
			f = &largest_palindrome[forward];
			l = &largest_palindrome[backward];
			if (*f == *l){
				while (1){
					forward++;
					backward--;
					f = &largest_palindrome[forward];
					l = &largest_palindrome[backward];
					if (*f != *l){
						break;
					}
					if (forward == pal_len){
						if (largest < (i * j)) {
							mult_one = i;
							mult_two = j;
							largest = i * j;

						}
					}
				}
			}
		}
	}
	printf("Largest palindrome product:%d Factors (%d,%d)\n", largest, mult_one, mult_two);
	return 0;
}
