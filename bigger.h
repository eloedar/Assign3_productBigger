#pragma once
#include <cstring>

 template <class T,class T2>
 inline T bigger(T x, T2 y)
{
    return x > y ? x: y;
}
inline std::string bigger(const std::string& x, const std::string& y)
{
    return x.length() > y.length() ? x: y;
}

inline const char * bigger(const char * x, const char * y)
{
    return strlen(x) > strlen(y) ? x: y;
}