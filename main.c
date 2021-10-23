#include <stdio.h>

int main()
{
	int i = 0;
	char s[50];
	printf("Enter String : ");
	gets(s);
	while (s[i] != '\0')
	{
		if (s[i] == 'a')
		{
			s[i] = '*';
		}
		i++;
	}

	printf("-------------------------------------");
	printf("\nNew string 'a' by '*'");
	printf("\n-------------------------------------\n");
	printf("%s", s);
	printf("-------------------------------------");
	return 0;
}