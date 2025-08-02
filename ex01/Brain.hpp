/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:22:51 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:22:56 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	private:

		std::string	ideas[100];

	public:

		Brain( void );
		Brain( Brain const &other );
		Brain&	operator=( Brain const &other );
		~Brain( void );

		std::string	getIdea( int index ) const;
		void		setIdea( int index, const std::string& idea );
};

#endif
