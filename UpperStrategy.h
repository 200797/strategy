#pragma once
#include "Strategy.h"

class UpperStrategy : public Strategy
{
public:
    std::string AlgorithmInterface(const std::string& src) override;
};