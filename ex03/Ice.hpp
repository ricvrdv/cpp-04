/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:34:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:34:24 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
    
        Ice();
        Ice( Ice const &other );
        Ice&    operator=( Ice const &other );
        ~Ice();

        AMateria*   clone() const;
        void    use( ICharacter &target );
};

#endif
