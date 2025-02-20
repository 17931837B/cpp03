/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:28:10 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:28:10 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
{
	this->name = "default";
	this->AttackDamage = 0;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	std::cout << "ClapTrap class create.\n";
}

ClapTrap::ClapTrap(std::string name) 
{
	this->name = name;
	this->AttackDamage = 0;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	std::cout << "ClapTrap " << name << " create.\n";
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << "ClapTrap " << this->name << " destroyed.\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy) 
{
	this->name = copy.name;
	this->AttackDamage = copy.AttackDamage;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) 
{
	if (this != &src)
	{
		this->name = src.name;
		this->AttackDamage = src.AttackDamage;
		this->HitPoint = src.HitPoint;
		this->EnergyPoint = src.EnergyPoint;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->HitPoint <= 0)
		std::cout << "ClapTrap " << this->name << " tried to attack. But, " << this->name << " is already dead.\n";
	else if (this->EnergyPoint <= 0)
		std::cout << "ClapTrap " << this->name << " tried to attack. But, " << this->name << " lacks EnergyPoint.\n";
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!\n";
		this->EnergyPoint--;
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->name << " took " << amount << " damage.\n";
	if (amount < 0 || amount > 2147483647)
	{
		std::cout << "ClapTrap " << amount << " wrong input\n";
		return ;
	}
	if (amount > this->HitPoint)
		this->HitPoint = 0;
	else
		this->HitPoint -= amount;
	if (!this->HitPoint)
	{
		std::cout << "ClapTrap " << this->name << " is died\n"; 
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0 || amount > 2147483647)
	{
		std::cout << "ClapTrap " << amount << " wrong input\n";
		return ;
	}
	else if (this->HitPoint <= 0)
		std::cout << "ClapTrap " << this->name << " tried to recover. But, " << this->name << " is already dead.\n";
	else if (this->EnergyPoint <= 0)
		std::cout << "ClapTrap " << this->name << " tried to recover. But, " << this->name << " lacks EnergyPoint.\n";
	else
	{
		if (amount + this->HitPoint > 10)
			this->HitPoint = 10;
		else
			this->HitPoint += amount;
		this->EnergyPoint--;
		std::cout << "ClapTrap " << this->name << " recovered from " << amount << " damage.\n";
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}
