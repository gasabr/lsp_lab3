The functional type is defined as
* the returning value,
* name of the argument
* list of type-parameters for the argument function



``` c
#include <stdio.h>
double g( int number ) { return 0.5 + number; }
double apply( double (f)(int), int x ) {
    return f( x ) ;
}
int main( void ) {
    printf( "%f\n",  apply( g, 10 ) );
    return 0;
}
```

