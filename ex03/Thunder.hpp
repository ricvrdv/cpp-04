/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Thunder.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:54:24 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/04 11:54:26 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUNDER_HPP
# define THUNDER_HPP

# include "AMateria.hpp"

class   Thunder : public AMateria
{
    public:
    
        Thunder();
        Thunder( Thunder const &other );
        Thunder&    operator=( Thunder const &other );
        virtual ~Thunder();

        AMateria*   clone() const;
        void    use( ICharacter &target );
};

#endif
