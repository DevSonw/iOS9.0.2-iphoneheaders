/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject {

	NSString* _prefixString;
	NSMutableArray* _items;

}

@property (nonatomic,retain) NSString * prefixString;              //@synthesize prefixString=_prefixString - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
-(id)init;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)_descriptionObfuscated:(char)arg1 ;
-(void)addDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(id)CPSafeDescription;
-(NSString *)prefixString;
-(void)setPrefixString:(NSString *)arg1 ;
@end

