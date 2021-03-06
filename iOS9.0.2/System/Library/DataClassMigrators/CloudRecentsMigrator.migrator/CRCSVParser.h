/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInputStream, NSData, NSMutableData, NSError, NSString;

@interface CRCSVParser : NSObject {

	char _shouldAbort;
	NSInputStream* _stream;
	NSData* _separatorData;
	NSMutableData* _data;
	unsigned _head;
	char _consumedNullText;
	/*^block*/id _parsedLineBlock;
	NSError* _parserError;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
-(void)_fillBuffer:(unsigned)arg1 ;
-(id)_parseTwoDoubleQuotes;
-(id)_parseEscapedText;
-(id)_parseRecord;
-(id)_consumeSingleCharacter:(char)arg1 ;
-(id)_parseSeparator;
-(char)_ensureBufferSize:(unsigned)arg1 ;
-(id)_parseDoubleQuote;
-(id)_parseText;
-(id)_parseLineSeparator;
-(char)parseableDataAvailable;
-(id)_parseField;
-(void)setParsedLineBlock:(/*^block*/id)arg1 ;
-(unsigned)_availableBytes;
-(void)abortParsing;
-(id)parserError;
-(void)setSeparator:(NSString *)arg1 ;
-(char)shouldProceedParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(char)parse;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)separator;
@end

