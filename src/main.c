/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:52:51 by msloot            #+#    #+#             */
/*   Updated: 2024/10/02 21:36:48 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// fix leaks
// watch videos on mutex in C

int	main(int argc, char *argv[])
{
	t_arg	arg;

	if (argc != 5 && argc != 6)
		return (ft_puterr("wrong amount of arguments, 4 or 5 are needed\n"), 1);
	if (!parse(argc, argv, &arg))
		return (1);
	//	handle one philo
	if (!create_thread(&arg))
		return (1);
	return (0);
}
