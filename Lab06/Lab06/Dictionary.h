#pragma once 
#include <iostream>
#include <cstring>
#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 20
#define THROW01 "Create: превышен размер имени словаря"
#define THROW02 "Create: превышен размер максимальной ёмкости словаря"
#define THROW03 "AddEntry: переполнение словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найден элемент"
#define THROW06 "DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"

namespace Dictionary
{
	struct Entry
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};

	struct Instance
	{
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry* dictionary[DICTNAMEMAXSIZE];
	};

	Instance Create(const char *name, int size);
	void AddEntry(Instance& inst, Entry ed);
	void DelEntry(Instance& inst, int id);
	void UpdEntry(Instance& inst, int id, Entry new_ed);
	Entry GetEntry(Instance inst, int id);
	void Print(Instance d);
	void Delete(Instance& d);

};	