#include <stdlib.h>
int main() {
  system("/bin/bash -c 'printf \"User: $USER\\n\"'");
  system("/bin/bash -c 'printf \"Host: $HOSTNAME\\n\"'");
  system("/bin/bash -c 'printf \"Home: $HOME\\n\"'");
  system("/bin/bash -c 'printf \"OS: $OSTYPE\\n\"'");
  system("/bin/bash -c 'printf \"Term: $TERM\\n\"'");
  system("/bin/bash -c 'printf \"Shell: $SHELL\\n\"'");
}
