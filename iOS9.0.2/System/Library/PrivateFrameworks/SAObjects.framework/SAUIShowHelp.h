/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * text; 
+(id)showHelp;
+(id)showHelpWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)_afui_usefulUserResultType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
@end
