/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:33:46 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:33:47 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define SLOTS 4

class   Character : public ICharacter
{
    private:

        std::string _name;
        AMateria*   _inventory[SLOTS];

    public:

        Character();
		Character( std::string const &name );
        Character( Character const &other );
        Character&  operator=( Character const &other );
        ~Character();

        std::string const	&getName() const;
		
        void	equip( AMateria *m );
		void	unequip( int idx );
		void	use( int idx, ICharacter &target );
};

#endif
