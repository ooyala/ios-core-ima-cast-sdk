#import "OOTBXML.h"

@class OOVASTResource;

/**
 * A Companion ad that was defined in a VAST advertisement 
 * \ingroup vast
 */
@interface OOVASTCompanion : NSObject

@property (readonly, nonatomic) NSString *compId;
@property (readonly, nonatomic) NSInteger width;
@property (readonly, nonatomic) NSInteger height;
@property (readonly, nonatomic) NSInteger assetWidth;
@property (readonly, nonatomic) NSInteger assetHeight;
@property (readonly, nonatomic) NSInteger expandedWidth;
@property (readonly, nonatomic) NSInteger expandedHeight;
@property (readonly, nonatomic) NSString *apiFramework;
@property (readonly, nonatomic) NSString *adSlotId;

@property (readonly, nonatomic) OOVASTResource *resource;
@property (readonly, nonatomic) NSMutableDictionary *trackingEvents;
@property (readonly, nonatomic) NSString *clickThrough;
@property (readonly, nonatomic) OOTBXMLElement *creativeExtensions;
@property (readonly, nonatomic) NSString *parameters;

- (instancetype)initWithElement:(OOTBXMLElement *)element;

@end
