//
//  AbilityCell.h
//  Dota2Heros
//
//  Created by Mac on 15/11/25.
//  Copyright © 2015年 Hanuman Tech Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AbilityCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *abilityImageview;
@property (weak, nonatomic) IBOutlet UILabel *abilityName;
@property (weak, nonatomic) IBOutlet UILabel *abilityDetailLabel;

@end
