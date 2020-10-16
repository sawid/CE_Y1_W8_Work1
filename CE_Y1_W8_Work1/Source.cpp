#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0;
	char str[1000];
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		if ( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') && str[i] + 4 > 'Z')
			{
				printf("%c", str[i] + 4 - 26);
			}
			else if ((str[i] >= 'a' && str[i] <= 'z') && str[i] + 4 > 'z')
			{
				printf("%c", str[i] + 4 - 26);
			}
			else
			{
				printf("%c", str[i] + 4);
			}
		}
		else
		{
			printf("%c", str[i]);
		}
		i++;
	}
	
}