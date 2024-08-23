/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:52:04 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 12:55:07 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	/* Destructors */
	virtual ~MateriaSource();
		
	/* Constructors */
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	
	/* Operators */
	MateriaSource &operator=(const MateriaSource &other);
	
	/* Getters & Setters */
	AMateria *getStock(int idx) const;
	void setStock(int idx, AMateria *materia);
	
	/* Members functions */
	virtual void learnMateria(AMateria *materia);
    virtual AMateria* createMateria(std::string const &type);
	 
private:
	AMateria *_stock[4];
};

#endif // MateriaSource_HPP