/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantess <lsantess@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:45:18 by lsantess          #+#    #+#             */
/*   Updated: 2022/02/12 18:46:38 by lsantess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"

int main(int argc, char **argv) {
int loader;

loader = 0;

loader = ft_sanitize(argc, argv[1]);

return(loader);
}