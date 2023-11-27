#include <math.h>
#include "S.h"
#include "var.h"
#include "A.h"

using namespace nsA;
using namespace nsVar;

void nsS::S()
{
	n = 1;
	a = x;
	s = a;
	while (true) {
		n++;
		A();
		s += a;
		if (fabs(a) <= eps) {
			break;
		}
	}
}