/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSMutableDictionary, NSString;

@interface PAGenealogyTracker : NSObject <PASerializable> {

	os_activity_stream_sRef _messageStream;
	NSMutableDictionary* _messages;
	NSMutableDictionary* _breadcrumbs;
	NSMutableDictionary* _activityNames;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopTracking;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)breadcrumbsForProcess:(int)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(id)activityNameForId:(unsigned long long)arg1 ;
-(id)messagesForThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(void)trackGloballyWithFlags:(unsigned long long)arg1 ;
-(void)trackPid:(int)arg1 withFlags:(unsigned long long)arg2 ;
-(void)_parseStreamEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addBreadcrumb:(os_activity_breadcrumb_s*)arg1 forProcess:(id)arg2 withActivityId:(unsigned long long)arg3 ;
-(void)_addMessage:(os_trace_message_s*)arg1 withActivityId:(unsigned long long)arg2 ;
-(void)_addActivityName:(const char*)arg1 forId:(unsigned long long)arg2 ;
@end

