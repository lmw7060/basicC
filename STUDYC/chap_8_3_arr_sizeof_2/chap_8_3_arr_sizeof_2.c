#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char str[20];
	int i=0;
	/*str[0] = 'L';
	str[1] = 'O';
	str[2] = 'V';
	str[3] = 'E';
	str[4] = '\0';
	*/
	scanf("%s", str);
	for(i=0; i<5; i++)
	{
		printf("%c", str[i]);
	}

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}

	printf("%s", str);


	return 0;
}