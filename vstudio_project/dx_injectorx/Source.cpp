#include "pch.h"

#define fn_export extern "C" __declspec (dllexport)

fn_export double test_linkage()
{
    return 1;
}

fn_export double test_args(double num0, double num1)
{
    return num0+num1;
}

fn_export char* test_string(char* num0)
{
    return num0;
}