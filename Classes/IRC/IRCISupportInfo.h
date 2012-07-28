// LimeChat is copyrighted free software by Satoshi Nakagawa <psychs AT limechat DOT net>.
// You can redistribute it and/or modify it under the terms of the GPL version 2 (see the file GPL.txt).

#import <Foundation/Foundation.h>


#define MODES_SIZE  52


@interface IRCISupportInfo : NSObject

@property (nonatomic, readonly) int nickLen;
@property (nonatomic, readonly) int modesCount;

- (void)reset;
- (void)update:(NSString*)s;
- (NSArray*)parseMode:(NSString*)s;

@end


@interface IRCModeInfo : NSObject

@property (nonatomic) unsigned char mode;
@property (nonatomic) BOOL plus;
@property (nonatomic) BOOL op;
@property (nonatomic) BOOL simpleMode;
@property (nonatomic, strong) NSString* param;

+ (IRCModeInfo*)modeInfo;

@end
