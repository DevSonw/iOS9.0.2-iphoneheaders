/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(char)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)htmlContent;
-(id)fileWrapperForcingDownload:(char)arg1 ;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 isComplete:(char*)arg5 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(char)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(char)arg3 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end
