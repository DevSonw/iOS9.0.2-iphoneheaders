/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (copy) id string; 
@property (assign) const void* font; 
@property (assign) float fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) char wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
@property (assign) char allowsFontSubpixelQuantization; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(CGSize)_preferredSize;
-(char)allowsFontSubpixelQuantization;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(id)_createStringDict;
-(id)truncationString;
-(CTTypesetterRef)_retainTypesetter;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)setAllowsFontSubpixelQuantization:(char)arg1 ;
-(char)wrapped;
-(void)setTruncationString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)string;
-(void)setFont:(const void*)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(const void*)font;
-(void)setFontSize:(float)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CGColorRef)foregroundColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(float)fontSize;
-(char)isWrapped;
-(void)setWrapped:(char)arg1 ;
-(NSString *)truncationMode;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)alignmentMode;
@end

