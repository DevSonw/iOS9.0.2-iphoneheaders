/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol _MKPlaceTransitIncidentCellDelegate;
@class UILabel, UIButton, NSLayoutConstraint, NSString;

@interface _MKPlaceTransitIncidentCell : MKCustomSeparatorTableViewCell {

	UILabel* _titleLabel;
	UILabel* _summaryLabel;
	UIButton* _button;
	NSLayoutConstraint* _titleToTopConstraint;
	NSLayoutConstraint* _summaryToTitleConstraint;
	id<_MKPlaceTransitIncidentCellDelegate> _delegate;

}

@property (nonatomic,copy) NSString * incidentTitle; 
@property (nonatomic,copy) NSString * incidentSummary; 
@property (assign,nonatomic,__weak) id<_MKPlaceTransitIncidentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setIncidentTitle:(NSString *)arg1 ;
-(NSString *)incidentTitle;
-(void)_buttonSelected;
-(void)setIncidentSummary:(NSString *)arg1 ;
-(NSString *)incidentSummary;
-(void)setDelegate:(id<_MKPlaceTransitIncidentCellDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id<_MKPlaceTransitIncidentCellDelegate>)delegate;
-(void)tintColorDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
