template <typename TRAIT>
iit::Walker::dyn::tpl::InertiaProperties<TRAIT>::InertiaProperties()
{
    com_torso = iit::rbd::Vector3d(-0.0012487465,2.465988E-4,-0.11159878).cast<Scalar>();
    tensor_torso.fill(
        Scalar(20.773),
        com_torso,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.30913723),
                Scalar(0.3012684),
                Scalar(0.03613091),
                Scalar(-1.5878904E-5),
                Scalar(0.0024922434),
                Scalar(-6.035789E-4)) );

    com_right_leg_l1 = iit::rbd::Vector3d(0.009364182,-5.1456313E-6,0.051217403).cast<Scalar>();
    tensor_right_leg_l1.fill(
        Scalar(0.988),
        com_right_leg_l1,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0035356013),
                Scalar(0.0052207354),
                Scalar(0.0020582078),
                Scalar(-2.1073494E-7),
                Scalar(4.256112E-4),
                Scalar(-1.9353548E-7)) );

    com_right_leg_l2 = iit::rbd::Vector3d(-6.4711508E-6,-5.5778684E-5,-0.0016494824).cast<Scalar>();
    tensor_right_leg_l2.fill(
        Scalar(3.392),
        com_right_leg_l2,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0012580943),
                Scalar(0.0018702024),
                Scalar(0.001554843),
                Scalar(1.1667602E-6),
                Scalar(2.3765683E-8),
                Scalar(-7.786677E-7)) );

    com_right_leg_l3 = iit::rbd::Vector3d(0.005033035,0.0740542,-5.7684793E-4).cast<Scalar>();
    tensor_right_leg_l3.fill(
        Scalar(11.243),
        com_right_leg_l3,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.11822999),
                Scalar(0.0068190983),
                Scalar(0.11699155),
                Scalar(0.008298357),
                Scalar(-7.28729E-5),
                Scalar(-7.36653E-4)) );

    com_right_leg_l4 = iit::rbd::Vector3d(0.0010266677,0.14436491,0.060212612).cast<Scalar>();
    tensor_right_leg_l4.fill(
        Scalar(2.852),
        com_right_leg_l4,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.07897154),
                Scalar(0.013837385),
                Scalar(0.06747678),
                Scalar(3.5582326E-4),
                Scalar(1.699523E-4),
                Scalar(0.024767797)) );

    com_right_leg_l5 = iit::rbd::Vector3d(3.8174936E-4,7.963361E-6,-6.535557E-4).cast<Scalar>();
    tensor_right_leg_l5.fill(
        Scalar(0.684),
        com_right_leg_l5,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0012290949),
                Scalar(0.0010997026),
                Scalar(0.0015157484),
                Scalar(2.1452732E-7),
                Scalar(5.629467E-7),
                Scalar(9.6009416E-8)) );

    com_right_leg_l6 = iit::rbd::Vector3d(0.03619934,-3.449862E-4,0.0058370214).cast<Scalar>();
    tensor_right_leg_l6.fill(
        Scalar(1.356),
        com_right_leg_l6,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0068533067),
                Scalar(0.01284745),
                Scalar(0.009117978),
                Scalar(1.37246425E-5),
                Scalar(9.371784E-4),
                Scalar(4.1635412E-6)) );

    com_left_leg_l1 = iit::rbd::Vector3d(0.009364204,-5.0828376E-6,0.051217407).cast<Scalar>();
    tensor_left_leg_l1.fill(
        Scalar(0.988),
        com_left_leg_l1,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0035356018),
                Scalar(0.005220737),
                Scalar(0.0020582092),
                Scalar(-1.9868727E-7),
                Scalar(4.2561232E-4),
                Scalar(-1.9075887E-7)) );

    com_left_leg_l2 = iit::rbd::Vector3d(-2.8992022E-6,5.519744E-5,0.0016508475).cast<Scalar>();
    tensor_left_leg_l2.fill(
        Scalar(3.392),
        com_left_leg_l2,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0012581173),
                Scalar(0.0018701478),
                Scalar(0.0015547954),
                Scalar(8.8556E-7),
                Scalar(-7.031699E-8),
                Scalar(-7.751745E-7)) );

    com_left_leg_l3 = iit::rbd::Vector3d(0.0051269005,0.074073344,5.322555E-4).cast<Scalar>();
    tensor_left_leg_l3.fill(
        Scalar(11.243),
        com_left_leg_l3,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.118284725),
                Scalar(0.0068462077),
                Scalar(0.11707347),
                Scalar(0.008435798),
                Scalar(7.229591E-5),
                Scalar(7.3848077E-4)) );

    com_left_leg_l4 = iit::rbd::Vector3d(0.0010212046,0.14428385,-0.0603084).cast<Scalar>();
    tensor_left_leg_l4.fill(
        Scalar(2.852),
        com_left_leg_l4,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.078929365),
                Scalar(0.0138639035),
                Scalar(0.06740701),
                Scalar(3.5294075E-4),
                Scalar(-1.7036352E-4),
                Scalar(-0.024794692)) );

    com_left_leg_l5 = iit::rbd::Vector3d(3.8477997E-4,-8.215536E-6,-6.531865E-4).cast<Scalar>();
    tensor_left_leg_l5.fill(
        Scalar(0.684),
        com_left_leg_l5,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0012289259),
                Scalar(0.0010997197),
                Scalar(0.0015156037),
                Scalar(-3.6561414E-7),
                Scalar(5.3343E-7),
                Scalar(-8.488569E-8)) );

    com_left_leg_l6 = iit::rbd::Vector3d(0.036119644,-3.4496872E-4,0.005838989).cast<Scalar>();
    tensor_left_leg_l6.fill(
        Scalar(1.356),
        com_left_leg_l6,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.006853323),
                Scalar(0.012828677),
                Scalar(0.009099177),
                Scalar(1.3489329E-5),
                Scalar(9.3479856E-4),
                Scalar(4.127339E-6)) );

}

