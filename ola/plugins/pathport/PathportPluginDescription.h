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
 * PathportPluginDescription.h
 * Contains the description for the pathport plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_PATHPORT_PATHPORTPLUGINDESCRIPTION_H_
#define PLUGINS_PATHPORT_PATHPORTPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace pathport {

const char plugin_description[] = "Pathway Pathport Plugin\n"
"=======================\n"
"\n"
"This plugin creates a single device with 5 input and 5 output ports.\n"
"\n"
"The universe the port is patched to corresponds with the DMX channels used\n"
"in the PathPort protocol. For example universe 0 is xDMX channels 0 - 511,\n"
"universe 1 is xDMX channels 512 - 1023.\n"
"\n"
"\n"
"## Config file: `ola-pathport.conf`\n"
"\n"
"`dscp = <int>`  \n"
"Set the DSCP value for the packets. Range is 0-63.\n"
"\n"
"`ip = [a.b.c.d|<interface_name>]`  \n"
"The IP address or interface name to bind to. If not specified it will use\n"
"the first non-loopback interface.\n"
"\n"
"`name = ola-Pathport`  \n"
"The name of the node.\n"
"\n"
"`node-id = <int>`  \n"
"The pathport id of the node.";

}  // namespace pathport
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_PATHPORT_PATHPORTPLUGINDESCRIPTION_H_