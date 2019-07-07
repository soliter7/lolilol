int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nbr)
{
	if (nbr < 2)
		return (2);
	while (!ft_is_prime(nbr))
		nbr++;
	return (nbr);
}
