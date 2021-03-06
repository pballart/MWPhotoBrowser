//
//  CRMotionView.h
//  CRMotionView
//
//  Created by Christian Roman on 06/02/14.
//  Copyright (c) 2014 Christian Roman. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CRMotionViewDelegate
@optional
-(void)handleTap;
@end

@interface CRMotionView : UIView

@property (nonatomic, strong) UIImage  *image;
@property (nonatomic, strong) UIView   *contentView;
@property (nonatomic, assign, getter = isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, assign, getter = isScrollIndicatorEnabled) BOOL scrollIndicatorEnabled;
@property (nonatomic, assign, getter = isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic, retain) id delegate;

- (instancetype)initWithFrame:(CGRect)frame image:(UIImage *)image;
- (instancetype)initWithFrame:(CGRect)frame contentView:(UIView *)contentView;
- (void)prepareForReuse;
- (void)resetParallax;


@end
