/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:06:50 by yshimoma          #+#    #+#             */
/*   Updated: 2024/06/22 19:51:45 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_HPP__
#define __CLAP_TRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {
   public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    const std::string& getName() const;
    void setName(const std::string& name);
    int getHitPoints() const;
    void setHitPoints(const int hitPoints);
    int getEnergyPoints() const;
    void setEnergyPoints(const int energyPoints);
    int getAttackDamage() const;
    void setAttackDamage(const int attackDamage);

   private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& clapTrap);

#endif
