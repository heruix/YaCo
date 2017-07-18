//  Copyright (C) 2017 The YaCo Authors
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "YaTypes.hpp"

namespace std { template<typename T> class shared_ptr; }
struct IHashProvider;
class IModelAccept;

bool set_type_at                (ea_t ea, const std::string& prototype);
bool set_struct_member_type_at  (ea_t ea, const std::string& prototype);

enum FramePolicy
{
    UseFrames,
    SkipFrames,
};

void export_to_ida(IModelAccept* model, IHashProvider* provider, FramePolicy frame_policy);
