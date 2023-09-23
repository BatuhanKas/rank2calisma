#include <stdio.h>
/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/

int tolower(int c)
{
	if(c>='A'&&c<='Z')
		c = c+32;
	return c;
}
int ft_strlen(char *s)
{
	int i=0;
	while(s[i])
		i++;
	return i;
}
int power(int a, int b)
{
		if(b==0)
		return 1;
	while(--b)
		a*=a;

	return a;
}

int	ft_atoi_base(char *s,int base)
{
	char *numbers="0123456789abcdef";
	
	int i=0,j=0, r=0,l=ft_strlen(s)-1;
	while(s[i])
	{
		j=0;
		while(numbers[j] && (l >= 0))
		{
			if(tolower(s[i])==numbers[j])
			{
				if(tolower(s[i])=='a')
					r+=10*power(base,l);
				else if(tolower(s[i])=='b')
					r+=11*power(base,l);
				else if(tolower(s[i])=='c')
					r+=12*power(base,l);
				else if(tolower(s[i])=='d')
					r+=13*power(base,l);
				else if(tolower(s[i])=='e')
					r+=14*power(base,l);
				else if(tolower(s[i])=='f')
					r+=15*power(base,l);
				else
					r+=(s[i]-'0')*(power(base,l));
				printf("%i %i\n",(power(base,l)),r);
				l--;
			}
			j++;
		}
		i++;
	}
	return r;
}
int main(int c,char **av)
{
	int i=1;
	while(av[i])
	{
			printf("%i",ft_atoi_base(av[i],10));

		i++;
	}
}