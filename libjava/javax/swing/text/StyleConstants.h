
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_StyleConstants__
#define __javax_swing_text_StyleConstants__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Icon;
      namespace text
      {
          class AttributeSet;
          class MutableAttributeSet;
          class StyleConstants;
          class TabSet;
      }
    }
  }
}

class javax::swing::text::StyleConstants : public ::java::lang::Object
{

public: // actually package-private
  StyleConstants(::java::lang::String *);
public:
  virtual ::java::lang::String * toString();
  static jint getAlignment(::javax::swing::text::AttributeSet *);
  static ::java::awt::Color * getBackground(::javax::swing::text::AttributeSet *);
  static jint getBidiLevel(::javax::swing::text::AttributeSet *);
  static ::java::awt::Component * getComponent(::javax::swing::text::AttributeSet *);
  static jfloat getFirstLineIndent(::javax::swing::text::AttributeSet *);
  static ::java::lang::String * getFontFamily(::javax::swing::text::AttributeSet *);
  static jint getFontSize(::javax::swing::text::AttributeSet *);
  static ::java::awt::Color * getForeground(::javax::swing::text::AttributeSet *);
  static ::javax::swing::Icon * getIcon(::javax::swing::text::AttributeSet *);
  static jfloat getLeftIndent(::javax::swing::text::AttributeSet *);
  static jfloat getLineSpacing(::javax::swing::text::AttributeSet *);
  static jfloat getRightIndent(::javax::swing::text::AttributeSet *);
  static jfloat getSpaceAbove(::javax::swing::text::AttributeSet *);
  static jfloat getSpaceBelow(::javax::swing::text::AttributeSet *);
  static ::javax::swing::text::TabSet * getTabSet(::javax::swing::text::AttributeSet *);
  static jboolean isBold(::javax::swing::text::AttributeSet *);
  static jboolean isItalic(::javax::swing::text::AttributeSet *);
  static jboolean isStrikeThrough(::javax::swing::text::AttributeSet *);
  static jboolean isSubscript(::javax::swing::text::AttributeSet *);
  static jboolean isSuperscript(::javax::swing::text::AttributeSet *);
  static jboolean isUnderline(::javax::swing::text::AttributeSet *);
  static void setAlignment(::javax::swing::text::MutableAttributeSet *, jint);
  static void setBackground(::javax::swing::text::MutableAttributeSet *, ::java::awt::Color *);
  static void setBidiLevel(::javax::swing::text::MutableAttributeSet *, jint);
  static void setBold(::javax::swing::text::MutableAttributeSet *, jboolean);
  static void setComponent(::javax::swing::text::MutableAttributeSet *, ::java::awt::Component *);
  static void setFirstLineIndent(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setFontFamily(::javax::swing::text::MutableAttributeSet *, ::java::lang::String *);
  static void setFontSize(::javax::swing::text::MutableAttributeSet *, jint);
  static void setForeground(::javax::swing::text::MutableAttributeSet *, ::java::awt::Color *);
  static void setIcon(::javax::swing::text::MutableAttributeSet *, ::javax::swing::Icon *);
  static void setItalic(::javax::swing::text::MutableAttributeSet *, jboolean);
  static void setLeftIndent(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setLineSpacing(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setRightIndent(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setSpaceAbove(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setSpaceBelow(::javax::swing::text::MutableAttributeSet *, jfloat);
  static void setStrikeThrough(::javax::swing::text::MutableAttributeSet *, jboolean);
  static void setSubscript(::javax::swing::text::MutableAttributeSet *, jboolean);
  static void setSuperscript(::javax::swing::text::MutableAttributeSet *, jboolean);
  static void setTabSet(::javax::swing::text::MutableAttributeSet *, ::javax::swing::text::TabSet *);
  static void setUnderline(::javax::swing::text::MutableAttributeSet *, jboolean);
  static const jint ALIGN_LEFT = 0;
  static const jint ALIGN_CENTER = 1;
  static const jint ALIGN_RIGHT = 2;
  static const jint ALIGN_JUSTIFIED = 3;
  static ::java::lang::Object * Background;
  static ::java::lang::Object * BidiLevel;
  static ::java::lang::Object * Bold;
  static ::java::lang::Object * ComponentAttribute;
  static ::java::lang::Object * Family;
  static ::java::lang::Object * FontFamily;
  static ::java::lang::Object * FontSize;
  static ::java::lang::Object * Foreground;
  static ::java::lang::Object * IconAttribute;
  static ::java::lang::Object * Italic;
  static ::java::lang::Object * Size;
  static ::java::lang::Object * StrikeThrough;
  static ::java::lang::Object * Subscript;
  static ::java::lang::Object * Superscript;
  static ::java::lang::Object * Underline;
  static ::java::lang::Object * Alignment;
  static ::java::lang::Object * FirstLineIndent;
  static ::java::lang::Object * LeftIndent;
  static ::java::lang::Object * LineSpacing;
  static ::java::lang::Object * Orientation;
  static ::java::lang::Object * RightIndent;
  static ::java::lang::Object * SpaceAbove;
  static ::java::lang::Object * SpaceBelow;
  static ::java::lang::Object * TabSet;
  static ::java::lang::String * ComponentElementName;
  static ::java::lang::String * IconElementName;
  static ::java::lang::Object * ComposedTextAttribute;
  static ::java::lang::Object * ModelAttribute;
  static ::java::lang::Object * NameAttribute;
  static ::java::lang::Object * ResolveAttribute;
public: // actually package-private
  static ::java::util::ArrayList * keys;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) keyname;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_StyleConstants__
