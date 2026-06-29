#include <stdlib.h>
// `alias clearfetch="clear; fastfetch"`
int main() {
	int cmd = system("alias start='clear; fastfetch' && start");
	if (cmd == 0) {
		return 0;
	} else {
		return 1;
	}
}
