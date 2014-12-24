//
//  DataManager.h
//  RigaDevDay
//
//  Created by Deniss Kaibagarovs on 12/8/14.
//  Copyright (c) 2014 Deniss Kaibagarovs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SpeakerObject.h"
#import "ScheduleObject.h"

@interface DataManager : NSObject

+ (DataManager *)sharedInstance;

- (NSArray *)getAllSpeakers;

@end
