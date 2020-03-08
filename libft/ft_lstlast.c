/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:06:37 by daelee            #+#    #+#             */
/*   Updated: 2020/03/08 13:32:34 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      ft_lstlast(t_list *lst)
{
        if (lst == NULL)
                return (NULL);
	while (lst->next != NULL)
                lst = lst->next;
	return (lst);
}