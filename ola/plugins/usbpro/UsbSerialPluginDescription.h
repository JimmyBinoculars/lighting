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
 * UsbSerialPluginDescription.h
 * Contains the description for the usbpro plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_USBPRO_USBSERIALPLUGINDESCRIPTION_H_
#define PLUGINS_USBPRO_USBSERIALPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace usbpro {

const char plugin_description[] = "Serial USB Plugin\n"
"=================\n"
"\n"
"This plugin supports DMX USB devices that emulate a serial port. This\n"
"includes:\n"
"\n"
"* Arduino RGB Mixer\n"
"* DMX-TRI & RDM-TRI\n"
"* DMXking USB DMX512-A, Ultra DMX, Ultra DMX Pro\n"
"* DMXter4, DMXter4A & mini DMXter\n"
"* Enttec DMX USB Pro & USB Pro Mk II\n"
"* Robe Universe Interface\n"
"* LumenRadio CRMX Nova TX USB\n"
"\n"
"See https://wiki.openlighting.org/index.php/USB_Protocol_Extensions for \n"
"more info.\n"
"\n"
"\n"
"## Config file: `ola-usbserial.conf`\n"
"\n"
"`device_dir = /dev`  \n"
"The directory to look for devices in.\n"
"\n"
"`device_prefix = ttyUSB`  \n"
"The prefix of filenames to consider as devices. Multiple keys are allowed.\n"
"\n"
"`ignore_device = /dev/ttyUSB`  \n"
"Ignore the device matching this string. Multiple keys are allowed.\n"
"\n"
"`pro_fps_limit = 190`  \n"
"The max frames per second to send to a Usb Pro or DMXKing device.\n"
"\n"
"`tri_use_raw_rdm = [true|false]`  \n"
"Bypass RDM handling in the {DMX,RDM}-TRI widgets.\n"
"\n"
"`ultra_fps_limit = 40`  \n"
"The max frames per second to send to a Ultra DMX Pro device.";

}  // namespace usbpro
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_USBPRO_USBSERIALPLUGINDESCRIPTION_H_
