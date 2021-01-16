#include "MyGame.h"
#include "Examples.h"

#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <string>
#include <fstream>
#include <codecvt>

// Armor:  { L"Name", MatType, Prot, Dur, Descr };
// Weapon: { L"Name", MatType, WeapType, Dmg, Descr };

// ifstream - чтение, ofstream - запись

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

	Mob Hero(true, 0, 100);
	Mob Spider(false, 10, 100);
	Spider.Weapon = { L"Лапы паука", Cloth, Spear, 3, L"Острые шипы." };
		std::string str;
		std::wstring str2;

	std::ifstream File;
	File.open("REBUS.DAT");

	system("cls");

	if (!File.is_open())		
	{
		std::wcout << L"Ошибка открытия файла";
	}
	else
	{

		while (!File.eof())
		{
			str = "";
			std::getline(File, str);
			str2 = converter.from_bytes(str);
			//std::wcout << str2 << std::endl;
		}
	}
	File.close();

	std::ofstream fileof;
	fileof.open("REBUS.SOL");

	fileof << str;
	fileof.close();

	for (int i = 0; i < 25; i++)
	{
		std::cout << i/10;
		for (int k = 1; k < 80; k++) std::cout << k / 10;
		std::cout << std::endl;
	}

}
	