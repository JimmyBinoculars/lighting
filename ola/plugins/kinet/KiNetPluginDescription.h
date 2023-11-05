/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * KiNetPluginDescription.h
 * Contains the description for the kinet plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_KINET_KINETPLUGINDESCRIPTION_H_
#define PLUGINS_KINET_KINETPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace kinet {

const char plugin_description[] = "KiNET Plugin\n"
"============\n"
"\n"
"This plugin creates a single device with multiple output ports. Each port\n"
"represents a power supply. This plugin supports both the DMX Out (V1) and\n"
"the Port Out (V2) modes of the KiNET protocol.\n"
"\n"
"\n"
"## Config file: `ola-kinet.conf`\n"
"\n"
"`power_supply = <ip>`\n"
"The IP of the power supply to send to. You can communicate with more than\n"
"one power supply by adding multiple `power_supply =` lines.\n"
"\n"
"### Per Power Supply Settings\n"
"\n"
"`<ip>-mode = [dmxout|portout]`\n"
"The mode of KiNET to send to the power supply. DMX Out is sometimes known as\n"
"V1 and Port Out as V2.\n"
"\n"
"In general, it is highly recommended to use the Port Out mode if your power\n"
"supply supports it. Only very old devices do not support Port Out mode, so\n"
"it is recommended to try Port Out mode first. OLA defaults to DMX Out mode\n"
"for backwards compatibility reasons. Note that some newer devices only\n"
"support the Port Out protocol. On some devices it is also necessary to use\n"
"the Port Out protocol in order to address all of the connected fixtures if\n"
"the number of channels required exceeds one universe.\n"
"\n"
"Note that for the DMX Out mode the universe option on the power supply will\n"
"be ignored, as this plugin only supports unicast DMX Out packets destined\n"
"for the wildcard universe on each device. Instead, the universe for each\n"
"device may be patched by assigning this output port to the intended universe\n"
"in OLA.\n"
"\n"
"`<ip>-ports = <int>`\n"
"The number of physical ports available on the power supply in Port Out mode.\n"
"Each physical port will create an OLA port that may be assigned to any\n"
"universe. This setting is ignored in DMX Out mode. The default and maximum\n"
"number of ports per power supply is 16.";

}  // namespace kinet
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_KINET_KINETPLUGINDESCRIPTION_H_