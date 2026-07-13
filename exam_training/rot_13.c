/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:03:19 by awsall            #+#    #+#             */
/*   Updated: 2026/07/11 16:25:20 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot_13(char *str)
{
	int		i;
	char	roted;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		roted = str[i];
	if ((str[i] >= 'a') && (str[i] <= 'm'))
		{
			roted = str[i] + 13;
		}
	else if ((str[i] >= 'A') && (str[i] <= 'M'))
		{
			roted = str[i] + 13; // o roted += 13;
		}
	else if ((str[i] >= 'n') && (str[i] <= 'z'))
		{
			roted = str[i] - 13; // roted -= 13;
		}
	else if ((str[i] >= 'N') && (str[i] <= 'Z'))
		{
			roted = str[i] - 13;
		}
		str[i] = roted;
		i++;
	}
	return (str);
}
/*
int	main(char *str)
{
	char	rslt;

	rslt = ft_rot_13("abced");
	return (rslt);

}*
