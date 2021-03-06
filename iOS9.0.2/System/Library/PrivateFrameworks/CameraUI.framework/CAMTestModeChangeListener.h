/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMTestModeChangeListener : NSObject {

	int _desiredMode;
	int _desiredDevice;
	/*^block*/id _handler;

}

@property (assign,nonatomic) int desiredMode;                //@synthesize desiredMode=_desiredMode - In the implementation block
@property (assign,nonatomic) int desiredDevice;              //@synthesize desiredDevice=_desiredDevice - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(int)desiredMode;
-(void)setDesiredMode:(int)arg1 ;
-(int)desiredDevice;
-(void)setDesiredDevice:(int)arg1 ;
@end

