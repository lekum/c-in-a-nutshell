#include <stdio.h>
#include <wchar.h>

int main()
{
  double angle_alpha = 90.0/3;
  wprintf(L"Angle \u03b1 measures %lf degrees.\n", angle_alpha);
}
