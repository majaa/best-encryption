#include <stdio.h>

int main()
{
	int x = 0;
	char s[50];
	printf("Enter String : ");
	gets(s);
	while (s[x] != '\0')
	{
		if (s[x] == 'a')
		{
			s[x] = '*';
		}
		x++;
	}

	printf("\nString After Replacing 'a' by '*'");
	printf("\n-------------------------------------\n");
	printf("%s", s);
	return 0;
}