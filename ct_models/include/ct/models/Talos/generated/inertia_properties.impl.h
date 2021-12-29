template <typename TRAIT>
iit::Talos::dyn::tpl::InertiaProperties<TRAIT>::InertiaProperties()
{
    com_base_link = iit::rbd::Vector3d(-0.05709419,0.00153054,-0.0762521).cast<Scalar>();
    tensor_base_link.fill(
        Scalar(15.36284),
        com_base_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.2904122),
                Scalar(0.22351937),
                Scalar(0.2820058),
                Scalar(-0.0015749282),
                Scalar(0.06286615),
                Scalar(-9.208828E-4)) );

    com_leg_left_1_link = iit::rbd::Vector3d(0.08472839,-0.10997434,0.01705898).cast<Scalar>();
    tensor_leg_left_1_link.fill(
        Scalar(2.235009),
        com_leg_left_1_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.03817989),
                Scalar(0.022036176),
                Scalar(0.050161846),
                Scalar(-0.02086667),
                Scalar(0.0031327272),
                Scalar(-0.0029980885)) );

    com_leg_left_2_link = iit::rbd::Vector3d(-0.00273385,0.02592659,-0.00704703).cast<Scalar>();
    tensor_leg_left_2_link.fill(
        Scalar(1.490952),
        com_leg_left_2_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.005819139),
                Scalar(0.0019906948),
                Scalar(0.005984866),
                Scalar(-5.9823982E-5),
                Scalar(2.38575E-5),
                Scalar(-1.4126927E-4)) );

    com_leg_left_3_link = iit::rbd::Vector3d(0.0058523,0.18339564,0.0636967).cast<Scalar>();
    tensor_leg_left_3_link.fill(
        Scalar(6.239871),
        com_leg_left_3_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.38856247),
                Scalar(0.055546496),
                Scalar(0.34656668),
                Scalar(0.008377512),
                Scalar(0.0016369167),
                Scalar(0.05101593)) );

    com_leg_left_4_link = iit::rbd::Vector3d(0.01317717,0.11594602,0.02917508).cast<Scalar>();
    tensor_leg_left_4_link.fill(
        Scalar(3.759951),
        com_leg_left_4_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.09662402),
                Scalar(0.017501201),
                Scalar(0.087188765),
                Scalar(0.006527529),
                Scalar(0.0010084404),
                Scalar(0.013096094)) );

    com_leg_left_5_link = iit::rbd::Vector3d(-0.01400838,-0.03820186,0.04180064).cast<Scalar>();
    tensor_leg_left_5_link.fill(
        Scalar(1.29096),
        com_leg_left_5_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.015573999),
                Scalar(0.007572755),
                Scalar(0.011027078),
                Scalar(0.0010906182),
                Scalar(-0.0017257163),
                Scalar(-0.0048395717)) );

    com_leg_left_6_link = iit::rbd::Vector3d(0.06016739,-5.119359E-4,-0.020220129).cast<Scalar>();
    tensor_leg_left_6_link.fill(
        Scalar(1.607773),
        com_leg_left_6_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.006270949),
                Scalar(0.014034482),
                Scalar(0.010333089),
                Scalar(-9.8497E-6),
                Scalar(-8.083117E-4),
                Scalar(8.418362E-5)) );

    com_leg_right_1_link = iit::rbd::Vector3d(0.08472839,-0.10997434,0.01705898).cast<Scalar>();
    tensor_leg_right_1_link.fill(
        Scalar(2.235009),
        com_leg_right_1_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.03817989),
                Scalar(0.022036176),
                Scalar(0.050161846),
                Scalar(-0.02086667),
                Scalar(0.0031327272),
                Scalar(-0.0029980885)) );

    com_leg_right_2_link = iit::rbd::Vector3d(-0.00273385,-0.02592659,-0.00704703).cast<Scalar>();
    tensor_leg_right_2_link.fill(
        Scalar(1.490952),
        com_leg_right_2_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.005819139),
                Scalar(0.0019906948),
                Scalar(0.005984866),
                Scalar(5.9823982E-5),
                Scalar(2.38575E-5),
                Scalar(1.4126927E-4)) );

    com_leg_right_3_link = iit::rbd::Vector3d(0.0058523,0.18339564,-0.0636967).cast<Scalar>();
    tensor_leg_right_3_link.fill(
        Scalar(6.239871),
        com_leg_right_3_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.38856247),
                Scalar(0.055546496),
                Scalar(0.34656668),
                Scalar(0.008377512),
                Scalar(-0.0016369164),
                Scalar(-0.05101593)) );

    com_leg_right_4_link = iit::rbd::Vector3d(0.01317717,0.11594602,-0.02917508).cast<Scalar>();
    tensor_leg_right_4_link.fill(
        Scalar(3.759951),
        com_leg_right_4_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.09662402),
                Scalar(0.0175012),
                Scalar(0.087188765),
                Scalar(0.006527529),
                Scalar(-0.0010084405),
                Scalar(-0.013096092)) );

    com_leg_right_5_link = iit::rbd::Vector3d(-0.01400838,-0.03820186,-0.04180064).cast<Scalar>();
    tensor_leg_right_5_link.fill(
        Scalar(1.29096),
        com_leg_right_5_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.015573999),
                Scalar(0.007572756),
                Scalar(0.011027078),
                Scalar(0.001090618),
                Scalar(0.0017257163),
                Scalar(0.0048395717)) );

    com_leg_right_6_link = iit::rbd::Vector3d(0.06016739,5.119359E-4,-0.020220129).cast<Scalar>();
    tensor_leg_right_6_link.fill(
        Scalar(1.607773),
        com_leg_right_6_link,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.006270949),
                Scalar(0.014034482),
                Scalar(0.010333089),
                Scalar(9.8497E-6),
                Scalar(-8.083117E-4),
                Scalar(-8.418362E-5)) );

}

