/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SPCacheAsset : NSObject {

	NSString* _key;
	unsigned _state;
	unsigned _size;
	double _accessDate;

}

@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned size;                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double accessDate;              //@synthesize accessDate=_accessDate - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(unsigned)size;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)key;
-(void)setSize:(unsigned)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
-(id)initWithName:(id)arg1 size:(unsigned)arg2 state:(unsigned)arg3 accessDate:(id)arg4 ;
@end
