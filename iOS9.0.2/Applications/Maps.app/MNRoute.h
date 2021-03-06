/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPRouteSuggestion.h>

@protocol MKAnnotation;
@class GEOComposedRoute, GEOComposedRouteStep, NSString, NSMapTable, NSMutableArray, RouteSet, DirectionsWaypoint, TransitDirectionsListDataSource, NSDictionary, NSArray;

@interface MNRoute : NSObject <RAPRouteSuggestion> {

	GEOComposedRoute* _composedRoute;
	unsigned _mode;
	SCD_Struct_RA7* _mapPoints;
	double* _distancesFromStart;
	double* _distancesFromEnd;
	double _distanceFromRequestToStart;
	GEOComposedRouteStep* _step;
	GEOComposedRouteStep* _previousStep;
	GEOComposedRouteStep* _highlightedStep;
	SCD_Struct_RA13 _boundingMapRect;
	id<MKAnnotation> _annotation;
	SCD_Struct_RA7 _coordinate;
	SCD_Struct_RA7 _preferredCoordinate;
	float _coordinateOffset;
	NSRange _uniqueRange;
	int _orientation;
	int _preferredOrientation;
	NSString* _key;
	NSMapTable* _turnAnglesLookup;
	NSRange _uniquePointRange;
	NSMutableArray* _trafficIncidentsOnRoute;
	RouteSet* _routeSet;
	DirectionsWaypoint* _origin;
	DirectionsWaypoint* _destination;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float meanCourseDegsForCompleteRoute; 
@property (nonatomic,readonly) float meanCourseDegsForUniqueRoute; 
@property (nonatomic,readonly) TransitDirectionsListDataSource * transitDirectionsListDataSource; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) DirectionsWaypoint * origin;                                                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) DirectionsWaypoint * destination;                                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,__weak,readonly) RouteSet * routeSet;                                                      //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) unsigned routeIndex; 
@property (nonatomic,readonly) GEOComposedRoute * composedRoute;                                                //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) double distanceFromRequestToStart;                                               //@synthesize distanceFromRequestToStart=_distanceFromRequestToStart - In the implementation block
@property (nonatomic,readonly) id<MKAnnotation> annotation;                                                     //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) unsigned mode;                                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA7* mapPoints;                                                       //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) double* distancesFromStart;                                                      //@synthesize distancesFromStart=_distancesFromStart - In the implementation block
@property (nonatomic,readonly) double* distancesFromEnd;                                                        //@synthesize distancesFromEnd=_distancesFromEnd - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA7 startCoordinate; 
@property (nonatomic,readonly) SCD_Struct_RA7 endCoordinate; 
@property (nonatomic,readonly) SCD_Struct_RA7 midPoint; 
@property (nonatomic,retain) GEOComposedRouteStep * step;                                                       //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * previousStep;                                             //@synthesize previousStep=_previousStep - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * highlightedStep;                                            //@synthesize highlightedStep=_highlightedStep - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * firstStep; 
@property (nonatomic,readonly) GEOComposedRouteStep * lastStep; 
@property (nonatomic,readonly) NSString * accessibilityExpandedDistance; 
@property (nonatomic,readonly) NSString * expandedDistance; 
@property (nonatomic,readonly) NSString * abbreviatedDistance; 
@property (nonatomic,readonly) unsigned durationSeconds; 
@property (nonatomic,readonly) NSString * expandedTravelTime; 
@property (nonatomic,readonly) NSString * abbreviatedTravelTime; 
@property (nonatomic,readonly) NSString * key;                                                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidentsOnRoute;                                               //@synthesize trafficIncidentsOnRoute=_trafficIncidentsOnRoute - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; 
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> serviceGapFormatString; 
@property (assign,nonatomic) SCD_Struct_RA7 coordinate;                                                         //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_RA7 preferredCoordinate;                                                //@synthesize preferredCoordinate=_preferredCoordinate - In the implementation block
@property (assign,nonatomic) float coordinateOffset;                                                            //@synthesize coordinateOffset=_coordinateOffset - In the implementation block
@property (assign,nonatomic) NSRange uniqueRange;                                                               //@synthesize uniqueRange=_uniqueRange - In the implementation block
@property (assign,nonatomic) int orientation;                                                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int preferredOrientation;                                                          //@synthesize preferredOrientation=_preferredOrientation - In the implementation block
@property (assign,nonatomic) NSRange uniquePointRange;                                                          //@synthesize uniquePointRange=_uniquePointRange - In the implementation block
@property (getter=isAlternateTransportType,readonly) char alternateTransportType; 
+(id)_uniqueRangesFor2Routes:(id)arg1 ;
+(void)_setUniqueRangesForRoutes:(id)arg1 ;
+(id)_uniqueRangesFor3Routes:(id)arg1 ;
+(void)updateLocationAndOrientationOfAlternateRouteAnnotationRepresentations:(id)arg1 forRoutes:(id)arg2 ;
+(void)_getIndexesOfSeparationPointOfRouteA:(id)arg1 fromRouteB:(id)arg2 indexA:(unsigned*)arg3 indexB:(unsigned*)arg4 threshold:(float)arg5 reversed:(char)arg6 ;
+(void)_setMidCoordinateForRoute:(id)arg1 ;
+(void)_setOrientationsForRoutes:(id)arg1 ;
-(char)isAlternateTransportType;
-(GEOComposedRouteStep *)firstStep;
-(void)setUniqueRange:(NSRange)arg1 ;
-(NSString *)accessibilityExpandedDistance;
-(SCD_Struct_RA7)endCoordinate;
-(int)preferredOrientation;
-(int)cameraFocusStyleForStep:(id)arg1 ;
-(SCD_Struct_RA7)preferredCoordinate;
-(SCD_Struct_RA7)closestMapPointToMapPoint:(SCD_Struct_RA7)arg1 ;
-(SCD_Struct_RA7)startCoordinate;
-(double)distanceFromRequestToStart;
-(GEOComposedRouteStep *)previousStep;
-(SCD_Struct_RA13)boundingRectForRoute;
-(SCD_Struct_RA7)_mkCoordAt:(unsigned)arg1 ;
-(GEOComposedRouteStep *)highlightedStep;
-(NSString *)expandedDistance;
-(NSString *)abbreviatedDistance;
-(void)setHighlightedStep:(GEOComposedRouteStep *)arg1 ;
-(NSString *)expandedTravelTime;
-(SCD_Struct_RA13)boundingRectForStep:(id)arg1 ;
-(void)setUniquePointRange:(NSRange)arg1 ;
-(void)setCoordinateOffset:(float)arg1 ;
-(id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2 ;
-(NSArray *)trafficIncidentsOnRoute;
-(NSString *)abbreviatedTravelTime;
-(SCD_Struct_RA7*)mapPoints;
-(NSRange)uniqueRange;
-(unsigned)durationSeconds;
-(SCD_Struct_RA13)boundingRectForStep:(id)arg1 fromPoint:(unsigned)arg2 ;
-(void)populateIncidentsFromETARoute:(id)arg1 incidentsOffset:(unsigned)arg2 ;
-(GEOComposedRouteStep *)lastStep;
-(void)setPreferredOrientation:(int)arg1 ;
-(id)travelTimeForInterval:(unsigned)arg1 ;
-(double*)distancesFromEnd;
-(void)setPreferredCoordinate:(SCD_Struct_RA7)arg1 ;
-(float)coordinateOffset;
-(id)_timeForSeconds:(unsigned)arg1 withTraffic:(char)arg2 abbreviated:(char)arg3 ;
-(id)abbreviatedTravelTimeForInterval:(unsigned)arg1 ;
-(double*)distancesFromStart;
-(NSRange)uniquePointRange;
-(float)meanCourseDegsForCompleteRoute;
-(float)meanCourseDegsForRange:(NSRange)arg1 ;
-(float)meanCourseDegsForUniqueRoute;
-(id)departureDateForContext:(int)arg1 ;
-(id)departureTimeZoneForContext:(int)arg1 ;
-(id)mainStreet;
-(TransitDirectionsListDataSource *)transitDirectionsListDataSource;
-(void)setCoordinate:(SCD_Struct_RA7)arg1 ;
-(SCD_Struct_RA7)coordinate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)key;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)_commonInit;
-(DirectionsWaypoint *)origin;
-(unsigned)mode;
-(NSDictionary *)dictionaryRepresentation;
-(DirectionsWaypoint *)destination;
-(id<MKAnnotation>)annotation;
-(SCD_Struct_RA7)midPoint;
-(id)arrivalDate;
-(unsigned)routeIndex;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(RouteSet *)routeSet;
-(id<GEOServerFormattedString>)serviceGapFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(GEOComposedRoute *)composedRoute;
-(id)arrivalTimeZone;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(GEOComposedRouteStep *)step;
@end

