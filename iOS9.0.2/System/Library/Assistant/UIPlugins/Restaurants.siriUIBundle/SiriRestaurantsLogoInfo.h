/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, SAUIAppPunchOut;

@interface SiriRestaurantsLogoInfo : NSObject {

	UIImage* _logoImage;
	UIImage* _pressedImage;
	SAUIAppPunchOut* _punchOut;

}

@property (nonatomic,retain) UIImage * logoImage;                     //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) UIImage * pressedImage;                  //@synthesize pressedImage=_pressedImage - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * punchOut;              //@synthesize punchOut=_punchOut - In the implementation block
-(void)setPressedImage:(UIImage *)arg1 ;
-(UIImage *)pressedImage;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setLogoImage:(UIImage *)arg1 ;
-(UIImage *)logoImage;
@end

