/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {

	CPPage* page;
	NSMutableArray* objectsOnPage;
	float mapTemp;

}
-(void)dealloc;
-(id)page;
-(id)initWithPage:(id)arg1 ;
-(void)findClickableObjects:(char)arg1 ;
-(id)objectAtPoint:(CGPoint)arg1 ;
-(id)paragraph:(CGPoint)arg1 ;
-(id)column:(CGPoint)arg1 ;
-(id)findObjectIn:(id)arg1 at:(CGPoint)arg2 count:(int*)arg3 ;
-(id)textLine:(CGPoint)arg1 ;
-(id)paragraphNear:(CGPoint)arg1 ;
-(id)layoutArea:(CGPoint)arg1 ;
-(unsigned)columnsAt:(CGPoint)arg1 ;
-(int)compareByReadingOrder:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(char)hitTestGraphicObject:(id)arg1 point:(CGPoint)arg2 ;
-(char)hitTestParagraph:(id)arg1 point:(CGPoint)arg2 ;
-(id)findBestMatch:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

