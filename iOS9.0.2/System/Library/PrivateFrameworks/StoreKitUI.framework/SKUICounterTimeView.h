/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, _SKUICounterTimeFieldView, NSDate, UIColor, UIFont;

@interface SKUICounterTimeView : UIView {

	SKUIClientContext* _clientContext;
	_SKUICounterTimeFieldView* _daysFieldView;
	NSDate* _endDate;
	_SKUICounterTimeFieldView* _hoursFieldView;
	int _lastTimeValue;
	_SKUICounterTimeFieldView* _minutesFieldView;
	_SKUICounterTimeFieldView* _secondsFieldView;
	UIColor* _textColor;
	UIFont* _valueFont;
	unsigned _visibleFields;

}

@property (nonatomic,copy) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                  //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) unsigned visibleFields;              //@synthesize visibleFields=_visibleFields - In the implementation block
-(NSDate *)endDate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setVisibleFields:(unsigned)arg1 ;
-(unsigned)visibleFields;
-(id)initWithClientContext:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(void)reloadTimeValue;
-(void)_setValuesUsingTimestamp:(int)arg1 ;
-(id)_allFieldViews;
-(id)_visibleFieldViews;
-(float)_fieldSpacingForFieldCount:(int)arg1 fieldWidth:(float)arg2 totalWidth:(float)arg3 ;
-(UIFont *)valueFont;
@end

