#include <stdlib.h>
int main() {
	int cmd = system("clear && fastfetch");
	if (cmd == 0) {
		return 0;
	} else {
		return 1;
	}
}
