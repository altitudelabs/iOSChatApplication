//
//  Message.m
//  iOSChatApplication
//
//  Created by Altitude Labs on 23/3/2016.
//  Copyright © 2016 AltitudeLabs. All rights reserved.
//

#import "Message.h"

@implementation Message
+ (Message*)initWithContent:(NSString*)content isOutgoing:(BOOL)isOutgoing {
    Message* result = [[Message alloc] init];
    result.content = content;
    result.isOutgoing = isOutgoing;
    return result;
}
@end
