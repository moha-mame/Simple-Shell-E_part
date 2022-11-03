#include <stdio.h>
#include <stdlib.h>
/**
 *main-prototype
 *Return: 0
 */
int main(void)
{
	char *buffer;
	size_t len = 1024;
	int read;

	buffer = malloc(sizeof(size_t) * len);

	while (1)
	{
		printf("$ ");
		read = getline(&buffer, &len, stdin);
		if (read != EOF)
			printf("%s", buffer);
      else
      exit(1);
	}
	return (0);
}
//https://linuxhint.com/getline-function-c//
