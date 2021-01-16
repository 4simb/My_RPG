#pragma once
#include "MyGame.h"

typedef unsigned short int usi;

std::wstring Mob::GetName() { return MobName; }
usi Mob::GetHP() { return HP; }
usi Mob::GetLevel() { return Level; }

void Mob::SetName(std::wstring NewName)
	{ MobName = NewName; }

void Mob::SetHP(usi NewHP)
	{ HP = NewHP; }

void Mob::SetLevel(usi NewLevel)
	{ Level = NewLevel; }

bool Mob::is_hero() { return Hero; }
bool Mob::is_alive() { if (HP > 0) return true; else return false; }

/*void Mob::SetHelmet(Armor Item)
{
	Helmet.Name = Item.Name;
	Helmet.Durability = Item.Durability;
	Helmet.Protection = Item.Protection;
	Helmet.MatType = Item.MatType;
}

void Mob::SetBreastplate(Armor Item)
{
	Breastplate.Name = Item.Name;
	Breastplate.Durability = Item.Durability;
	Breastplate.Protection = Item.Protection;
	Breastplate.MatType = Item.MatType;
}

void Mob::SetLeggings(Armor Item)
{
	Leggings.Name = Item.Name;
	Leggings.Durability = Item.Durability;
	Leggings.Protection = Item.Protection;
	Leggings.MatType = Item.MatType;
}

void Mob::SetShield(Armor Item)
{
	Shield.Name = Item.Name;
	Shield.Durability = Item.Durability;
	Shield.Protection = Item.Protection;
	Shield.MatType = Item.MatType;
}

void Mob::SetWeapon(Weapon Item)
{
	PersWeapon.Name = Item.Name;
	PersWeapon.Damage = Item.Damage;
	PersWeapon.MatType = Item.MatType;
	PersWeapon.WeapType = Item.WeapType;
}*/
/*std::wstring Mob::GetHelmetName() { return Helmet.Name; }
std::wstring Mob::GetBreastplateName() { return Breastplate.Name; }
std::wstring Mob::GetLeggingsName() { return Leggings.Name; }
std::wstring Mob::GetShieldName() { return Shield.Name; }
std::wstring Mob::GetWeaponName() { return PersWeapon.Name; }*/