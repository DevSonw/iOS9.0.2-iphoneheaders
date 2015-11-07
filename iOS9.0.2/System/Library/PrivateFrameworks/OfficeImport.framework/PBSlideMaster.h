/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PBSlideBase.h>

@interface PBSlideMaster : PBSlideBase
+(id)createMasterStyleMap:(id)arg1 state:(id)arg2 ;
+(void)padMissingLevels:(id)arg1 ;
+(void)setFont:(id)arg1 fromCharacterProperties:(id)arg2 ;
+(id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2 ;
+(int)textTypeFor:(int)arg1 placeholderType:(int)arg2 ;
+(void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2 ;
+(void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3 ;
+(void)readSlideMasterName:(id)arg1 slideHolder:(id)arg2 state:(id)arg3 ;
+(void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2 ;
+(void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3 ;
+(void)setCannedOtherTextListStyle:(id)arg1 ;
+(void)readSlideMasterTextStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3 ;
+(void)readSlideMasterColorScheme:(id)arg1 slideHolder:(id)arg2 state:(id)arg3 ;
+(void)setSlideMasterTextStyles:(id)arg1 state:(id)arg2 ;
+(void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3 ;
@end
