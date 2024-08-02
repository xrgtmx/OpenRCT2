/*****************************************************************************
 * Copyright (c) 2014-2024 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once
#include <openrct2/world/Location.hpp>

struct TileElement;

namespace OpenRCT2::Ui
{
    CoordsXY FootpathGetCoordinatesFromPos(const ScreenCoordsXY& screenCoords, int32_t* direction, TileElement** tileElement);
    CoordsXY FootpathBridgeGetInfoFromPos(const ScreenCoordsXY& screenCoords, int32_t* direction, TileElement** tileElement);
} // namespace OpenRCT2::Ui
