/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:35:46 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:35:46 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	this->HitPoint = 100;
	this->MaxHitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap class create.\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 100;
	this->MaxHitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << name << " create.\n";
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->name << " destroyed.\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->name = copy.name;
	this->AttackDamage = copy.AttackDamage;
	this->HitPoint = copy.HitPoint;
	this->MaxHitPoint = copy.MaxHitPoint;
	this->EnergyPoint = copy.EnergyPoint;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) 
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

void ScavTrap::guardGate(void)
{
	if (this->HitPoint <= 0)
		std::cout << "ScavTrap " << this->name << " tried to guardGate. But, " << this->name << " is already dead.\n";
	else if (this->EnergyPoint <= 0)
		std::cout << "ScavTrap " << this->name << " tried to guardGate. But, " << this->name << " lacks EnergyPoint.\n";
	else
	{
		std::cout << "ScavTrap " << this->name << " has entered gate guard mode.\n";
		this->EnergyPoint--;
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->HitPoint <= 0)
		std::cout << "ScavTrap " << this->name << " tried to attack. But, " << this->name << " is already dead.\n";
	else if (this->EnergyPoint <= 0)
		std::cout << "ScavTrap " << this->name << " tried to attack. But, " << this->name << " lacks EnergyPoint.\n";
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!\n";
		this->EnergyPoint--;
	}
	std::cout << "[" << this->name << "]" << " HP:" << this->HitPoint << " EP:" << this->EnergyPoint << "\n";
}
