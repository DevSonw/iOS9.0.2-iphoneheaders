/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, SKUIClientContext, SKUIColorScheme, UILabel, NSMutableDictionary, UISegmentedControl, SKUIStarRatingControl, UIImageView, NSString, UIView, NSArray, UIControl;

@interface SKUIReviewsHistogramView : UIView {

	UIButton* _appSupportButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	UILabel* _countLabel;
	int _numberOfUserRatings;
	NSMutableDictionary* _ratings;
	UISegmentedControl* _segmentedControl;
	SKUIStarRatingControl* _starRatingControl;
	UILabel* _starRatingControlLabel;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingStarsView;
	NSString* _versionString;
	UIButton* _writeAReviewButton;
	UIView* _bottomSeparatorView;
	UIImageView* _histogramImageView;
	NSArray* _histogramValues;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int numberOfUserRatings;                       //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating; 
@property (nonatomic,copy) NSString * versionString;                        //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,retain) NSArray * histogramValues;                     //@synthesize histogramValues=_histogramValues - In the implementation block
@property (nonatomic,readonly) UIControl * segmentedControl; 
@property (nonatomic,copy) NSArray * segmentedControlTitles; 
@property (assign,nonatomic) int selectedSegmentIndex; 
@property (nonatomic,readonly) UIControl * starRatingControl;               //@synthesize starRatingControl=_starRatingControl - In the implementation block
@property (assign,nonatomic) int personalStarRating; 
@property (nonatomic,readonly) UIControl * appSupportButton;                //@synthesize appSupportButton=_appSupportButton - In the implementation block
@property (nonatomic,readonly) UIControl * writeAReviewButton;              //@synthesize writeAReviewButton=_writeAReviewButton - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(int)selectedSegmentIndex;
-(UIControl *)segmentedControl;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)versionString;
-(int)numberOfUserRatings;
-(float)userRating;
-(void)setNumberOfUserRatings:(int)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(UIControl *)appSupportButton;
-(UIControl *)starRatingControl;
-(UIControl *)writeAReviewButton;
-(int)personalStarRating;
-(void)setSegmentedControlTitles:(NSArray *)arg1 ;
-(void)setVersionString:(NSString *)arg1 ;
-(void)setPersonalStarRating:(int)arg1 ;
-(id)_histogramImageForValues:(id)arg1 ;
-(id)_countLabelString;
-(NSArray *)segmentedControlTitles;
-(void)setHistogramValues:(NSArray *)arg1 ;
-(NSArray *)histogramValues;
@end
