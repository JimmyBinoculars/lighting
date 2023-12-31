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
 * OpenDmxPluginDescription.h
 * Contains the description for the opendmx plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_OPENDMX_OPENDMXPLUGINDESCRIPTION_H_
#define PLUGINS_OPENDMX_OPENDMXPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace opendmx {

const char plugin_description[] = "Enttec Open DMX Plugin\n"
"======================\n"
"\n"
"The plugin creates a single device with one output port using the Enttec\n"
"Open DMX USB widget. It requires the Open DMX kernel module, if you don't\n"
"have this installed, use the FTDI DMX USB plugin instead.\n"
"\n"
"\n"
"## Config file: `ola-opendmx.conf`\n"
"\n"
"`device = /dev/dmx0`  \n"
"The path to the Open DMX USB device. Multiple entries are supported.";

}  // namespace opendmx
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_OPENDMX_OPENDMXPLUGINDESCRIPTION_H_
