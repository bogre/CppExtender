#include <algorithm>
#include <memory>
#include <vector>

#include "dyna_polymorphism.hpp"

auto main() -> int
{
  auto knight         = dyna::knight();
  auto archor         = dyna::archor();
  auto serious_knight = dyna::knight_archor();
  auto summed_knight  = knight + archor;

  auto attack = [](std::vector<dyna::combat_unit*> military)
  {
    std::ranges::for_each(military, [](auto e) { e->attack(); });
  };

  attack({&knight, &archor, &serious_knight, &summed_knight});
  return 0;
}
