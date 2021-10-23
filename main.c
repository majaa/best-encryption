#include <stdio.h>

int encrypt()
{
	// todo moj kod
}

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
	printf("\nString After Replacing 'a' by '*'");
	printf("\n-------------------------------------\n");
	printf("%s", s);
	printf("-------------------------------------");
	return 0;
}