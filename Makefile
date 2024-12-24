make:
  cc -o babfs main.c
clean:
  sudo rm -rf /bin/babfs
install: make
  sudo cp babfs /bin/
