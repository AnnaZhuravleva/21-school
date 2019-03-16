/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 12:54:59 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 12:58:29 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
  t_btree *btree;
  btree = (t_btree *)malloc(sizeof(btree));
	if (btree)
	{
		btree->left = 0;
		btree->right = 0;
		btree->item = item;
	}
	return (btree);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->right;
    ft_putstr(list->data);
	}
void printtree(t_btree *root, int space)
{
    
    int i;
    i = 0;

    // Base case
    if (root == NULL)
        return;
    // Increase distance between levels
    space += i;
    // Process right child first
    //printtree(root->right, space);
    // Print current node after space
    // count
    printf("\n");
    while (i < space)
        printf(" ");
        i++;
    printf("%s\n", root->item);
    // Process left child
    printtree(root->left, space);
   // printf("%s\n", root->item);
}



void btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
  if (!root)
    return;
  (*applyf)(root->item);
  btree_apply_prefix(root->left, applyf);
  btree_apply_prefix(root->right, applyf);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, applyf);
}

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}


int main()
{
  t_btree *root;
  root = btree_create_node("111");
  root->left = btree_create_node("3");
  root->right = btree_create_node("5");
  
  
  printlist(root);
  return (0);
}