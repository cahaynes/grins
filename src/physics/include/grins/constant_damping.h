//-----------------------------------------------------------------------bl-
//--------------------------------------------------------------------------
//
// GRINS - General Reacting Incompressible Navier-Stokes
//
// Copyright (C) 2014-2015 Paul T. Bauman, Roy H. Stogner
// Copyright (C) 2010-2013 The PECOS Development Team
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the Version 2.1 GNU Lesser General
// Public License as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc. 51 Franklin Street, Fifth Floor,
// Boston, MA  02110-1301  USA
//
//-----------------------------------------------------------------------el-

#ifndef GRINS_CONSTANT_DAMPING_H
#define GRINS_CONSTANT_DAMPING_H

// GRINS
#include "grins/source_term_base.h"

namespace GRINS
{

  class ConstantDamping : public SourceTermBase
  {
  public:

    ConstantDamping( const std::string& physics_name, const GetPot& input );

    virtual ~ConstantDamping(){};

    virtual void damping_residual( bool compute_jacobian,
                                   AssemblyContext& context,
                                   CachedValues& cache );

  protected:

    libMesh::Real _value;

  private:

    ConstantDamping();

  };

} // end namespace GRINS

#endif // GRINS_CONSTANT_DAMPING_H
