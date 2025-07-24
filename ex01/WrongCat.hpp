/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:37:32 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/23 15:38:54 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
    public:

        WrongCat( void );
        WrongCat( WrongCat const &other );
        WrongCat&    operator=( WrongCat const &other );
        ~WrongCat( void );

        void    makeSound( void ) const;
};

#endif
