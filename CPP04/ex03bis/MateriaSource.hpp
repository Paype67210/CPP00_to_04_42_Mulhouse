/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:28 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 13:55:44 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource &copy);

	// Destructor
  virtual ~MateriaSource();

	// Operators
	MateriaSource &operator=(MateriaSource other);
	void swap(MateriaSource &first, MateriaSource &second);

	// Getters & Setters
	AMateria *getMemory(int idx) const;
	void setMemory(int idx, AMateria *materia);

	// Functions
  virtual void learnMateria(AMateria *materia);
  virtual AMateria *createMateria(std::string const& type);

 private:
	AMateria *memory_[4];
};

#endif