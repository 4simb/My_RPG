#pragma once
#include <string.h>
#include <iostream>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD coord = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

typedef unsigned short int usi;

enum MaterialType { NonMat, Cloth, Leather, Wood, Stone };
enum ArmorType { NonArmor, Helmet, Breastplate, Leggings, Shield };
enum WeaponType { NonWeap, Sword, HeavySword, Spear, Axe };
enum PersType { Hero, Enemy, NPC };

class Armor        //======== Class Armor ========//
{
private:

public:
	std::wstring Name;
	MaterialType MatType;
	usi Protection;
	usi Durability;
	std::wstring Description;
};

class Weapon       //======== Class Weapon =======//
{
private:

public:
	std::wstring Name;
	MaterialType MatType;
	WeaponType WeapType;
	usi Damage;
	std::wstring Description;
};

class Mob          //======== Class Mob ==========//
{
private:
	bool Hero;
	std::wstring MobName;
	usi HP;
	usi Level;

public:
	Mob()
	{
		Hero = false;
		HP = 20;
		Level = 0;
	}
	Mob(bool NewHero, usi NewLevel, usi NewHP)
	{
		Hero = NewHero;
		HP = NewHP;
		Level = NewLevel;
	}

	Armor Helmet;
	Armor Breastplate;
	Armor Leggings;
	Armor Shield;
	Weapon Weapon;

	usi GetHP();
	usi GetLevel();
	std::wstring GetName();

	bool is_hero();
	bool is_alive();

	void SetName(std::wstring NewName);
	void SetHP(usi DD);
	void SetLevel(usi NewLevel);


	/*void SetHelmet(Armor Item);
	void SetBreastplate(Armor Item);
	void SetLeggings(Armor Item);
	void SetShield(Armor Item);
	void SetWeapon(Weapon NewWeapon);*/
	/*std::wstring GetHelmetName();
	std::wstring GetBreastplateName();       //
	std::wstring GetLeggingsName();
	std::wstring GetShieldName();
	std::wstring GetWeaponName();*/
};

#include "MyGame.hpp"