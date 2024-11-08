/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/11/05 14:29:10 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

class Cat : virtual public Animal {
public:
    /* Constructors */
    Cat();
    Cat(const Cat &other);
    
    /* Destructors */
    ~Cat();

    /* Oprators */
    Cat &operator=(const Cat &other);

    /* Member Functions */
    void makeSound() const;
};

#endif // Cat_HPP