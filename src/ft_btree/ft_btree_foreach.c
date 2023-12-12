/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_foreach.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:52:22 by vtestut            #+#    #+#             */
/*   Updated: 2023/06/12 17:56:10 by vtestut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_btree_foreach(t_ft_btree_node *tree,
	void (*f)(t_ft_btree_node_type, void *))
{
	if (!tree)
		return ;
	f(tree->type, tree->content);
	ft_btree_foreach(tree->first, f);
	ft_btree_foreach(tree->second, f);
}
