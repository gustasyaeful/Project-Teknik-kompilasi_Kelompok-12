// FungsiRefsLib.cpp
// compile with: cl/EHs FungsiRefsLib.cpp/link FungsiHitungLib.lib

#include <iostream>

#include "Fungsi.h"
#include "pch.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "luasnya adalah" <<
		Math::Rumus::Luas(a,b) << endl;
	return 0;
}