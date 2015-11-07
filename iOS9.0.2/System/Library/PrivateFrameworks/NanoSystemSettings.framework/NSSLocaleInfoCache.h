/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface NSSLocaleInfoCache : NSObject <NSSecureCoding> {

	NSDictionary* _reply;
	NSString* _gizmoBuildVersion;

}

@property (nonatomic,retain) NSDictionary * reply;                      //@synthesize reply=_reply - In the implementation block
@property (nonatomic,retain) NSString * gizmoBuildVersion;              //@synthesize gizmoBuildVersion=_gizmoBuildVersion - In the implementation block
+(void)handleMemoryPressureEvent;
+(id)cachedReply;
+(void)cacheReply:(id)arg1 forGizmoBuildVersion:(id)arg2 ;
+(char)supportsSecureCoding;
-(void)setGizmoBuildVersion:(NSString *)arg1 ;
-(NSString *)gizmoBuildVersion;
-(char)isValidForGizmoBuildVersion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReply:(NSDictionary *)arg1 ;
-(NSDictionary *)reply;
@end
