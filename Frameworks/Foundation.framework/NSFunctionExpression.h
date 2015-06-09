/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFunctionExpression : NSExpression {
    NSArray * _arguments;
    NSExpression * _operand;
    SEL  _selector;
}

+ (BOOL)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (BOOL)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (void)allowEvaluation;
- (id)arguments;
- (id)binaryOperatorForSelector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)function;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionType:(unsigned int)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)operand;
- (id)predicateFormat;
- (SEL)selector;

@end
