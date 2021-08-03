#include <stdio.h>
#include <stdlib.h>

struct A {
    int a;
};
struct B {
    int b;
};
struct C {
    int c;
};

typedef struct D {
    int d;
} D;

struct A* a() {
    struct A* a = malloc(sizeof(struct A));
    a->a = 0;
    return a;
}

typedef struct A*(*returna)();

void main() {
    //a();
    D* d = malloc(sizeof(D));
    d->d = 0;
}
