/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:26:10 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/25 11:50:01 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_factorial(int nb);

int main(){

	return 0;
}

int ft_iterative_factorial(int nb){
	int prod;
	prod = 1;
	if(nb >= 0){
		if(nb == 0){
			return 1;
		}
		else{
			while(nb > 1){
				prod = prod*nb;
				nb--;
			}
		}

	}
	else{
		return 0;
	}
	return prod;
}

