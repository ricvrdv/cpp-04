/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:10:31 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:12:09 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
    public:

        Dog( void );
        Dog( Dog const &other );
        Dog&    operator=( Dog const &other );
        ~Dog( void );
        
        void    makeSound( void ) const;
};

#endif
