/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageTable, NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	PLImageTable* _imageTable;
	unsigned _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	int _imageFormat;

}
-(void)dealloc;
-(void)reset;
-(void)_cleanup;
-(void)removeItemAtIndex:(unsigned)arg1 ;
-(unsigned)_imageTableIndexForItemIndex:(unsigned)arg1 ;
-(id)initWithWithPath:(id)arg1 imageFormat:(int)arg2 ;
-(void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned)arg3 ;
-(id)dataForItemAtIndex:(unsigned)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7 ;
-(id)imageForItemAtIndex:(unsigned)arg1 ;
-(void)insertItemAtIndex:(unsigned)arg1 ;
@end
