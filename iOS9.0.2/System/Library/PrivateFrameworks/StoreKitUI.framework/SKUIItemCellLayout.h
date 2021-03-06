/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICellLayout.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@class SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, UILabel, SKUIItemState, UIView, UIImage, NSString;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {

	char _iconImageHidden;
	char _hidesItemOfferButton;
	char _highlighted;
	SKUICellImageView* _iconImageView;
	SKUIItemOffer* _itemOffer;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	UILabel* _itemOfferNoticeLabel;
	SKUIItemState* _itemState;
	char _restricted;
	char _selected;
	UIView* _removeControlView;

}

@property (nonatomic,retain) UIImage * iconImage; 
@property (assign,getter=isIconImageHidden,nonatomic) char iconImageHidden;                          //@synthesize iconImageHidden=_iconImageHidden - In the implementation block
@property (assign,nonatomic) char displaysItemOfferButton; 
@property (assign,getter=isRestricted,nonatomic) char restricted;                                    //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,retain) SKUIItemOffer * itemOffer;                                              //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;              //@synthesize itemOfferButtonAppearance=_itemOfferButtonAppearance - In the implementation block
@property (nonatomic,copy) NSString * itemOfferNoticeString; 
@property (nonatomic,copy) SKUIItemState * itemState;                                                //@synthesize itemState=_itemState - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                                        //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,readonly) UILabel * itemOfferNoticeLabel;                                       //@synthesize itemOfferNoticeLabel=_itemOfferNoticeLabel - In the implementation block
@property (nonatomic,readonly) UIView * removeControlView;                                           //@synthesize removeControlView=_removeControlView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIconImage:(UIImage *)arg1 ;
-(UIView *)iconImageView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UIImage *)iconImage;
-(SKUIItemOfferButton *)itemOfferButton;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(void)setItemOffer:(SKUIItemOffer *)arg1 ;
-(SKUIItemOffer *)itemOffer;
-(SKUIItemState *)itemState;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(char)arg2 ;
-(SKUIItemOfferButtonAppearance *)itemOfferButtonAppearance;
-(void)setRestricted:(char)arg1 ;
-(void)setIconImageHidden:(char)arg1 ;
-(void)setItemOfferButtonAppearance:(SKUIItemOfferButtonAppearance *)arg1 ;
-(void)resetLayout;
-(void)_reloadItemOfferButton:(char)arg1 ;
-(char)isIconImageHidden;
-(void)_reloadItemOfferVisibility;
-(char)_canShowItemOfferNotice;
-(void)layoutForItemOfferChange;
-(void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2 ;
-(id)_parentCollectionViewCell;
-(char)displaysItemOfferButton;
-(char)isRestricted;
-(void)_cancelItemOfferConfirmationAction:(id)arg1 ;
-(void)_showItemOfferConfirmationAction:(id)arg1 ;
-(NSString *)itemOfferNoticeString;
-(void)setDisplaysItemOfferButton:(char)arg1 ;
-(void)setItemOfferNoticeString:(NSString *)arg1 ;
-(char)_useCloudButtonForItemState:(id)arg1 ;
-(UILabel *)itemOfferNoticeLabel;
-(UIView *)removeControlView;
@end

