/* -*- mode: objc -*- */
/*
  Project: SoundKit framework.

  Copyright (C) 2019 Sergii Stoian

  This application is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This application is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU General Public
  License along with this library; if not, write to the Free
  Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#import "SKSoundDevice.h"

@class PASink;

@interface SKSoundOut : SKSoundDevice
{
}
@property (retain) PASink *sink;

// For debuging purposes
- (void)printDescription;

- (NSArray *)availablePorts;
- (NSString *)activePort;
// TODO
- (void)setActivePort:(NSString *)portName;

- (NSUInteger)volumeSteps;
- (NSUInteger)volume;
- (void)setVolume:(NSUInteger)volume;

- (BOOL)isMuted;
- (void)setMuted:(BOOL)isMute;

@end