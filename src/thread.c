/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:54:44 by msloot            #+#    #+#             */
/*   Updated: 2024/07/22 18:34:09 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t	create_thread(t_arg *arg)
{
	t_philo	*philo_array; //malloc that
	size_t	i;

	i = 0;
//	pthread_create(ober, NULL, X, X);
	while (i < philo->philo_amt)
	{
		// init philo struct
		pthread_create(philo[i].thread, NULL, running_philo, philo);
		i++;
	}

	// once once philo is dead, stop everything
}

void	running_philo(t_philo *philo)
{
	ft_putstr("eat\n");
}