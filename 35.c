#include <stdio.h>

void main()
{

	char s1[100],s2[100],s3[100];
	int i = 0, j = 0;
	printf("\nEnter First string: ");
	scanf("%s",&s1);
	printf("\nEnter Second string: ");
	scanf("%s",&s2);
	while (s1[i] != '\0')
    {
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0') {
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	printf("\nConcatenated string: %s", s3);
}
