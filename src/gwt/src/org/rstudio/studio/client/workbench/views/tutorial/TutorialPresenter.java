/*
 * TutorialPresenter.java
 *
 * Copyright (C) 2009-19 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
package org.rstudio.studio.client.workbench.views.tutorial;

import org.rstudio.studio.client.workbench.WorkbenchView;
import org.rstudio.studio.client.workbench.views.BasePresenter;

import com.google.inject.Inject;

public class TutorialPresenter
      extends BasePresenter
{
   public interface Display extends WorkbenchView
   {
   }
   
   @Inject
   protected TutorialPresenter(Display display)
   {
      super(display);
   }

}
