#ifndef GUITARTUNING_H
#define GUITARTUNING_H

#include <string>
//fundemental frquencies (in HZ) of a 6 string guitar

struct FundFreq 
{
    static constexpr double 
        E2 = 82.41,                         // 6th string (Low E)
        A2 = 110.00,                        // 5th string
        D3 = 146.83,                        // 4th string
        G3 = 196.00,                        // 3rd string
        B3 = 246.94,                        // 2nd string
        E4 = 329.63;                        // 1st string (High E)
};

struct GuitarNote // the guitar note having its name and frequency
{
    std::string name;
    double frequency;
};

#endif
