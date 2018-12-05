#pragma once

// Aliases and constants for primitive types.

#include <cstdint>
#include <limits>

namespace primitives {

using length_t = uint64_t; // as in Segment lengths.
using point_id_t = uint32_t;
using space_t = double; // as in x, y coordinates.
using depth_t = uint8_t; // as in maximum quadtree depth.
using quadrant_t = uint8_t; // as in quadtree quadrant index.
using morton_key_t = uint64_t;

constexpr auto InvalidPoint = std::numeric_limits<point_id_t>::max();
constexpr depth_t MaxTreeDepth = 21; // maximum quadtree depth / level.
constexpr depth_t DepthEnd = 21; // number of tree levels, or 1 + the maximum depth index. Might want to leave at least one bit for morton key flags.

} // namespace primitives

