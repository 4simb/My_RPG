#pragma once
#include "MyGame.h"

//========= { L"Name", std::wstring Material type, usi Protection, usi Durability } =========//

//=================== {       L"Name",   MatType, Protection, Durability, Description } ===============//
//=================== { L"Name",   MatType,  WeapType,  Damage,  Description } ========================//

Armor ClothHelmet   = { L"Кепка",             Cloth,   1, 25, L"Белая бейсболка." };
Armor LeatherHelmet = { L"Кожанная шапка",    Leather, 3, 40, L"Простая кожанная шапка, хорошо защищает от ветра." };
Armor WoodenHelmet  = { L"Деревянный шлем",   Wood,    5, 60, L"Крепкий деревянный шлем." };
Armor StoneHelmet   = { L"??Каменный шлем??", Stone,   6, 100, L"Как до этого вообще додумались? Выточить шлем из камня? Ну и ну." };

Armor ClothBreatsplate   = { L"Тряпичная майка",       Cloth,   1, 30, L"Потрепанная майка." };
Armor LeatherBreatsplate = { L"Кожанная куртка",       Leather, 3, 45, L"Байкерская куртка." };
Armor WoodenBreatsplate  = { L"Деревянный нагрудник",  Wood,    5, 65, L"Нагрудник, связанный из прочных прутьев сосны." };
Armor StoneBreatsplate   = { L"??Каменный нагрудик??", Stone,   6, 105, L"Ох..." };

Armor ClothLeggings   = { L"Шорты",                   Cloth,   1, 25, L"Простые шорты, плохо защищают даже от комаров." };
Armor LeatherLeggings = { L"Кожанные штаны",          Leather, 3, 40, L"Байкерские штаны." };
Armor WoodenLeggings  = { L"Штаны из березовый коры", Wood,    5, 60, L"Сшиты из плотных слоев бересты." };
Armor StoneLeggings   = { L"??Каменный штаны??",      Stone,   6, 100, L"Не мое конечно дело,.. но как ты их собираешься носить?" };

Armor ClothShield  = { L"Белый флаг", Cloth, 0, 10, L"Подойдет для защиты от французов." };
Armor WoodenShield = { L"Деревянный щит", Wood, 6, 35, L"Добротный щит, выдержит не одно попадание." };
Armor StoneShield  = { L"Каменный щит", Stone, 10, 45, L"Увесистый булыжник, разве что довольно хрупкий." };

Weapon Arms = { L"Руки", NonMat, NonWeap, 5, L"Крепкие мужские руки." };
Weapon ClothSword = { L"Тряпичный меч", Cloth, Sword, 2, L"Больше похож на воздушного змея." };
Weapon WoodenSword = { L"Деревянный меч", Wood, Sword, 7, L"Детский деревянный меч." };
Weapon StoneSword = { L"Каменный меч", Stone, HeavySword, 12, L"Большая. Каменная. Дубина." };