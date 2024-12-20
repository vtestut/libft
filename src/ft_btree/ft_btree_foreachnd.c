/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_foreachnd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:56:46 by vtestut            #+#    #+#             */
/*   Updated: 2023/06/12 17:58:35 by vtestut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_bree_foreachnd(t_ft_btree_node *tree, void (*f)(t_ft_btree_node *))
{
	if (!tree)
		return ;
	f(tree);
	ft_bree_foreachnd(tree->first, f);
	ft_bree_foreachnd(tree->second, f);
}
