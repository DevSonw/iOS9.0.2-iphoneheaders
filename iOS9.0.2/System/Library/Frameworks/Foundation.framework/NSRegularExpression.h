/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _pattern;
	unsigned _options;
	void* _internal;
	id _reserved1;
	int _checkout;
	int _reserved2;

}

@property (copy,readonly) NSString * pattern; 
@property (readonly) unsigned options; 
@property (readonly) unsigned numberOfCaptureGroups; 
+(id)escapedTemplateForString:(id)arg1 ;
+(void)initialize;
+(id)escapedPatternForString:(id)arg1 ;
+(id)regularExpressionWithPattern:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(unsigned)numberOfCaptureGroups;
-(id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(int)arg3 template:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)options;
-(unsigned)replaceMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(id)firstMatchInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(void)finalize;
-(NSString *)pattern;
-(unsigned)numberOfMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)matchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)initWithPattern:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

