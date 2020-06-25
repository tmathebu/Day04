/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:46:45 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/25 12:11:00 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_factorial(int nb);

int main(){
	
	return 0;
}


int ft_recursive_factorial(int nb){
	int prod;
	if(nb >= 0){
		if(nb == 0){
			return 1;
		}
		else{
				prod = nb * ft_recursive_factorial(nb - 1);
			}
		}
	else{
		return 0;
	}
	return prod;

}
