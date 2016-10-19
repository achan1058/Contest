// Sample input 2, in CPP.

#include <cassert>

long long GetNumStacks() {
  return 13LL;
}

long long GetStackHeight(long long i) {
  switch ((int)i) {
  case 1: return 1000000000LL;
  case 2: return 2000000000LL;
  case 3: return 5000000000LL;
  case 4: return 3000000000LL;
  case 5: return 2000000000LL;
  case 6: return 2000000000LL;
  case 7: return 5000000000LL;
  case 8: return 1000000000LL;
  case 9: return 1000000000LL;
  case 10: return 2000000000LL;
  case 11: return 5000000000LL;
  case 12: return 1000000000LL;
  case 13: return 2000000000LL;
    default: assert(0);
  }
}
