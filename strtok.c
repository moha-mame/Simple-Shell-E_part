#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main-prototype
 *Return: 0
 */
int main(void)
{
	char *buffer;
	size_t len = 1024;
	char *token;
	int read;

	buffer = malloc(sizeof(size_t) * len);
	while (1)
	{
		printf("$ ");
		read = getline(&buffer, &len, stdin);
		if (read != EOF)
			printf("Full String : %s", buffer);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("Token no.: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}// https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-split//
//https://linuxhint.com/split-strings-delimiter-c//
