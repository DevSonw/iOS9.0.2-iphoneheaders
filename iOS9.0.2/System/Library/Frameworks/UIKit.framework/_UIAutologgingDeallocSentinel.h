/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	char _called;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) char called;                   //@synthesize called=_called - In the implementation block
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(char)called;
-(void)setCalled:(char)arg1 ;
@end

