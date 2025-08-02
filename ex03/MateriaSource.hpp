/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:19:47 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 18:19:49 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define MAX 4

class MateriaSource : public IMateriaSource
{
    private:

		AMateria*	_templates[MAX];

	public:

        MateriaSource();
        MateriaSource( MateriaSource const &other );
        MateriaSource&	operator=( MateriaSource const &other );
        virtual ~MateriaSource();

		void	learnMateria( AMateria* m );
		AMateria*	createMateria( std::string const &type );
};

#endif
