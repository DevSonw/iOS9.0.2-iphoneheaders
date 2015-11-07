/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Settings/ACSettingsBasicSetting.h>

@interface ACSettingsSwitchSetting : ACSettingsBasicSetting {

	Class _settingsDetailClass;

}

@property (assign,nonatomic) char enabled; 
@property (getter=isBluetooth,nonatomic,readonly) char bluetooth; 
@property (getter=isDND,nonatomic,readonly) char DND; 
@property (getter=isLowPowerMode,nonatomic,readonly) char lowPowerMode; 
-(char)isDND;
-(Class)settingsDetailClass;
-(char)isLowPowerMode;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)isBluetooth;
@end
