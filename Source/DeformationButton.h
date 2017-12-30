//
//  DeformationButton.h
//  DeformationButton
//
//  Created by LuciusLu on 15/3/16.
//  Copyright (c) 2015年 MOZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMMaterialDesignSpinner.h"

@interface DeformationButton : UIButton

@property(nonatomic, assign) BOOL isLoading;
@property(nonatomic, strong) MMMaterialDesignSpinner *spinnerView;
@property(nonatomic, strong) UIColor *contentColor;
@property(nonatomic, strong) UIColor *progressColor;

@property(nonatomic, strong) UIButton *forDisplayButton;

- (instancetype)initWithFrame:(CGRect)frame color:(UIColor*)color cornerRadius:(CGFloat)cornerRadius;

@end
