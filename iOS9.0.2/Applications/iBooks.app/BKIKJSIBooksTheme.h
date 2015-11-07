/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <iBooks/BKIKJSIBooksTheme.h>
@class NSString;


@protocol BKIKJSIBooksTheme <JSExport>
@property (retain,readonly) NSString * themeName; 
@property (retain,readonly) NSString * textColor; 
@property (retain,readonly) NSString * backgroundColor; 
@required
-(NSString *)backgroundColor;
-(NSString *)textColor;
-(NSString *)themeName;

@end


@protocol AEAssetAppearanceDelegate;
@class NSString;

@interface BKIKJSIBooksTheme : IKJSObject <BKIKJSIBooksTheme> {

	id<AEAssetAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic,__weak) id<AEAssetAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (retain,readonly) NSString * themeName; 
@property (retain,readonly) NSString * textColor; 
@property (retain,readonly) NSString * backgroundColor; 
-(id<AEAssetAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AEAssetAppearanceDelegate>)arg1 ;
-(id)initWithAppContext:(id)arg1 appearanceDelegate:(id)arg2 ;
-(void)themeDidChange:(id)arg1 ;
-(NSString *)backgroundColor;
-(void)dealloc;
-(NSString *)textColor;
-(NSString *)themeName;
@end
