#include "static_polymorphism.hpp"

#include <cstdio>

namespace stat
{
  auto knight::attack() -> void
  {
    std::puts("hey knight, draw your sword");
  }
  auto archer::attack() -> void
  {
    std::puts("hey archer, prepare your bow");
  }
  auto knight_archer::attack() -> void
  {
    std::puts(msg.c_str());
  }
}  // namespace stat
