#include<stdio.h>
#include<string.h>
int main()
{
	int team = 1, comet = 1;
	char team_s[10], comet_s[10];
	gets(comet_s);
	gets(team_s);
	for (int i = 0; i < strlen(comet_s); i++)
	{
		comet *= (comet_s[i] - 64);
	}
	for (int j = 0; j < strlen(team_s); j++)
	{
		team *= (team_s[j] - 64);
	}
	if (team % 47 == comet % 47)
		puts("GO");
	else
		puts("STAY");
	return 0;
}