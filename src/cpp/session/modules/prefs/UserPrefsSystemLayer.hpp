/*
 * UserPrefsLayer.hpp
 *
 * Copyright (C) 2009-19 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef SESSION_USER_PREF_SYSTEM_LAYER_HPP
#define SESSION_USER_PREF_SYSTEM_LAYER_HPP

#include "PrefLayer.hpp"

namespace rstudio {
namespace session {
namespace modules {
namespace prefs {

class UserPrefsSystemLayer: public PrefLayer
{
public:
   core::Error readPrefs();
   core::Error validatePrefs();
};

} // namespace prefs
} // namespace modules
} // namespace session
} // namespace rstudio

#endif