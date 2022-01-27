/* Copyright 2021 Axel Huebl, Benjamin Worpitz, Bernhard Manfred Gruber
 *
 * This file is part of alpaka.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#pragma once

#include <alpaka/math/trunc/Traits.hpp>

namespace alpaka
{
    namespace math
    {
        //! The standard library trunc, implementation covered by the general template.
        class TruncStdLib : public concepts::Implements<ConceptMathTrunc, TruncStdLib>
        {
        };
    } // namespace math
} // namespace alpaka
