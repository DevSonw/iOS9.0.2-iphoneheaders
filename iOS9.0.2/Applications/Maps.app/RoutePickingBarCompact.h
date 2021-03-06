/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RoutePickingBar.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, UIToolbar, NSString;

@interface RoutePickingBarCompact : RoutePickingBar <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _middleSelectorContainerItem;
	UIToolbar* _toolbar;
	float _cachedContentHeight;
	char _dimmed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbarItemsForToolbar:(id)arg1 ;
-(void)topBarSizeDidChange:(CGSize)arg1 ;
-(id)sharePresentationSource;
-(id)directionsSearchPresentationSource;
-(float)toolbarContentHeight;
-(void)updateContentHeight;
-(char)needsUpdatingDuringBoundsChange;
-(void)_setCachedContentHeight:(float)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

