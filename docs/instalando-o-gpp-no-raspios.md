### Instalando o G++ no RaspiOS

Abra o Terminal e verifique se você tem o GCC, o G++ e o GDB instalados com os comandos.

```bash
$ gcc --version
$ g++ --version
$ gdb --version
```

Caso não tenha, instale o GCC, o G++ e o GDB com o comando:

```bash
$ sudo apt-get install build-essential gdb
```

> Os pacotes g++-multilib e gcc-multilib não estão disponíveis para o RaspOS.