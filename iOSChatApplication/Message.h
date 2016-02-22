//
//  Message.h
//  iOSChatApplication
//
//  Created by Altitude Labs on 23/3/2016.
//  Copyright © 2016 AltitudeLabs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Message : NSObject
@property (strong, nonatomic) NSString* content;
@property (assign, nonatomic) BOOL isOutgoing;

+ (Message*)initWithContent:(NSString*)content isOutgoing:(BOOL)isOutgoing;
@end
