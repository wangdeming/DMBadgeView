//
//  DMBadgeView.h
//  DMBadgeView
//
//  Created by SDC201 on 2017/5/2.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DMBadgeViewAlignment)
{
    DMBadgeViewAlignmentTopLeft = 1,
    DMBadgeViewAlignmentTopRight,
    DMBadgeViewAlignmentTopCenter,
    DMBadgeViewAlignmentCenterLeft,
    DMBadgeViewAlignmentCenterRight,
    DMBadgeViewAlignmentBottomLeft,
    DMBadgeViewAlignmentBottomRight,
    DMBadgeViewAlignmentBottomCenter,
    DMBadgeViewAlignmentCenter
};

@interface DMBadgeView : UIView

@property (nonatomic, copy) NSString *badgeText;

#pragma mark - Customization

@property (nonatomic, assign) DMBadgeViewAlignment badgeAlignment UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *badgeTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGSize badgeTextShadowOffset UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *badgeTextShadowColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIFont *badgeTextFont UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *badgeBackgroundColor UI_APPEARANCE_SELECTOR;

/**
 * Color of the overlay circle at the top. Default is semi-transparent white.
 */
@property (nonatomic, strong) UIColor *badgeOverlayColor UI_APPEARANCE_SELECTOR;

/**
 * Color of the badge shadow. Default is semi-transparent black.
 */
@property (nonatomic, strong) UIColor *badgeShadowColor UI_APPEARANCE_SELECTOR;

/**
 * Offset of the badge shadow. Default is 3.0 points down.
 */
@property (nonatomic, assign) CGSize badgeShadowSize UI_APPEARANCE_SELECTOR;

/**
 * Width of the circle around the badge. Default is 2.0 points.
 */
@property (nonatomic, assign) CGFloat badgeStrokeWidth UI_APPEARANCE_SELECTOR;

/**
 * Color of the circle around the badge. Default is white.
 */
@property (nonatomic, strong) UIColor *badgeStrokeColor UI_APPEARANCE_SELECTOR;

/**
 * Allows to shift the badge by x and y points.
 */
@property (nonatomic, assign) CGPoint badgePositionAdjustment UI_APPEARANCE_SELECTOR;

/**
 * You can use this to position the view if you're drawing it using drawRect instead of `-addSubview:`
 * (optional) If not provided, the superview frame is used.
 */
@property (nonatomic, assign) CGRect frameToPositionInRelationWith UI_APPEARANCE_SELECTOR;

/**
 * The minimum width of a badge circle. We need this to avoid elipse shapes when using small fonts.
 */
@property (nonatomic, assign) CGFloat badgeMinWidth UI_APPEARANCE_SELECTOR;

/**
 * Optionally init using this method to have the badge automatically added to another view.
 */
- (id)initWithParentView:(UIView *)parentView alignment:(DMBadgeViewAlignment)alignment;

@end
