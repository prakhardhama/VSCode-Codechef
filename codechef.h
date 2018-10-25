#ifndef codechef_h
#define codechef_h

#include "competitive.h"

//extern functions
namespace ADASTAIR { extern int main(); } using namespace ADASTAIR; int ADASTAIR::main();

std::map<string, function<void()>> process = {
    {"ADASTAIR", ADASTAIR::main}
};

#endif