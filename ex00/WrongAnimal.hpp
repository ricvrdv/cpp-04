/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:35:38 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/23 15:36:52 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
    protected:

        std::string type;

    public:

        WrongAnimal( void );
        WrongAnimal( WrongAnimal const &other );
        WrongAnimal&	operator=( WrongAnimal const &other );
        virtual	~WrongAnimal( void );

        void        makeSound( void ) const;
        std::string getType( void ) const;
};

#endif
