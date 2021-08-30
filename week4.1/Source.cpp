#include <stdio.h>
#include <string.h>

char input[100];

void func()
{

	int i = strlen(input);
	for (input[i];i >= 0;i--)
	{
		if (input[i] == 'a')
		{	
			printf("0");
		}
		else if (input[i] == 'e')
		{
			printf("1");
		}
		else if (input[i] == 'i')
		{
			printf("2");
		}
		else if (input[i] == 'o')
		{
			printf("3");
		}
		else if (input[i] == 'u')
		{
			printf("4");
		}
		else
		{
			printf("%c", input[i]);
		}

	}
}

int main()
{
	printf("Input: ");
	gets_s(input);

	func();
	printf("aca");

	return 0;
}