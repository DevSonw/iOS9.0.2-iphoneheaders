/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage;

@interface QLThumbnailOperation : NSOperation {

	int _index;
	CGSize _size;
	UIImage* _image;

}

@property (assign) int index;                    //@synthesize index=_index - In the implementation block
@property (assign) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(int)index;
-(void)setIndex:(int)arg1 ;
@end

