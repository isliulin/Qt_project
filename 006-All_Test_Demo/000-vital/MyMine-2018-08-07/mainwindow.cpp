#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include "logcat.h"
#include "mygraphicsscene.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWindow();
    mCurScene = nullptr;
    mLastScene = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
    if (mCurScene)
    {
        delete mCurScene;
        mCurScene = nullptr;
        MYDebug("will delete mCurScene");
    }
}

void MainWindow::initWindow()
{
    ui->BtnFace->setIconSize(QSize(30, 30));
    ui->BtnFace->setFixedSize(40, 40);
    ui->BtnFace->setIcon(QIcon(tr(":/images/Smiling_face.png")));
    connect(ui->menu_Action_NewGame, &QAction::triggered, this, &MainWindow::sltNewGame);
    connect(ui->menu_Action_Exit, &QAction::triggered, this, &MainWindow::sltExitGame);
    connect(ui->menu_Action_GameRules, &QAction::triggered, this, &MainWindow::sltGameRulesIntroduce);
    connect(ui->Menu_Action_9And9And10, &QAction::triggered, this, &MainWindow::sltGame9And9And10);
    connect(ui->menu_Action_16And16And40, &QAction::triggered, this, &MainWindow::sltGame16And16And40);
    connect(ui->menu_Action_Prompt, &QAction::triggered, this, &MainWindow::sltGamePrompt);
    connect(ui->menu_Action_SelfDefine, &QAction::triggered, this, &MainWindow::sltSelfDefineGame);
    connect(ui->menu_Action_Winner, &QAction::triggered, this, &MainWindow::sltWinnerHistory);
}

void MainWindow::sltNewGame()
{
    MYDebug();
    mLastScene = mCurScene;
    mCurScene = new MyGraphicsScene;
    if (mCurScene)
    {
        mCurScene->setMineScene(9, 9, 10);
        mCurScene->initMineScenery();
        mCurScene->layMines();
        mCurScene->setItemMineCounts();
        ui->graphicsView->setScene(mCurScene); // 加入场景
    }
    if (mLastScene)
    {
        delete mLastScene;
        mLastScene = nullptr;
        MYDebug("will delete mLastScene");
    }
}

void MainWindow::sltExitGame()
{
    MYDebug();
}

void MainWindow::sltGameEnded()
{
    MYDebug();
}

void MainWindow::sltGameRulesIntroduce()
{
    MYDebug();
}

void MainWindow::sltGamePrompt()
{
    MYDebug();
}

void MainWindow::sltGame9And9And10()
{
    MYDebug();
}

void MainWindow::sltGame16And16And40()
{
    MYDebug();
}

void MainWindow::sltSelfDefineGame()
{
    MYDebug();
}

void MainWindow::sltWinnerHistory()
{
    MYDebug();
}
