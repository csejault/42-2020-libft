
#include "libft.h"

static int count_z (unsigned long nbr)
{
	int z;

	z = 16;
	while (nbr)
	{
		nbr /=16;
		z--;
	}
	return (z);
}

static char *us_fill_ret(unsigned long nbr, int i, int trunc)
{
	char			*ret;
	char			*base;
	int				mal_0x;

	base = "0123456789abcdef";
	mal_0x = 0;
	if (trunc)
		mal_0x = 2;
	i += mal_0x;
	ret = malloc(sizeof(*ret) * (i + 1));
		if (!ret)
			return (NULL);
	if (trunc)
		ft_memcpy(ret, "0x", 2);
	ret[i] = '\0';
	while (i > mal_0x)
	{
		i--;
		ret[i] = base[nbr % 16];
		nbr /= 16;
	}
	return (ret);
}

char *ftus_ptohexa (unsigned long nbr)
{
	char			*ret;
	int				i;

	ret = NULL;
	i = 16;
	if (!nbr)
		return (ftus_strdup("0x0"));
	i -= count_z(nbr);
	if (i >=14)
		ret = us_fill_ret(nbr, i, 0);
	else
		ret = us_fill_ret(nbr, i, 1);
	return (ret);
}
