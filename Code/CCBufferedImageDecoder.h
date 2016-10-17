//
//  CCBufferedImageDecoder.h
//  Concorde
//
//  Created by Boris Bügling on 10/03/15.
//  Copyright (c) 2015 Contentful GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/** JPEG decoding status */
typedef NS_ENUM(NSInteger, CCDecodingStatus){
    /** Decoding failed */
    CCDecodingStatusFailed,
    /** Decoding completely finished */
    CCDecodingStatusFinished,
    /** Another decoding pass exists */
    CCDecodingStatusNextIteration,
};

/** Decoder for JPEG images */
@interface CCBufferedImageDecoder : NSObject

/**
 *  Decompress the next pass in buffered mode.
 *
 *  @return Status of the decoding process.
 */
-(CCDecodingStatus)decompress;

/**
 *  Initialize decoder with image data.
 *
 *  @param data The image data to decode.
 *
 *  @return An initialized decoder instance.
 */
-(instancetype)initWithData:(nullable NSData *)data NS_DESIGNATED_INITIALIZER;

/**
 *  Convert the result RGB data to an image instance.
 *
 *  @return An image instance for use in Cocoa.
 */
#if TARGET_OS_IPHONE
-(nullable UIImage *)toImage;
#else
-(nullable NSImage *)toImage;
#endif

@end

NS_ASSUME_NONNULL_END
