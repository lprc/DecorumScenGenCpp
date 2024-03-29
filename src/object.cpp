#include "object.hpp"
#include <ostream>

std::ostream &operator<<(std::ostream &os, const Object &obj) {
  os << "  type: " << obj.type << std::endl;
  os << "  style: " << obj.style << std::endl;
  os << "  color: " << obj.color << std::endl;
  return os;
}
