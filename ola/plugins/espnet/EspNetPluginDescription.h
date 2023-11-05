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
 * EspNetPluginDescription.h
 * Contains the description for the espnet plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_ESPNET_ESPNETPLUGINDESCRIPTION_H_
#define PLUGINS_ESPNET_ESPNETPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace espnet {

const char plugin_description[] = "Enttec ESP Net Plugin\n"
"=====================\n"
"\n"
"This plugin creates a single device with five input and five output ports.\n"
"\n"
"ESP supports up to 255 universes. As ESP has no notion of ports, we provide\n"
"a fixed number of ports which can be patched to any universe. When sending\n"
"data from a port, the data is addressed to the universe the port is patched\n"
"to. For example if port 0 is patched to universe 10, the data will be sent\n"
"to ESP universe 10.\n"
"\n"
"\n"
"## Config file: `ola-espnet.conf`\n"
"\n"
"`ip = [a.b.c.d|<interface_name>]`  \n"
"The IP address or interface name to bind to. If not specified it will use\n"
"the first non-loopback interface.\n"
"\n"
"`name = ola-EspNet`  \n"
"The name of the node.";

}  // namespace espnet
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_ESPNET_ESPNETPLUGINDESCRIPTION_H_