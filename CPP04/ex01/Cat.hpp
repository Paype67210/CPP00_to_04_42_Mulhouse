/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 15:08:16 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
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
    void put_idea(std::string newIdea);
    void print_ideas() const;

private:
    Brain *_brain;
};

#endif // Cat_HPP