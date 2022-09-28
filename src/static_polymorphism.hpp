#pragma once
#include <string>
#include <string_view>
namespace stat
{
  template <typename D>
  struct combat_unit
  {
    auto attack() -> void
    {
      static_cast<D*>(this)->attack();
    }
  };
  struct knight : combat_unit<knight>
  {
    auto attack() -> void;
  };
  struct archer : combat_unit<archer>
  {
    auto attack() -> void;
  };
  class knight_archer : public combat_unit<knight_archer>
  {
    std::string msg;

  public:
    explicit knight_archer(std::string_view msg = "hey knight_archer, prepare your arsenal") : msg(msg)
    {
    }
    auto attack() -> void;
  };
  template <typename CombatUnit>
  auto attack(stat::combat_unit<CombatUnit>& cu)
  {
    cu.attack();
  }
}  // namespace stat
