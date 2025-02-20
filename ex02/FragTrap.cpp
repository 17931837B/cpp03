/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:35:11 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:35:11 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
	this->HitPoint = 100;
	this->MaxHitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap class create.\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 100;
	this->MaxHitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << name << " create.\n";
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->name << " destroyed.\n";
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->name = copy.name;
	this->AttackDamage = copy.AttackDamage;
	this->HitPoint = copy.HitPoint;
	this->MaxHitPoint = copy.MaxHitPoint;
	this->EnergyPoint = copy.EnergyPoint;
}

FragTrap& FragTrap::operator=(const FragTrap& src) 
{
	if (this != &src)
	{
		this->name = src.name;
		this->AttackDamage = src.AttackDamage;
		this->MaxHitPoint = src.MaxHitPoint;
		this->EnergyPoint = src.EnergyPoint;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->HitPoint <= 0)
		std::cout << "FragTrap " << this->name << " tried to high-five. But, " << this->name << " is already dead.\n";
	else if (this->EnergyPoint <= 0)
		std::cout << "FragTrap " << this->name << " tried to high-five. But, " << this->name << " lacks EnergyPoint.\n";
	else
	{
		std::cout << "FragTrap " << this->name << "high-five!!!\n";
		this->EnergyPoint--;
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}
