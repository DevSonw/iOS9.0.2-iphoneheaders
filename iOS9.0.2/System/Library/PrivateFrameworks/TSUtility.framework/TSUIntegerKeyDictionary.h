/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	CFDictionaryRef mDictionary;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(int)arg1 ;
-(void)removeObjectForKey:(int)arg1 ;
-(void)setObject:(id)arg1 forKey:(int)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
@end

