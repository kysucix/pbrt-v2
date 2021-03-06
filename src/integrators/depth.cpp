
/*
    pbrt source code Copyright(c) 1998-2010 Matt Pharr and Greg Humphreys.

    This file is part of pbrt.

    pbrt is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.  Note that the text contents of
    the book "Physically Based Rendering" are *not* licensed under the
    GNU GPL.

    pbrt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */


// integrators/directlighting.cpp*
#include "stdafx.h"
#include "integrators/depth.h"
#include "intersection.h"
#include "paramset.h"

// DepthSurfaceIntegrator Method Definitions
DepthSurfaceIntegrator::DepthSurfaceIntegrator(int fa) {
    factor = fa;
}


DepthSurfaceIntegrator::~DepthSurfaceIntegrator() {
}


void DepthSurfaceIntegrator::RequestSamples(Sampler *sampler,
        Sample *sample, const Scene *scene) {

}


Spectrum DepthSurfaceIntegrator::Li(const Scene *scene,
        const Renderer *renderer, const RayDifferential &ray,
        const Intersection &isect, const Sample *sample, RNG &rng, MemoryArena &arena) const {
    Spectrum L(factor*ray.maxt);
    return L;
}


DepthSurfaceIntegrator *CreateDepthSurfaceIntegrator(const ParamSet &params) {
    int factor = params.FindOneInt("factor", 1);
    return new DepthSurfaceIntegrator(factor);
}


