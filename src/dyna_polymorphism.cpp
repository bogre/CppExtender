#include "dyna_polymorphism.hpp"

#include <cstdio>
#include <string_view>

namespace dyna
{
  auto knight::attack() -> void
  {
    std::puts("pull the sword out dynamically");
  }
  auto archer::attack() -> void
  {
    std::puts("dynamically arm the arrow");
  }
  auto knight_archer::attack() -> void
  {
    std::puts(msg.c_str());
  }
  auto operator+([[maybe_unused]] const knight& knig, [[maybe_unused]] const archer& arch) -> knight_archer
  {
    return knight_archer{"overloaded +op created this well armed knight"};
  }
}  // namespace dyna
