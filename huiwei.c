#include<stdio.h>
#include<string.h>
int fun(char *s)
{
	int i, n;
	i = strlen(s);
	i--;
	for (n = 0; n <= i&&s[n] == s[i]; i--, n++)
	{

		return 1;
	}
	return 0;

}
void main()
{
	char a[80];
	gets_s(a, 80);
	if (fun(a))
		printf("是回文数\n");
	else
		printf("不是回文数\n");
}
