/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 18:21:25 by awsall            #+#    #+#             */
/*   Updated: 2026/07/13 14:12:47 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_nbr(int n)
{
	char	c;

	c = n;
	if (n <= 9) 
	{
		c += 48;
		write(1, &c, 1);
	}
	else
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz\n", 9);
		}
		else if (i % 3  == 0)
		{
			write (1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz\n", 5);
		} 
		else
		{
			put_nbr(i);
			write (1, "\n", 1);
		}
		i++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}	
