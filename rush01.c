/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantess <lsantess@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:45:18 by lsantess          #+#    #+#             */
/*   Updated: 2022/02/12 22:47:17 by lsantess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"
#include <stdio.h>

int main(int argc, char **argv) {
int loader;
char clues[16];

loader = 0;
loader = ft_sanitize(argc, argv[1], clues);
loader = ft_putmatrix(clues);

return(loader);
}
