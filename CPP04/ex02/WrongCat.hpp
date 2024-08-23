/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:00:26 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    /* Constructors */
    WrongCat();
    WrongCat(const WrongCat &other);
    
    /* Destructors */
    ~WrongCat();

    /* Oprators */
    WrongCat &operator=(const WrongCat &other);

    /* Member Functions */
    void makeSound() const;
};

#endif // WrongCat_HPP