/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSNumberFormatter;

@interface RCDurationFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _positionalParameterFormatStrings;
	NSNumberFormatter* _defaultFormatter;
	NSNumberFormatter* _nonPaddedHourFormatter;

}
+(id)_localizedPositionalFormatStringForDurationFormattingStyle:(int)arg1 ;
+(id)_localizedDateTimeFormatForDurationFormattingStyle:(int)arg1 ;
+(id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1 ;
+(id)sharedFormatter;
-(void)dealloc;
-(id)init;
-(void)reloadLocalizedFormatStrings;
-(id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(int)arg2 style:(int)arg3 ;
-(id)_onQueueStringFromDuration:(double)arg1 style:(int)arg2 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(id)_onQueuePositionalFormatStringForStyle:(int)arg1 ;
-(id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned)arg2 style:(int)arg3 ;
-(id)stringFromDuration:(double)arg1 style:(int)arg2 ;
@end

