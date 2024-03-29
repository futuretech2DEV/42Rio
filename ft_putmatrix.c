/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantess <lsantess@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:58:57 by lsantess          #+#    #+#             */
/*   Updated: 2022/02/12 23:17:58 by lsantess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <unistd.h>
#include <stdio.h>

const char box[10] = {"┌┐└┘├┤┼─│"};

/*




                ┌───┬───┬───┬───┐
                │C1U│C2U│C3U│C4U│
            ┌───┼───┼───┼───┼───┼───┐
            │R1L│   │   │   │   │R1R│
            ├───┼───┼───┼───┼───┼───┤
            │R2L│   │   │   │   │R2R│
            ├───┼───┼───┼───┼───┼───┤
            │R3L│   │   │   │   │R3R│
            ├───┼───┼───┼───┼───┼───┤
            │R4L│   │   │   │   │R4R│
            └───┼───┼───┼───┼───┼───┘
                │C1D│C2U│C3U│C4D│
                └───┴───┴───┴───┘

                ┌───┬───┬───┬───┐
                │ 4 │ 3 │ 2 │ 1 │
            ┌───┼───┼───┼───┼───┼───┐
            │ 4 │ 1 │ 2 │ 3 │ 4 │ 1 │
            ├───┼───┼───┼───┼───┼───┤
            │ 3 │ 2 │ 3 │ 4 │ 1 │ 2 │
            ├───┼───┼───┼───┼───┼───┤
            │ 2 │ 3 │ 4 │ 1 │ 2 │ 2 │
            ├───┼───┼───┼───┼───┼───┤
            │ 1 │ 4 │ 1 │ 2 │ 3 │ 2 │
            └───┼───┼───┼───┼───┼───┘
                │ 1 │ 2 │ 2 │ 2 │
                └───┴───┴───┴───┘

*/

int ft_putmatrix(char *obj) {

int i;
int j;
int k;
char letter = 'A';

i = 0;
j = 0;
k = 0;

char matrix[4][4];



while (i < 4)
{
    j = 0;
    while (j < 4)
    {
        matrix[i][j] = obj[k];
        j++;
        k++;
    }
i++;
}


for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++){
        printf("%c", matrix[i][j]);
    }
printf("\n");
}

return(0);

}
