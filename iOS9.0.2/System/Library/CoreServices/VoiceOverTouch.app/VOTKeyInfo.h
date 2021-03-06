/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AXEventRepresentation, NSString;

@interface VOTKeyInfo : NSObject <NSCopying> {

	AXEventRepresentation* _eventRecord;
	struct {
		unsigned keyDown : 1;
		unsigned keyUp : 1;
		unsigned modifiersChanged : 1;
	}  _flags;
	NSString* _characters;
	NSString* _originalCharacters;
	int _eventOrigin;
	unsigned _changedModifiers;

}

@property (nonatomic,retain) AXEventRepresentation * eventRecord;              //@synthesize eventRecord=_eventRecord - In the implementation block
@property (nonatomic,readonly) int mediaKeyCode; 
@property (nonatomic,retain) NSString * characters;                            //@synthesize characters=_characters - In the implementation block
@property (nonatomic,retain) NSString * originalCharacters;                    //@synthesize originalCharacters=_originalCharacters - In the implementation block
@property (assign,nonatomic) unsigned short keyCode; 
@property (assign,nonatomic) char keyDown; 
@property (assign,nonatomic) char keyUp; 
@property (assign,nonatomic) char modifiersChanged; 
@property (nonatomic,readonly) unsigned modifierState; 
@property (assign,nonatomic) int eventOrigin;                                  //@synthesize eventOrigin=_eventOrigin - In the implementation block
@property (assign,nonatomic) unsigned changedModifiers;                        //@synthesize changedModifiers=_changedModifiers - In the implementation block
@property (nonatomic,readonly) char isShiftKeyPressed; 
@property (nonatomic,readonly) char isCommandKeyPressed; 
@property (nonatomic,readonly) char isOptionKeyPressed; 
@property (nonatomic,readonly) char isControlKeyPressed; 
@property (nonatomic,readonly) char isCapsLockKeyToggledOn; 
@property (nonatomic,readonly) char isCapsLockKeyDown; 
@property (nonatomic,readonly) char isCapsLockKeyUp; 
@property (nonatomic,readonly) char isMediaKey; 
@property (nonatomic,readonly) char isAppleVendorKey; 
@property (nonatomic,readonly) char isBrightnessKey; 
@property (nonatomic,readonly) char isEscapeKey; 
@property (nonatomic,readonly) char isArrowKey; 
-(id)initWithEventRepresentation:(id)arg1 ;
-(AXEventRepresentation *)eventRecord;
-(char)isMediaKey;
-(char)isCommandKeyPressed;
-(char)isOptionKeyPressed;
-(unsigned)changedModifiers;
-(char)isAppleVendorKey;
-(int)mediaKeyCode;
-(char)isControlKeyPressed;
-(NSString *)originalCharacters;
-(void)setEventOrigin:(int)arg1 ;
-(char)isShiftKeyPressed;
-(char)isEscapeKey;
-(char)keyUp;
-(char)modifiersChanged;
-(void)setChangedModifiers:(unsigned)arg1 ;
-(char)isArrowKey;
-(char)isCapsLockKeyDown;
-(char)isCapsLockKeyUp;
-(void)setModifiersChanged:(char)arg1 ;
-(int)eventOrigin;
-(char)isBrightnessKey;
-(void)setEventRecord:(AXEventRepresentation *)arg1 ;
-(void)setKeyUp:(char)arg1 ;
-(char)isCapsLockKeyToggledOn;
-(void)setOriginalCharacters:(NSString *)arg1 ;
-(void)_setCommandKeyPressed:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characters;
-(unsigned short)keyCode;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setKeyDown:(char)arg1 ;
-(unsigned)modifierState;
-(char)keyDown;
-(void)setCharacters:(NSString *)arg1 ;
@end

