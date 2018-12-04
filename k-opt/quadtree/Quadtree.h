#pragma once

// This handles the generation and sorting of Morton keys, and quadtree construction.

#include "depth_map/transform.h"
#include "depth_map/DepthMap.h"
#include "QuadtreeNode.h"
#include "Segment.h"
#include "morton_keys.h"
#include <primitives.h>
#include <SearchState.h>

#include <algorithm>
#include <cstdint>
#include <set>
#include <vector>

namespace quadtree {

class Quadtree
{
public:
    Quadtree(depth_map::DepthMap& depth_map) : m_depth_map(depth_map) {}

    QuadtreeNode& root() { return m_root; }
    void insert(Segment, const std::vector<primitives::morton_key_t>& keys);
    void erase(Segment, const std::vector<primitives::morton_key_t>& keys);

private:
    depth_map::DepthMap& m_depth_map;

    QuadtreeNode m_root;
    std::multiset<primitives::length_t> m_segment_lengths;
};

} // namespace quadtree
