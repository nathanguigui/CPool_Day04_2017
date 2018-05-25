/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** 
*/

char *my_evil_str(char *str)
{
	int n;				//nombre de carac
	int k;				//nombre de lettre proceed
	char temp_c;
	char *nouvelle;
	nouvelle = str;
	n = 0;
	k = 0;

	while (str[n] != '\0')		//on compte n
	{
		n = n + 1;
	}

	while (n - k > k)		//tant que on est pas a la moitie
	{
		temp_c = str[k];
		nouvelle[k] = str[n - k];
		nouvelle[n - k] = temp_c;
		k = k + 1;
	}

	if (n - k == k)			//traitement nombre impair
	{
		nouvelle[k] = str[k];
	}
	return (nouvelle);
	
}
