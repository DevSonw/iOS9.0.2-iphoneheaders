/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class ICLabel, NSLayoutConstraint, NSString, NSAttributedString, UIView;

@interface ICAttachmentBrickTitleView : UIView {

	char _titleBold;
	char _adjustCenteringForDescender;
	int _titleMaxNumberOfLines;
	int _subtitleMaxNumberOfLines;
	int _subtitleFontSize;
	ICLabel* _titleView;
	ICLabel* _subtitleView;
	UIView* _textBlockView;
	NSLayoutConstraint* _textBlockCenterConstraint;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy) NSAttributedString * titleAttributedString; 
@property (assign,nonatomic) int titleMaxNumberOfLines;                                   //@synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines - In the implementation block
@property (assign,nonatomic) char titleBold;                                              //@synthesize titleBold=_titleBold - In the implementation block
@property (nonatomic,copy) NSString * subtitleString; 
@property (nonatomic,copy) NSAttributedString * subtitleAttributedString; 
@property (assign,nonatomic) int subtitleMaxNumberOfLines;                                //@synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines - In the implementation block
@property (assign,nonatomic) int subtitleFontSize;                                        //@synthesize subtitleFontSize=_subtitleFontSize - In the implementation block
@property (assign,nonatomic) char adjustCenteringForDescender;                            //@synthesize adjustCenteringForDescender=_adjustCenteringForDescender - In the implementation block
@property (nonatomic,retain) ICLabel * titleView;                                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) ICLabel * subtitleView;                                      //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,retain) UIView * textBlockView;                                      //@synthesize textBlockView=_textBlockView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBlockCenterConstraint;              //@synthesize textBlockCenterConstraint=_textBlockCenterConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                       //@synthesize heightConstraint=_heightConstraint - In the implementation block
+(void)contentSizeCategoryChanged:(id)arg1 ;
+(float)maxTextBoxHeight;
+(void)initialize;
-(void)setTitleMaxNumberOfLines:(int)arg1 ;
-(void)setTitleBold:(char)arg1 ;
-(void)setSubtitleMaxNumberOfLines:(int)arg1 ;
-(void)setSubtitleFontSize:(int)arg1 ;
-(void)setSubtitleAttributedString:(NSAttributedString *)arg1 ;
-(ICLabel *)subtitleView;
-(NSAttributedString *)subtitleAttributedString;
-(void)setTextBlockView:(UIView *)arg1 ;
-(UIView *)textBlockView;
-(void)setTextBlockCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textBlockCenterConstraint;
-(void)setSubtitleView:(ICLabel *)arg1 ;
-(void)updateHeightConstraint;
-(void)layoutText;
-(int)titleMaxNumberOfLines;
-(int)subtitleMaxNumberOfLines;
-(char)titleBold;
-(char)adjustCenteringForDescender;
-(int)subtitleFontSize;
-(void)setAdjustCenteringForDescender:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(ICLabel *)titleView;
-(void)setTitleView:(ICLabel *)arg1 ;
-(NSString *)subtitleString;
-(NSAttributedString *)titleAttributedString;
-(NSLayoutConstraint *)heightConstraint;
-(void)setSubtitleString:(NSString *)arg1 ;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)contentSizeCategoryDidChange;
@end

