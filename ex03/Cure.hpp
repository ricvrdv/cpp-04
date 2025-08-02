/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:34:01 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:34:03 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
    
        Cure();
        Cure( Cure const &other );
        Cure&    operator=( Cure const &other );
        ~Cure();

        AMateria*   clone() const;
        void    use( ICharacter &target );
};

#endif
