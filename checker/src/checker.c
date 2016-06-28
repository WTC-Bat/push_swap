/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 16:04:36 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/06/28 17:16:41 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../includes/checker.h"

static int		args_valid(int argc, char **argv)
{
	int		scnt;
	int		ccnt;

	if (argc < 3)
	{
		ft_putendl_fd("Too few arguments", 2);
		return (0);
	}
	scnt = 1;
	ccnt = 0;
	while (argv[scnt] != NULL)
	{
		while (argv[scnt][ccnt] != '\0')
		{
			if (ft_isdigit(argv[scnt][ccnt]) == 0)
			{
				ft_putendl_fd("Arguments must be numeric", 2);
				return (0);
			}
			ccnt++;
		}
		ccnt = 0;
		scnt++;
	}
	return (1);
}

static t_stacks	stacks_init(int argc, char **argv)
{
	int			cnt;
	t_stacks	stacks;

	cnt = 0;
	stacks.stack_a = (int *)malloc(sizeof(int) * (argc - 1));
	stacks.stack_b = (int *)malloc(sizeof(int) * (argc - 1));
	if (stacks.stack_a == NULL || stacks.stack_b == NULL)
	{
		ft_putendl_fd("Unable to malloc stacks", 2);
		exit(1);
	}
	stacks.stack_a_len = (argc - 1);
	stacks.stack_b_len = 0;
	while (cnt < stacks.stack_a_len)
	{
		stacks.stack_a[cnt] = ft_atoi(argv[cnt + 1]);
		cnt++;
	}
	return (stacks);
}

/*
static char		**get_operations()
{
	char	**ops;
	int		cnt;

	cnt = 0;
	while (get_next_line(1, &*ops) != 0 )
	{
		ft_putendl(*ops);
		ops++;
		cnt++;
	}
	ops -= cnt;
	return (ops);
}
*/

static char		**get_operations()
{
	int		b;
	char	*buffer;

	while (b = read(0, buffer, CHK_BUFF) > 0)
	{
		
	}	
}

int				main(int argc, char **argv)
{
	t_stacks	stacks;
	int			cnt;

	if (args_valid(argc, argv) == 0)
		exit(1);
	stacks = stacks_init(argc, argv);
	return (0);
}
