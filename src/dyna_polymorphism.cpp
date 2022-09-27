#include "dyna_polymorphism.hpp"

#include <cstdio>
#include <string_view>

namespace dyna
{
  auto knight::attack() -> void
  {
    std::puts("pull the sword out");
  }
  auto archor::attack() -> void
  {
    std::puts("arm the arrow");
  }
  auto knight_archor::attack() -> void
  {
    std::puts(msg.c_str());
  }
  auto operator+([[maybe_unused]] const knight& knig, [[maybe_unused]] const archor& arch) -> knight_archor
  {
    return knight_archor{"overloaded +op created this well armed knight"};
  }
}  // namespace dyna
