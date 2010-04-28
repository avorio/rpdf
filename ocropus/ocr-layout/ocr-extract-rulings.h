// -*- C++ -*-

// Copyright 2006-2008 Deutsches Forschungszentrum fuer Kuenstliche Intelligenz 
// or its licensors, as applicable.
// 
// You may not use this file except under the terms of the accompanying license.
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may
// obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// Project: OCRopus
// File: ocr-visualize-layout-rast.h
// Purpose: Visualize output of layout analysis using RAST in the same way
//          as the web demo:
//          http://demo.iupr.org/layout/layout.php
// Responsible: Faisal Shafait (faisal.shafait@dfki.de)
// Reviewer: 
// Primary Repository: 
// Web Sites: www.iupr.org, www.dfki.de

#ifndef h_ocrextractrulings__
#define h_ocrextractrulings__

#include "ocropus.h"

namespace ocropus {
    using namespace colib;

    struct ExtractRulings {
        // Analyze user supplied obstacles to separate horizontal/vertical rulings
        // and image regions
        void analyzeObstacles(rectarray &hor_rulings,
                              rectarray &vert_rulings,
                              rectarray &images,
                              rectarray &obstacles,
                              int xheight);
    };

    ExtractRulings *make_ExtractRulings();
}

#endif
