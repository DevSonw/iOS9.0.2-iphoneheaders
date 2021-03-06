/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapPageRenderer.h>

@interface SimpleMapPageRenderer : MapPageRenderer {

	SCD_Struct_RA7 topLeftCorner;
	double _widthInMeters;

}
-(void)_setTitlesWithMapItem:(id)arg1 ;
-(CGRect)overviewRect;
-(void)drawTopContentInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(id)initWithMapView:(id)arg1 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
@end

