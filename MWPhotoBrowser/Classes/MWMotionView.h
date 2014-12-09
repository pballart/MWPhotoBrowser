//
//  MWMotionView.h
//  MWPhotoBrowser
//
//  Created by Pau Ballart on 12/2/14.
//
//

#import <UIKit/UIKit.h>
#import "MWPhotoProtocol.h"

@class MWPhotoBrowser, MWPhoto, MWCaptionView;

@interface MWMotionView : UIView


@property () NSUInteger index;
@property (nonatomic) id <MWPhoto> photo;
@property (nonatomic, weak) MWCaptionView *captionView;
@property (nonatomic, weak) UIButton *selectedButton;

- (id)initWithPhotoBrowser:(MWPhotoBrowser *)browser;
- (void)displayImage;
- (void)displayImageFailure;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)prepareForReuse;
- (void)resetParallax;

@end
