/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {

	NSString* _bodyData;
	SUScriptError* _error;
	int _statusCode;

}

@property (readonly) NSString * bodyData; 
@property (readonly) SUScriptError * error; 
@property (readonly) int HTTPStatusCode; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(SUScriptError *)error;
-(void)dealloc;
-(id)attributeKeys;
-(NSString *)bodyData;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(int)HTTPStatusCode;
@end
