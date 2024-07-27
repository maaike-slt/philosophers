/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   running_philo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:24:47 by msloot            #+#    #+#             */
/*   Updated: 2024/07/27 15:06:49 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	running_philo(t_philo *philo, t_manager manager)
{
	philo->start_time = get_current_time();
	philo->last_meal = get_current_time();
	philo->meals_eaten = 0;
	philo->manager = &manager;
	(void)philo;
	write(STDOUT_FILENO, "eat\n", 4);
	philo->last_meal = get_current_time();
	usleep(4200);
	philo->meals_eaten++;
	philo->manager->stop = true;
}