#include "pch.h"

#define fn_export extern "C" __declspec (dllexport)

fn_export double test_linkage()
{
    return 1;
}