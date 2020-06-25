/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:12:18 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/25 12:55:55 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_power(int nb, int power);

int main(){
	int j;
	int p;
	int k;
	scanf(" %d",&j);
	scanf("%d",&p);
	k = ft_iterative_power(j, p);
	printf("%d", k);
	printf("%c",'\n');
		return 0;
}


int ft_iterative_power(int nb, int power){
	int i;
	int v;
	i = power;
	v = 1;
	while(i >= 1){
		v *= nb;
	   i--;	
	}
	return v;
}
