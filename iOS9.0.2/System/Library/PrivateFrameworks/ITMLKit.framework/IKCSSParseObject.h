/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IKCSSParseObject : NSObject {

	NSArray* _cssValue;
	int _type;

}

@property (nonatomic,retain) NSArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) int type;                        //@synthesize type=_type - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSArray *)cssValue;
-(void)setCssValue:(NSArray *)arg1 ;
@end
