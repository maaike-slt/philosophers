/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:52:51 by msloot            #+#    #+#             */
/*   Updated: 2024/07/24 22:16:56 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_arg	arg;

	if (argc != 5 && argc != 6)
		return (ft_puterr("wrong amount of arguments, 4 or 5 are needed\n"), 1);
	parse(argc, argv);
	create_thread(&arg);
}
