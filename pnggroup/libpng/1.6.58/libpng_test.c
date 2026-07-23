#include <stdio.h>

#include <png.h>

int main(void) {
	if (png_access_version_number() == 0) {
		return 1;
	}
	puts("libpng consumer passed");
	return 0;
}
