/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CATiledLayer.h>
#import <UIKit/UIPDFSelectionLayer.h>

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {

	CALayer* _selectionLayer;

}
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayers;
-(void)setSelectionNeedsDisplay;
@end
