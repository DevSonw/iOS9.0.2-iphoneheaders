/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@protocol BookmarkFavoritesActionButtonDelegate;
@class UIImageView, VibrantLabelView, VibrantSeparatorView, UIView;

@interface BookmarkFavoritesActionButton : UIButton {

	UIImageView* _iconView;
	UIImageView* _iconOverlayView;
	VibrantLabelView* _label;
	VibrantSeparatorView* _separatorView;
	UIView* _selectionView;
	char _usesVibrantEffect;
	float _iconYOffset;
	id<BookmarkFavoritesActionButtonDelegate> _delegate;

}

@property (assign,nonatomic) float iconYOffset;                                                      //@synthesize iconYOffset=_iconYOffset - In the implementation block
@property (assign,nonatomic) char usesVibrantEffect;                                                 //@synthesize usesVibrantEffect=_usesVibrantEffect - In the implementation block
@property (assign,nonatomic,__weak) id<BookmarkFavoritesActionButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setUsesVibrantEffect:(char)arg1 ;
-(char)usesVibrantEffect;
-(id)_nonVibrantTextColor;
-(void)_touchDown:(id)arg1 ;
-(void)_touchUp:(id)arg1 ;
-(void)configureWithActivity:(id)arg1 ;
-(float)iconYOffset;
-(void)setIconYOffset:(float)arg1 ;
-(void)setSeparatorHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<BookmarkFavoritesActionButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<BookmarkFavoritesActionButtonDelegate>)delegate;
@end
