/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:47 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/16 14:00:06 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define EXIT_FAIL 1
# define EXIT_SUCCESS 0
# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	int				index;
}					t_node;

void				ft_lstadd_back(t_node **lst, t_node *new);
t_node				*ft_lstnew(int content);
t_node				*ft_lstlast(t_node *list);
int					ft_lstsize(t_node *lst);
void				ft_lstclear(t_node **lst);

t_node				*parse_args(char *arg);
long				ft_strtol(const char *str, char **endptr);
char				*ft_strjoin(int size, char **strs, char *sep);

unsigned long		validate_numbers(char *arg);
int					has_duplicate(t_node **head, int value);
void				error_msg_fail(char **str);

void				ft_swap_a(t_node **stack);
void				ft_push_a(t_node **from, t_node **to);
void				ft_rotate_a(t_node **stack);
void				ft_reverse_rotate_a(t_node **stack);

void				ft_push_b(t_node **from, t_node **to);

int					ft_stacks_init(t_node **stack_a, t_node **stack_b,
						char **args);

void				sort_stacks(t_node **stacka, t_node **stackb, int size);
void				sort_big(t_node **a, t_node **b, int size);
void				sort_small(t_node **a);
void				sort_fiveorfour(t_node **a, t_node **b);

#endif