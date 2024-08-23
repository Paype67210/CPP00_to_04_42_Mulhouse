/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:47:06 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 14:58:48 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class Brain {
public:
    /* Constructors */
    Brain();
    Brain(const Brain &other);

/* Destructor */
    ~Brain();
    
    /* Operators */
    Brain &operator=(const Brain &other);
    
    /* Getters */
    std::string getIdea(const unsigned int index) const;
    
    /* Setters */
    void setIdea(unsigned int index, std::string idea);
    
private:
    std::string _ideas[100];
};

#endif // Brain_HPP
