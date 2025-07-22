/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:12:24 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:13:10 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
    public:

        Cat( void );
        Cat( Cat const &other );
        Cat&    operator=( Cat const &other );
        ~Cat( void );
        
        void    makeSound( void );
};

#endif
