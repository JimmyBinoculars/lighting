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
 * UartDmxPluginDescription.h
 * Contains the description for the uartdmx plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_UARTDMX_UARTDMXPLUGINDESCRIPTION_H_
#define PLUGINS_UARTDMX_UARTDMXPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace uartdmx {

const char plugin_description[] = "Native UART DMX Plugin\n"
"======================\n"
"\n"
"This plugin drives a supported POSIX UART (plus extensions) to produce a\n"
"direct DMX output stream. The host needs to create the DMX stream itself as\n"
"there is no external microcontroller.\n"
"\n"
"This is tested with the on-board UART of the Raspberry Pi. See here for a\n"
"possible schematic:\n"
"http://eastertrail.blogspot.co.uk/2014/04/command-and-control-ii.html\n"
"\n"
"\n"
"## Config file: `ola-uartdmx.conf`\n"
"\n"
"`enabled = true`\n"
"Enable this plugin (DISABLED by default).\n"
"\n"
"`device = /dev/ttyAMA0`\n"
"The device to use for DMX output (optional). Multiple devices are supported\n"
"if the hardware exists. On later software it may also be /dev/serial0.\n"
"Using USB-serial adapters is not supported (try the\n"
"*ftdidmx* plugin instead).\n"
"\n"
"\n"
"### Per Device Settings (using above device name)\n"
"\n"
"`<device>-break = 100`\n"
"The DMX break time in microseconds for this device (optional).\n"
"\n"
"`<device>-malf = 100`\n"
"The Mark After Last Frame time in microseconds for this device (optional).";

}  // namespace uartdmx
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_UARTDMX_UARTDMXPLUGINDESCRIPTION_H_
