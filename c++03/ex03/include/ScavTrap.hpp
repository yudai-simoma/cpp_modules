/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 02:34:59 by yshimoma          #+#    #+#             */
/*   Updated: 2024/06/26 21:16:19 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
   public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();

   protected:
    static const unsigned int SCAVTRAP_DEFAULT_HIT_POINTS = 100;
    static const unsigned int SCAVTRAP_DEFAULT_ENERGY_POINTS = 50;
    static const unsigned int SCAVTRAP_DEFAULT_ATTACK_DAMAGE = 20;

   private:
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& scavTrap);

#endif
