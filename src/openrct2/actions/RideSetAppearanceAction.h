/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "GameAction.h"

enum class RideSetAppearanceType : uint8_t
{
    TrackColourMain,
    TrackColourAdditional,
    TrackColourSupports,
    MazeStyle = TrackColourSupports,
    VehicleColourBody,
    VehicleColourTrim,
    VehicleColourTernary,
    VehicleColourScheme,
    EntranceStyle
};

class RideSetAppearanceAction final : public GameActionBase<GameCommand::SetRideAppearance>
{
private:
    NetworkRideId_t _rideIndex{ RIDE_ID_NULL };
    RideSetAppearanceType _type{};
    uint16_t _value{};
    uint32_t _index{};

public:
    RideSetAppearanceAction() = default;
    RideSetAppearanceAction(ride_id_t rideIndex, RideSetAppearanceType type, uint16_t value, uint32_t index);

    void AcceptParameters(GameActionParameterVisitor& visitor) override;

    uint16_t GetActionFlags() const override;

    void Serialise(DataSerialiser& stream) override;
    GameActions::Result::Ptr Query() const override;
    GameActions::Result::Ptr Execute() const override;
};
