#pragma once
#include <string>
#include <string_view>
namespace dyna
{
  struct combat_unit
  {
    virtual auto attack() -> void   = 0;
    virtual ~combat_unit() noexcept = default;
  };
  struct knight : combat_unit
  {
    auto attack() -> void override;
  };
  struct archer : combat_unit
  {
    auto attack() -> void override;
  };
  class knight_archer : public combat_unit
  {
    std::string msg;

  public:
    explicit knight_archer(std::string_view msg = "draw the sword, arm the arrow") : msg{msg}
    {
    }
    auto attack() -> void override;
  };
  auto operator+(const knight& knig, const archer& arch) -> knight_archer;
}  // namespace dyna
