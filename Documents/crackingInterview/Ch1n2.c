include <stdio.h>

void reverse(char *str) {

	char * end = str;

	char tmp;

	if (str) {

		while (*end) {

			++end;

		}

		--end;

		while (str < end) {

			tmp = *str;

			*str++ = *end;

			*end-- = tmp;

		}

	}

}
int main()
{
	char str[] = "hello";

	reverse(&str);
	printf("%s", str);


}



