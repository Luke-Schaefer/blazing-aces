#pragma once
#include "Wildcard.hpp"

class ExtraBet : public Wildcard {
public:
    ~ExtraBet() override = default;
    void use(Player& owner, std::vector<Player>& allPlayers) override;
    std::string getName() const override;
    std::string getDescription() const override;
    Timing getUsageTiming() const override;
};