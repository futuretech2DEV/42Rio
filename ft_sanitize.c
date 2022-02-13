/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sanitize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantess <lsantess@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:47:00 by lsantess          #+#    #+#             */
/*   Updated: 2022/02/12 19:43:05 by lsantess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"
#include <stdio.h>

int ft_verify_parameters(int counter, char *values)
{
int i;

i = 0;

if (counter != 2) {
    write(1, "Error\n", 6);
    return(11);
}

while (values[i]){

    if (values[i] != ' ' && (values[i] < '1' || values[i] > '4'))
    {
        write(1, "Error\n", 6);
        return(12);
    }
i++;
}

if (i != 31)
{
        write(1, "Error\n", 6);
        return(13);
}
return(0);
}

int ft_verify_numbers(char *values)
{
    int one;
    int two;
    int three;
    int four;
    int counter = 0;

    one = 0;
    two = 0;
    three = 0;
    four = 0;
    counter = 0;

    while (values[counter])
    {
        if (values[counter] == '1')
            one++;
        else if (values[counter] == '2')
            two++;
        else if (values[counter] == '3')
            three++;
        else if (values[counter] == '4')
            four++;

        counter++;
    }

    if (one > 4 || two > 4 || three > 4 || four > 4)
    {
        write(1, "Error\n", 6);
        return(14);
    }

    return(0);
}

int ft_done_sanitize(char *values, char *obj)
{
int i, j;

i = 0;
j = 0;

while(values[i]) {
if (values[i] != ' '){
    obj[j] = values[i];
    j++;
    }
i++;
}

return(0);
}

int ft_sanitize(int counter, char *values, char *obj) {

int loader;

loader = 0;

if ((loader = ft_verify_parameters(counter, values)) > 0)
    return(loader);
if ((loader = ft_verify_numbers(values)) > 0)
    return(loader);
if ((loader = ft_done_sanitize(values, obj)) > 0)
    return(loader);

return(0);
}
