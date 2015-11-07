/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/_MTLCommandEncoder.h>
#import <libobjc.A.dylib/MTLDebugCommandEncoder.h>

@class NSString;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(void)kprintf:(id)arg1 ;
-(void)IOLog:(id)arg1 ;
@end
