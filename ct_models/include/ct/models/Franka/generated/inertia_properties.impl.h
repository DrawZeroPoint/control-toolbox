template <typename TRAIT>
iit::Franka::dyn::tpl::InertiaProperties<TRAIT>::InertiaProperties()
{
    com_panda_link1 = iit::rbd::Vector3d(0.003875,0.002081,-0.04762).cast<Scalar>();
    tensor_panda_link1.fill(
        Scalar(4.970684),
        com_panda_link1,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.7146633),
                Scalar(0.7179565),
                Scalar(0.0092131635),
                Scalar(1.7908297E-4),
                Scalar(-0.007689228),
                Scalar(-0.019661581)) );

    com_panda_link2 = iit::rbd::Vector3d(-0.003141,-0.02872,0.003495).cast<Scalar>();
    tensor_panda_link2.fill(
        Scalar(0.646926),
        com_panda_link2,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.008503512),
                Scalar(0.028124284),
                Scalar(0.026534991),
                Scalar(0.003983359),
                Scalar(-0.010261103),
                Scalar(-7.689361E-4)) );

    com_panda_link3 = iit::rbd::Vector3d(0.027518,0.039252,-0.066502).cast<Scalar>();
    tensor_panda_link3.fill(
        Scalar(3.228604),
        com_panda_link3,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.056494925),
                Scalar(0.05287838),
                Scalar(0.018249203),
                Scalar(0.008248334),
                Scalar(0.0054876483),
                Scalar(0.004377257)) );

    com_panda_link4 = iit::rbd::Vector3d(-0.05317,0.104419,0.027454).cast<Scalar>();
    tensor_panda_link4.fill(
        Scalar(3.587895),
        com_panda_link4,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.067677274),
                Scalar(0.03239943),
                Scalar(0.07758615),
                Scalar(-0.027715843),
                Scalar(-0.003905355),
                Scalar(0.0016444875)) );

    com_panda_link5 = iit::rbd::Vector3d(-0.011953,0.041065,-0.038437).cast<Scalar>();
    tensor_panda_link5.fill(
        Scalar(1.225946),
        com_panda_link5,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.03942757),
                Scalar(0.03146037),
                Scalar(0.0108695105),
                Scalar(0.0015152446),
                Scalar(0.0046002455),
                Scalar(-0.002164052)) );

    com_panda_link6 = iit::rbd::Vector3d(0.060149,-0.014117,-0.010517).cast<Scalar>();
    tensor_panda_link6.fill(
        Scalar(1.666555),
        com_panda_link6,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.0024804603),
                Scalar(0.010567766),
                Scalar(0.011794561),
                Scalar(-0.0015241109),
                Scalar(1.03758764E-4),
                Scalar(-9.3569106E-5)) );

    com_panda_link7 = iit::rbd::Vector3d(0.010517,-0.004252,0.061597).cast<Scalar>();
    tensor_panda_link7.fill(
        Scalar(0.735522),
        com_panda_link7,
        rbd::Utils::buildInertiaTensor(
                Scalar(0.015320009),
                Scalar(0.012899064),
                Scalar(0.0049096523),
                Scalar(3.951087E-4),
                Scalar(0.0016724827),
                Scalar(5.483591E-4)) );

}

