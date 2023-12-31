/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Version.h
 * Provides version information for all of OLA.
 * Copyright (C) 2014 Peter Newman
 */

#ifndef INCLUDE_OLA_BASE_VERSION_H_
#define INCLUDE_OLA_BASE_VERSION_H_

#include <ola/base/Macro.h>
#include <string>

namespace ola {
namespace base {

#define OLA_VERSION_MAJOR 0
#define OLA_VERSION_MINOR 10
#define OLA_VERSION_REVISION 9

/**
 * @class Version ola/base/Version.h
 * @brief Provides version information.
 *
 * OLA Version numbers are in the form major.minor.revision e.g. 0.10.9
 */
class Version {
 public:
  /**
   * @brief the Major version number
   * @return the major version number.
   */
  static unsigned int GetMajor();

  /**
   * @brief the Minor version number
   * @return the minor version number.
   */
  static unsigned int GetMinor();

  /**
   * @brief the revision number
   * @return the revision number.
   */
  static unsigned int GetRevision();

  /**
   * @brief the version number as a string.
   * @return the version number as a string.
   */
  static std::string GetVersion();

  /**
   * @brief Check the running version is newer than or equal to a specific
   * version.
   * @param major the major version.
   * @param minor the minor version.
   * @param revision the revision.
   * @return true if the running version is >= major.minor.revision.
   */
  static bool IsAtLeast(unsigned int major,
                        unsigned int minor,
                        unsigned int revision);

 private:
  DISALLOW_COPY_AND_ASSIGN(Version);
};
}  // namespace base
}  // namespace ola
#endif  // INCLUDE_OLA_BASE_VERSION_H_
