//
//  PPBaseResult.h
//  BarcodeFramework
//
//  Created by Jura on 04/04/14.
//  Copyright (c) 2014 PhotoPay. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Enumeration of all result types
 */
typedef NS_ENUM(NSInteger, PPBaseResultType) {
    PPBaseResultTypeBarcode,
    PPBaseResultTypeUSDL,
    PPBaseResultTypePhotoPay,
    PPBaseResultTypeOCR,
    PPBaseResultTypePhotoMath
};

/**
 Abstract result of pdf417.mobi library
 */
@interface PPBaseResult : NSObject <NSCopying>

/**
 Type of the result

 For easier type checking when casting
 */
@property (nonatomic, assign, readonly) PPBaseResultType resultType;

/**
 Designated initializer
 
 Requires the type property
 */
- (id)initWithResultType:(PPBaseResultType)resultType;

/**
 Returns the xml representation of this result
 */
- (NSString*)xml;

@end
