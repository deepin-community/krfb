/* This file is part of the KDE project
   Copyright (C) 2009 Collabora Ltd <info@collabora.co.uk>
    @author George Goldberg <george.goldberg@collabora.co.uk>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#include "qtframebufferplugin.h"

#include "qtframebuffer.h"

#include <KPluginFactory>

K_PLUGIN_CLASS_WITH_JSON(QtFrameBufferPlugin, "qt.json")

QtFrameBufferPlugin::QtFrameBufferPlugin(QObject *parent, const QVariantList &args)
    : FrameBufferPlugin(parent, args)
{
}

FrameBuffer *QtFrameBufferPlugin::frameBuffer(const QVariantMap &args)
{
    Q_UNUSED(args);
    return new QtFrameBuffer;
}

#include "qtframebufferplugin.moc"

