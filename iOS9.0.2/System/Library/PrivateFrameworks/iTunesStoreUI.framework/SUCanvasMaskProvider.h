/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {

	SUScriptCanvasFunction* _function;

}
-(void)dealloc;
-(id)initWithFunction:(id)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(id)copyMaskImageWithSize:(CGSize)arg1 ;
@end
