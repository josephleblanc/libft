/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 07:25:30 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/15 07:27:25 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *newest_lst;
	t_list *output;

	if (!lst)
		return (NULL);
	if (lst)
	{
		if (!(new_lst = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		new_lst = f(new_lst);
		output = new_lst;
	}
	while (lst->next)
	{
		lst = lst->next;
		if (!(newest_lst = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		newest_lst = f(newest_lst);
		new_lst->next = newest_lst;
		new_lst = new_lst->next;
	}
	return (output);
}
