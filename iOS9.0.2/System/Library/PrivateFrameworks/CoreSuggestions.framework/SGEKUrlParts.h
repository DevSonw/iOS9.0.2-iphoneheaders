/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SGEKUrlParts : NSObject {

	NSString* _messageId;
	NSDate* _sentAt;
	NSString* _opaqueKey;

}

@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) NSDate * sentAt;                   //@synthesize sentAt=_sentAt - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey;              //@synthesize opaqueKey=_opaqueKey - In the implementation block
+(id)parseFromURL:(id)arg1 ;
-(NSString *)opaqueKey;
-(id)initWithMessageId:(id)arg1 sentAt:(id)arg2 opaqueKey:(id)arg3 ;
-(NSDate *)sentAt;
-(NSString *)messageId;
@end

