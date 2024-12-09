/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maga <mtmpfb@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:27:20 by mde-maga          #+#    #+#             */
/*   Updated: 2024/12/09 18:05:48 by mde-maga         ###   ########.fr       */
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

static char *message(void)
{
	char *path;

	path = get_env("HOME"); // dont forget to create get_env
	if(!path)
	{
		ft_putstr_fd("bash: cd: HOME not set\n", 2);
		exit_status(1); // make exit_status
		return NULL;
	}
	return (path);
}

void change_directory(char **cmd)
{
	char s[PATH_MAX];
	char new[PATH_MAX];
	char *path;
	char *old_pwd;

	if(!cmd[1])
		
}