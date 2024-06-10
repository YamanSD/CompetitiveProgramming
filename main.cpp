#include "./CodeForces/800/ReplacingElements.cpp"

int32_t main() {
    solve();
}

/**
 * int x = -1;
 *
 * for (int b = z; b >= 1; b /= 2) {
 *      while (not ok(x + b)) x += b;
 * }
 *
 * int k = x + 1;
 */

/**
 * int x = -1;
 *
 * for (int b = z; b >= 1; b /= 2) {
 *      while (f(x + b) < f(x + b + 1)) x += b;
 * }
 *
 * int k = x + 1;
 */
