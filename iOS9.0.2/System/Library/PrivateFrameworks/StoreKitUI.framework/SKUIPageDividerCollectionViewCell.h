/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIView, UIColor, NSString;

@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	UIView* _topDividerLine;
	UIView* _bottomDividerLine;
	float _dividerHeight;
	int _dividerType;
	UIView* _insetView;
	UIColor* _insetColor;
	float _leftEdgeInset;
	float _rightEdgeInset;
	int _verticalAlignment;

}

@property (assign,nonatomic) int dividerType;                       //@synthesize dividerType=_dividerType - In the implementation block
@property (assign,nonatomic) float dividerHeight;                   //@synthesize dividerHeight=_dividerHeight - In the implementation block
@property (assign,nonatomic) float leftEdgeInset;                   //@synthesize leftEdgeInset=_leftEdgeInset - In the implementation block
@property (assign,nonatomic) float rightEdgeInset;                  //@synthesize rightEdgeInset=_rightEdgeInset - In the implementation block
@property (assign,nonatomic) int verticalAlignment;                 //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(int)dividerType;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(float)leftEdgeInset;
-(void)setLeftEdgeInset:(float)arg1 ;
-(float)rightEdgeInset;
-(void)setRightEdgeInset:(float)arg1 ;
-(void)setDividerType:(int)arg1 ;
-(void)setDividerHeight:(float)arg1 ;
-(void)setInsetColor:(id)arg1 ;
-(void)setColoringWithStyle:(id)arg1 ;
-(float)dividerHeight;
@end

