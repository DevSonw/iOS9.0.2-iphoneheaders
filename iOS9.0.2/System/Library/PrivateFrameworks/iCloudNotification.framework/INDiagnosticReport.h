/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate;

@interface INDiagnosticReport : NSObject <NSSecureCoding> {

	char _disabled;
	NSString* _pushEnvironment;
	NSString* _pushToken;
	NSArray* _pushTopics;
	NSDate* _nextHeartbeatDate;

}

@property (nonatomic,copy) NSString * pushEnvironment;              //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                    //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSArray * pushTopics;                    //@synthesize pushTopics=_pushTopics - In the implementation block
@property (nonatomic,copy) NSDate * nextHeartbeatDate;              //@synthesize nextHeartbeatDate=_nextHeartbeatDate - In the implementation block
@property (assign,nonatomic) char disabled;                         //@synthesize disabled=_disabled - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)pushToken;
-(NSString *)pushEnvironment;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(NSArray *)pushTopics;
-(void)setPushTopics:(NSArray *)arg1 ;
-(NSDate *)nextHeartbeatDate;
-(void)setNextHeartbeatDate:(NSDate *)arg1 ;
@end

