<?php

namespace Rector\Symfony\Tests\Rector\MethodCall\AddFlashRector\Fixture;

use Symfony\Bundle\FrameworkBundle\Controller\AbstractController;
use Symfony\Component\HttpFoundation\Request;

class AppController extends AbstractController
{
    public function someAction(Request $request)
    {
        $request->getSession()->getFlashBag()->add('success', 'message');
    }
}

?>
-----
<?php

namespace Rector\Symfony\Tests\Rector\MethodCall\AddFlashRector\Fixture;

use Symfony\Bundle\FrameworkBundle\Controller\AbstractController;
use Symfony\Component\HttpFoundation\Request;

class AppController extends AbstractController
{
    public function someAction(Request $request)
    {
        $this->addFlash('success', 'message');
    }
}

?>
