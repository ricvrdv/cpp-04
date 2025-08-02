/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:06:28 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 18:06:31 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>

class AMateria;

class	IMateriaSource
{
	public:

		virtual ~IMateriaSource() {};
		virtual void	learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const &type ) = 0;
};

#endif