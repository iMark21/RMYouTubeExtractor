//
//  RMYouTubeExtractor.h
//  RMYouTubeExtractor
//
//  Created by Rune Madsen on 2014-04-26.
//  Copyright (c) 2014 The App Boutique. All rights reserved.
//

typedef NS_ENUM (NSUInteger, RMYouTubeExtractorVideoQuality) {
	RMYouTubeExtractorVideoQualitySmall240  = 36,
	RMYouTubeExtractorVideoQualityMedium360 = 18,
	RMYouTubeExtractorVideoQualityHD720     = 22,
	RMYouTubeExtractorVideoQualityHD1080    = 37,
};

@interface RMYouTubeExtractor : NSObject

+(RMYouTubeExtractor*)sharedInstance;

-(void)extractVideoForIdentifier:(NSString*)videoIdentifier completion:(void (^)(NSDictionary *videoDictionary, NSError *error))completion;

@end
