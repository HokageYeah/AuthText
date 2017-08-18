//
//  AuthcodeView.h
//  AuthText
//
//  Created by 余晔 on 2017/4/5.
//  Copyright © 2017年 余晔. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AuthcodeView : UIView

@property (strong, nonatomic) NSArray *dataArray;//字符素材数组

@property (strong, nonatomic) NSMutableString *authCodeStr;//验证码字符串

@end
