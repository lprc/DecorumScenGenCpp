#include "enums.hpp"

std::ostream &operator<<(std::ostream &os, const TROOM &r) {
  switch (r) {
  case TROOM::BEDL:
    os << "BEDL";
    return os;
  case TROOM::BEDR:
    os << "BEDR";
    return os;
  case TROOM::LIV:
    os << "LIV";
    return os;
  case TROOM::KIT:
    os << "KIT";
    return os;
  case TROOM::BATH:
    os << "BATH";
    return os;
  default:
    return os;
  }
}

std::ostream &operator<<(std::ostream &os, const TCOLOR &c) {
  switch (c) {
  case TCOLOR::RED:
    os << "RED";
    return os;
  case TCOLOR::BLUE:
    os << "BLUE";
    return os;
  case TCOLOR::GREEN:
    os << "GREEN";
    return os;
  case TCOLOR::YELLOW:
    os << "YELLOW";
    return os;
  default:
    return os;
  }
}

std::ostream &operator<<(std::ostream &os, const TOBJ &o) {
  switch (o) {
  case TOBJ::CURIOSITY:
    os << "CURIOSITY";
    return os;
  case TOBJ::PAINTING:
    os << "PAINTING";
    return os;
  case TOBJ::LAMP:
    os << "LAMP";
    return os;
  default:
    return os;
  }
}

std::ostream &operator<<(std::ostream &os, const TSTYLE &s) {
  switch (s) {
  case TSTYLE::MODERN:
    os << "MODERN";
    return os;
  case TSTYLE::ANTIQUE:
    os << "ANTIQUE";
    return os;
  case TSTYLE::RETRO:
    os << "RETRO";
    return os;
  case TSTYLE::RARE:
    os << "RARE";
    return os;
  default:
    return os;
  }
}
