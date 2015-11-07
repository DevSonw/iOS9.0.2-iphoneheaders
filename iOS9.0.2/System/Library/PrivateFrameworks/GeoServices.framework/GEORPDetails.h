/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSString, NSMutableArray;

@interface GEORPDetails : PBCodable <NSCopying> {

	int _directionsType;
	GEOMapRegion* _displayRegion;
	int _displayStyle;
	GEORPUpdatedLabel* _label;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	int _mapType;
	NSMutableArray* _places;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle;                             //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) char hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) char hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) char hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion;                 //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                      //@synthesize places=_places - In the implementation block
@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) GEORPUpdatedLabel * label;                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char hasDirectionsType; 
@property (assign,nonatomic) int directionsType;                           //@synthesize directionsType=_directionsType - In the implementation block
@property (assign,nonatomic) char hasMapType; 
@property (assign,nonatomic) int mapType;                                  //@synthesize mapType=_mapType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORPUpdatedLabel *)label;
-(void)setLabel:(GEORPUpdatedLabel *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapRegion *)displayRegion;
-(char)hasDisplayRegion;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(char)hasMapType;
-(void)setHasMapType:(char)arg1 ;
-(char)hasLocalizedTitle;
-(id)placeAtIndex:(unsigned)arg1 ;
-(void)setDirectionsType:(int)arg1 ;
-(void)setHasDisplayStyle:(char)arg1 ;
-(int)directionsType;
-(void)addPlace:(id)arg1 ;
-(char)hasDisplayStyle;
-(void)setHasDirectionsType:(char)arg1 ;
-(unsigned)placesCount;
-(NSMutableArray *)places;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(int)displayStyle;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(char)hasLocalizedDescription;
-(char)hasDirectionsType;
-(char)hasLabel;
-(void)clearPlaces;
-(char)readFrom:(id)arg1 ;
@end
