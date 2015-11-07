/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSURL;

@interface ServiceProductPageConfiguration : NSObject {

	NSString* _cancelButtonTitle;
	NSString* _hostApplicationIdentifier;
	char _parentalRequest;
	NSString* _parentalRequestPromptString;
	NSDictionary* _productPageDictionary;
	int _productPageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;
	NSString* _rightButtonTitle;
	NSDictionary* _scriptContextDictionary;
	char _showsRightButton;
	char _showsStoreButton;
	char _loadable;

}

@property (assign,getter=isLoadable,nonatomic) char loadable;                            //@synthesize loadable=_loadable - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                 //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * rightButtonTitle;                                  //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (assign,nonatomic) char showsRightButton;                                      //@synthesize showsRightButton=_showsRightButton - In the implementation block
@property (assign,nonatomic) char showsStoreButton;                                      //@synthesize showsStoreButton=_showsStoreButton - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;                         //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (assign,getter=isParentalRequest,nonatomic) char parentalRequest;              //@synthesize parentalRequest=_parentalRequest - In the implementation block
@property (nonatomic,copy) NSString * parentalRequestPromptString;                       //@synthesize parentalRequestPromptString=_parentalRequestPromptString - In the implementation block
@property (nonatomic,copy) NSDictionary * productPageDictionary;                         //@synthesize productPageDictionary=_productPageDictionary - In the implementation block
@property (assign,nonatomic) int productPageStyle;                                       //@synthesize productPageStyle=_productPageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;                             //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                                           //@synthesize productURL=_productURL - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                       //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
-(id)copyITMLOptionsDictionary;
-(char)isLoadable;
-(char)isParentalRequest;
-(void)setParentalRequest:(char)arg1 ;
-(NSString *)parentalRequestPromptString;
-(void)setParentalRequestPromptString:(NSString *)arg1 ;
-(NSDictionary *)productPageDictionary;
-(void)setProductPageDictionary:(NSDictionary *)arg1 ;
-(NSString *)rightButtonTitle;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(char)showsRightButton;
-(void)setShowsRightButton:(char)arg1 ;
-(void)setLoadable:(char)arg1 ;
-(void)setScriptContextDictionary:(NSDictionary *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
-(NSURL *)productURL;
-(NSDictionary *)productParameters;
-(NSDictionary *)scriptContextDictionary;
-(char)showsStoreButton;
-(void)setShowsStoreButton:(char)arg1 ;
-(void)setProductParameters:(NSDictionary *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
@end
