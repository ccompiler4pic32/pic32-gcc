/* gnu.classpath.tools.taglets.VersionTaglet
   Copyright (C) 2001 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.
 
GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA. */

package gnu.classpath.tools.taglets;

import java.util.Map;

import com.sun.tools.doclets.Taglet;

import com.sun.javadoc.Tag;

/**
 *  The default Taglet which handles version information.
 *
 *  @author Julian Scheid (julian@sektor37.de)
 */
public class VersionTaglet implements Taglet {
   
   private static final String NAME = "version";
   private static final String HEADER = "Version:";

   private static boolean enabled = true;
   
   public String getName() {
      return NAME;
   }
    
   public boolean inField() {
      return true;
   }

   public boolean inConstructor() {
      return true;
   }
    
   public boolean inMethod() {
      return true;
   }
   
   public boolean inOverview() {
      return true;
   }

   public boolean inPackage() {
      return true;
   }

   public boolean inType() {
      return true;
   }
    
   public boolean isInlineTag() {
      return false;
   }    

   public static void register(Map tagletMap) {
      VersionTaglet versionTaglet = new VersionTaglet();
      tagletMap.put(versionTaglet.getName(), versionTaglet);
   }

   public String toString(Tag tag) {
      if (enabled) {
         return toString(new Tag[] { tag });
      }
      else {
         return null;
      }
   }

   public String toString(Tag[] tags) {
      if (!enabled || tags.length == 0) {
         return null;
      }
      else {
         boolean haveValidTag = false;
         for (int i = 0; i < tags.length && !haveValidTag; ++i) {
            if (tags[i].text().length() > 0) {
               haveValidTag = true;
            }
         }
         
         if (haveValidTag) {
            
            StringBuffer result = new StringBuffer();
            result.append("<dl class=\"tag list\">");
            result.append("</dl>");
            result.append("<dt class=\"tag section header\"><b>");
            result.append(HEADER);
            result.append("</b></dt><dd>");
            boolean firstEntry = true;
            for (int i = 0; i < tags.length; i++) {
               if (tags[i].text().length() > 0) {
                  if (!firstEntry) {
                     result.append(", ");
                  }
                  else {
                     firstEntry = false;
                  }
                  result.append(tags[i].text());
               }
            }
            result.append("</dd>");
            result.append("</dl>");
            return result.toString();
         }
         else {
            return null;
         }
      }
   }

   /**
    *  Enables/disables this taglet.
    */
   public static void setTagletEnabled(boolean enabled)
   {
      VersionTaglet.enabled = enabled;
   }
}
