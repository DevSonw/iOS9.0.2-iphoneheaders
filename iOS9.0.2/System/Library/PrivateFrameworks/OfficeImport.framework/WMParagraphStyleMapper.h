/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDParagraphProperties, WDParagraph, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper {

	WDParagraphProperties* wdParaProperties;
	WDParagraph* wdParagraph;
	WMParagraphStyle* mStyle;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(char)arg3 ;
-(char)isListItem;
-(void)mapListStyleAt:(id)arg1 state:(id)arg2 ;
-(void)destyleEmptyParagraph;
-(BOOL)checkListId:(long)arg1 level:(unsigned char)arg2 ;
-(void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(int)arg3 listState:(id)arg4 ;
-(id)bulletLabelAtLevel:(id)arg1 forIndex:(int)arg2 bulletFormat:(int)arg3 listState:(id)arg4 ;
-(id)labelStringWithGap:(id)arg1 ;
@end
