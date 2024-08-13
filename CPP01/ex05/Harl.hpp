/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:11:59 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 11:26:47 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>  

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level) const;
    private:
        void debug() const;
        void info() const;
        void warning() const;
        void error() const;
};

#endif
