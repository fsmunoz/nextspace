/*
  Class:               YahooForecast
  Inherits from:       NSObject
  Class descritopn:    Get and parse weather forecast from yahoo.com

  Copyright (C) 2014-2016 Doug Torrance <dtorrance@piedmont.edu>
  Copyright (C) 2016 Sergii Stoian <stoian255@ukr.net>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@interface YahooForecast : NSObject
{
  // { Day = @""; Low = @""; High = @""; Description = @"";}
  NSDictionary	 *forecastDescription;
  NSMutableArray *forecastList;

  // {
  //   Title = @"";
  //   Temperature = @"";
  //   Description = @"";
  //   Image = NSImage*; // determined by code
  //   Forecasts = NSArray*;
  //   Fetched = NSDate*;
  //   ErrorText = @"";
  // }
  NSMutableDictionary *weatherCondition;
}

- (NSDictionary *)fetchWeatherWithWOEID:(char *)woeid
                                zipCode:(char *)zip
                                  units:(char *)units;

@end
