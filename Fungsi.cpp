// Fungsi.cpp
// compile with: c1 /c /EHsc Fungsi.cpp
// post-build command: lib Fungsi.obj

#include "Fungsi.h"
#include <stdexcept>

using namespace std;
namespace Math
{
	double Rumus::Luas(double a, double b)
	{
		return a * b;
	}
		
}