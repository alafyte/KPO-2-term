#include <iostream>
#include <cmath>

using namespace std;
int sum(int x, int y) { return x + y; };
int(*func1)(int, int);

void main()
{
    bool var1 = true;
    bool var2 = false;

    char var3 = 'u';
    char var4 = 'у';

    wchar_t var5 = 'r';
    wchar_t var6 = 'р';

    short var7 = 22;
    short var8 = -22;
    short var99 = SHRT_MIN;

    unsigned short var9 = USHRT_MAX;
    unsigned short var10 = 0;

    int var11 = 23;
    int var12 = -23;

    int var13 = INT_MAX;
    int var14 = INT_MIN;

    unsigned int var15 = UINT_MAX;
    unsigned int var16 = 0;

    long var17 = 24;
    long var18 = -24;

    long var19 = LONG_MAX;
    long var20 = LONG_MIN;

    unsigned long var21 = ULONG_MAX;
    unsigned long var22 = 0;

    float var23 = 14.023;
    float var24 = -14.56;

    char* var25 = &var3;
    wchar_t* var26 = &var5;
    short* var27 = &var7;
    int* var28 = &var11;
    float* var29 = &var23;

    char* var30 = var25 + 3;
    wchar_t* var31 = var26 + 3;
    short* var32 = var27 + 3;
    int* var33 = var28 + 3;
    float* var34 = var29 + 3;

    float var35 = INFINITY;
    float var37 = NAN;

    func1 = sum;
    int x = func1(2, 3);

}

