/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 01:48:25 by yshimoma          #+#    #+#             */
/*   Updated: 2024/09/04 16:28:20 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP
#define __CHARACTER_HPP

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : ICharacter {
	public:
		Character();
		Character(const std::string& name);
		Character(Character& other);
		Character& operator=(const Character& other);
		~Character();
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
	private:
		std::string _name;
		AMateria* _materia[4];
};

#endif
