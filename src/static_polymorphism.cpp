#include "static_polymorphism.hpp"

#include <cstdio>

namespace stat
{
  auto knight::attack() -> void
  {
    std::puts("draw your static sword");
  }
  auto archer::attack() -> void
  {
    std::puts("prepare your static arch");
  }
  auto knight_archer::attack() -> void
  {
    std::puts(msg.c_str());
  }
}  // namespace stat
