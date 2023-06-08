#pragma once
#include "Strategy.h"

class MirrorStrategy : public Strategy
{
public:
    std::string AlgorithmInterface(const std::string& src) override;
};