/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:02:04 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 13:44:45 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int				ft_putchar(int c);
size_t			ft_strlen(const char *s);
int				ft_print_str(char *s);
int				ft_printf(char const *str, ...);
int				ft_base_10(int n);
unsigned int	ft_nosign(unsigned int n);
int				ft_hex_may(unsigned long long n);
int				ft_hex_min(unsigned long long n);
int				ft_print_ptr(void *p);

#endif