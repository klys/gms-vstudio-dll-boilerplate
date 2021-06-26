# Boilerplate for dll making for gms 1&2

**C++ mostly**

The dll project is on visual studio 2019, show basic examples for adding the dll on gms1 and gms2

## Variables on GMS/C++

Strings are char\*

Numbers are double

## Test cases includes

**Simple function without parameters**

...

double test_linkage()
{
return 1;
}
...

**Simple function with double parameters**

...

double test_args(double num0, double num1)
{
return num0+num1;
}
...

**Simple function with strings parameter**

...
char* test_string(char* num0)
{
return num0;
}
...
