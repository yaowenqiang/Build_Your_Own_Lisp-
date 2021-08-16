cc -std=c99 -Wall hello_world.c -o hello_world
> sudo apt-get install libedit-dev
> cc -std=c99 -Wall prompt.c -ledit -o prompt

> cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing
> gcc -gdwarf-2 -g3 sample.c -o sample
 > gdb -nw parsing
 > info macro Q
 > macro expand ADD(1)
 > macro expand-once ADD(1)
 > info macro __STDC__
