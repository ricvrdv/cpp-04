/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:05:52 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/04 12:05:53 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class   Fire : public AMateria
{
    public:
    
        Fire();
        Fire( Fire const &other );
        Fire&    operator=( Fire const &other );
        virtual ~Fire();

        AMateria*   clone() const;
        void    use( ICharacter &target );
};

#endif
