
#include <stdio.h>
void main()
{
  int i=0,count=0;
  char s[1000];
  printf("Enter a string: ");
  gets(s);
  while (s[i] != '\0') {
    if (s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
    {
        count++;
    }
    i++;
  }
  printf("No. of vowels in the string: %d", count);
}
