//
//  StarRatingView.h
//  Foodwise
//
//  Created by Brian Wong on 8/30/16.
//  Copyright © 2016 Brian Wong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StarRatingView : UIView

- (void)convertNumberToStars:(NSNumber*)rating;

@end