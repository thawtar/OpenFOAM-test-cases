/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    Template for use with codeStream.

\*---------------------------------------------------------------------------*/

#include "dictionary.H"
#include "Ostream.H"
#include "Pstream.H"
#include "pointField.H"
#include "tensor.H"
#include "unitConversion.H"

//{{{ begin codeInclude
#line 48 "/mnt/d/ZoroCAE_CaseFiles/01-viv/cylinderAndBackground/constant/dynamicMeshDict.sixDoFRigidBodyMotionCoeffs.#codeStream"
#include "diagTensor.H"
//}}} end codeInclude

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C" void codeStream_a2e84a8044534102c1dec9657a8b960839f76d39(Foam::Ostream& os, const Foam::dictionary& dict)
{
//{{{ begin code
    #line 53 "/mnt/d/ZoroCAE_CaseFiles/01-viv/cylinderAndBackground/constant/dynamicMeshDict.sixDoFRigidBodyMotionCoeffs.#codeStream"
scalar sqrLx = sqr(1.000000);
            scalar sqrLy = sqr(0.240000);
            scalar sqrLz = sqr(0.400000);
            os  <<
                376.800000
               *diagTensor(sqrLy + sqrLz, sqrLx + sqrLz, sqrLx + sqrLy)/12.0;
//}}} end code
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

