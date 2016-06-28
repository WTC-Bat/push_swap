/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 16:15:20 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/06/28 17:04:43 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define CHK_BUFF 5

typedef struct	s_stacks
{
	int			*stack_a;
	int			*stack_b;
	int			stack_a_len;
	int			stack_b_len;	
}				t_stacks;

#endif
