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
  struct archor : combat_unit
  {
    auto attack() -> void override;
  };
  class knight_archor : public combat_unit
  {
    std::string msg;

  public:
    explicit knight_archor(std::string_view msg = "draw the sword, arm the arrow") : msg{msg}
    {
    }
    auto attack() -> void override;
  };
  auto operator+(const knight& knig, const archor& arch) -> knight_archor;
}  // namespace dyna
