/*****************************************************************************
 * Copyright (c) 2014-2024 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once
#include "../rct12/Limits.h"

namespace RCT1::Limits
{
    using namespace RCT12::Limits;
    constexpr uint16_t kMaxTileElements = 0xC000;
    constexpr uint16_t kMaxEntities = 5000;
    constexpr uint8_t kMaxTrainsPerRide = 12;
    constexpr uint8_t kMaxMapSize = 128;
    constexpr uint8_t kMaxStaff = 116;
    constexpr uint16_t kMaxAnimatedObjects = 1000;
    constexpr uint8_t kMaxBanners = 100;
    constexpr int32_t kCoordsZStep = 4;
    constexpr uint32_t kNumLlCsgEntries = 69917;
    constexpr uint32_t kLlCsg1DatFileSize = 41402869;
    constexpr uint32_t NumTerrainSurfaces = 16;
    constexpr uint32_t NumTerrainEdges = 15;
} // namespace RCT1::Limits
