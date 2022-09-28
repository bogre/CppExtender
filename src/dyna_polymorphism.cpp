#include "dyna_polymorphism.hpp"

#include <cstdio>
#include <string_view>

namespace dyna
{
  auto knight::attack() -> void
  {
    std::puts("hey knight, draw the sword");
  }
  auto archer::attack() -> void
  {
    std::puts("hey archer, prepare the bow");
  }
  auto knight_archer::attack() -> void
  {
    std::puts(msg.c_str());
  }
  auto operator+([[maybe_unused]] const knight& knig, [[maybe_unused]] const archer& arch) -> knight_archer
  {
    return knight_archer{"hey 'summed' knight_archer, you're well armed by overloaded op+"};
  }
}  // namespace dyna
