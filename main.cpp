#include <algorithm>
#include <memory>
#include <vector>

#include "dyna_polymorphism.hpp"
#include "static_polymorphism.hpp"

auto main() -> int
{
  std::puts("\ndynamic polymorphism demo:\n");
  auto knight         = dyna::knight();
  auto archer         = dyna::archor();
  auto serious_knight = dyna::knight_archer();
  auto summed_knight  = knight + archer;

  auto attack = []<typename GUnit>(std::vector<GUnit*> military)
  {
    std::ranges::for_each(military, [](auto e) { e->attack(); });
  };

  attack(std::vector<dyna::combat_unit*>{&knight, &archer, &serious_knight, &summed_knight});

  std::puts("\nstatic polymorphism demo:\n");
  auto sknight         = stat::knight();
  auto sarcher         = stat::archer();
  auto serious_sarcher = stat::knight_archer();

  // attack(std::vector<stat::combat_unit*>{&knight, &archor, &serious_knight, &summed_knight});
  sknight.attack();
  sarcher.attack();
  serious_sarcher.attack();
  return 0;
}
