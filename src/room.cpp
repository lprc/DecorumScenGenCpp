#include "room.hpp"

std::ostream &operator<<(std::ostream &os, const Room &r) {
  os << "  wall color: " << r.wallColor << std::endl;
  os << "  lamp: ";
  if (r.lamp)
    os << *r.lamp << std::endl;
  else
    os << "None" << std::endl;

  os << "  curiosity: " << std::endl;
  if (r.curiosity)
    os << *r.curiosity << std::endl;
  else
    os << "None" << std::endl;

  os << "  painting: " << std::endl;
  if (r.painting)
    os << *r.painting << std::endl;
  else
    os << "None" << std::endl;
  return os;
}
