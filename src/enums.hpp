#pragma once

#include <ostream>
enum class TROOM { BEDL, BEDR, LIV, KIT, BATH };
std::ostream &operator<<(std::ostream &os, const TROOM &r);

enum class TCOLOR { RED, BLUE, GREEN, YELLOW };
std::ostream &operator<<(std::ostream &os, const TCOLOR &c);

enum class TOBJ { CURIOSITY, PAINTING, LAMP };
std::ostream &operator<<(std::ostream &os, const TOBJ &o);

enum class TSTYLE { MODERN, ANTIQUE, RETRO, RARE };
std::ostream &operator<<(std::ostream &os, const TSTYLE &s);
