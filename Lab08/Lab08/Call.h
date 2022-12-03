#pragma once
#include <iostream>

namespace Call 
{
	int _cdecl cdevl(int, int, int);
	int _stdcall cstd(int&, int, int);
	int _fastcall cfst(int, int, int, int);
}
