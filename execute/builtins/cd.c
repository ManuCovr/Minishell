/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maga <mtmpfb@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:27:20 by mde-maga          #+#    #+#             */
/*   Updated: 2024/12/09 17:41:43 by mde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

static void cd_error_manager(void)
{
	ft_putstr_fd("cd: Error retrieving current directory: ", 2);
	ft_putstr_fd("Cannot access parent directories: ", 2);
	ft_putstr_fd("No such file or directory\n", 2);
	exit_status(1);
}