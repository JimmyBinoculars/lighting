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
 * UsbDmxPluginDescription.h
 * Contains the description for the usbdmx plugin.
 * Copyright (C) 2016 Florian Edelmann
 *
 * This file has been autogenerated by convert_README_to_header.sh, DO NOT EDIT.
 */
#ifndef PLUGINS_USBDMX_USBDMXPLUGINDESCRIPTION_H_
#define PLUGINS_USBDMX_USBDMXPLUGINDESCRIPTION_H_

namespace ola {
namespace plugin {
namespace usbdmx {

const char plugin_description[] = "USB DMX Plugin\n"
"==============\n"
"\n"
"This plugin supports various USB DMX devices including:\n"
"\n"
"* Anyma uDMX\n"
"* AVLdiy D512\n"
"* Digital Enlightenment USB-DMX\n"
"* DMXControl Projects e.V. Nodle U1\n"
"* DMXCreator 512 Basic\n"
"* Eurolite USB-DMX512 PRO\n"
"* Eurolite USB-DMX512 PRO MK2 (when `enable_eurolite_mk2 = true`)\n"
"* Eurolite freeDMX Wi-Fi\n"
"* Fadecandy\n"
"* FX5 DMX\n"
"* ShowJockey SJ-DMX-U1\n"
"* Sunlite USBDMX2\n"
"* Velleman K8062.\n"
"\n"
"\n"
"## Config file : `ola-usbdmx.conf`\n"
"\n"
"`libusb_debug_level = {0,1,2,3,4}`  \n"
"The debug level for libusb, see http://libusb.sourceforge.net/api-1.0/  \n"
"0 = No logging, 4 = Verbose debug.\n"
"\n"
"`enable_eurolite_mk2 = {false,true}`\n"
"Whether to enable detection of the Eurolite USB-DMX512 PRO MK2.\n"
"Default = false. This device is indistinguishable from other devices\n"
"with an FTDI chip, and is therefore disabled by default. When enabled,\n"
"this plugin will conflict with the usbserial, StageProfi and FTDI USB DMX\n"
"plugins.\n"
"\n"
"`nodle-<serial>-mode = {0,1,2,3,4,5,6,7}`  \n"
"The mode for the Nodle U1 interface with serial number `<serial>` to operate\n"
"in. Default = 6  \n"
"0 - Standby  \n"
"1 - DMX In -> DMX Out  \n"
"2 - PC Out -> DMX Out  \n"
"3 - DMX In + PC Out -> DMX Out  \n"
"4 - DMX In -> PC In  \n"
"5 - DMX In -> DMX Out & DMX In -> PC In  \n"
"6 - PC Out -> DMX Out & DMX In -> PC In  \n"
"7 - DMX In + PC Out -> DMX Out & DMX In -> PC In";

}  // namespace usbdmx
}  // namespace plugin
}  // namespace ola

#endif  // PLUGINS_USBDMX_USBDMXPLUGINDESCRIPTION_H_