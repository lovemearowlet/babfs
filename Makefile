make:
  cc -o babfs main.c
clean:
  sudo rm -rf /bin/babfs
install:
  sudo cp babfs /bin/
