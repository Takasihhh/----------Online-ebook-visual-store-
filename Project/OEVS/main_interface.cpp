#include "main_interface.h"
#include "ui_main_interface.h"
#include "vice_interface.h"
#include "bookpage.h"
main_interface::main_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_interface),
     headerBar(new QtMaterialAppBar)
{
    ui->setupUi(this);
    //去窗口边框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //this->resize(1280,720);
    this->stats = interfaceStats::DEFAULTE;
    currentIndex =1;
    if(instance!=NULL)
    {
        this->destroy(true,true);
    }
    else{
        instance = new main_interface;
    }
    InitUI();
    InitIcon();
}

main_interface::~main_interface()
{
    delete ui;
}

void main_interface::LoginMWnd(const int &uid)
{
        //TODO:从数据库读取个人的数据
        mysql->InitPurchaseTab(uid);
        currentuid = uid;
}

void main_interface::CloseWindow()
{
    this->close();
}

void main_interface::MinisizeWindow()
{
    this->showMinimized();
}

void main_interface::NextPage()
{
    if(currentIndex>=50)
        return;
    stats = APPEND;
    currentIndex+=6;
    UpdateIcon();

    stats = DEFAULTE;
}

void main_interface::LastPage()
{
    stats = APPEND;
    currentIndex-=6;
    UpdateIcon();
    if(currentIndex<0)
    {
        currentIndex = 0;
        return;
    }
    stats = DEFAULTE;
}

void main_interface::SearchNextPage()
{
    stats = SEARCHAPPEND;

    if(currentIndex+6<=search.size()-1)
    {
        currentIndex+=6;
    }
    UpdateIcon();
}

void main_interface::SearchLastPage()
{

    stats = SEARCHAPPEND;
    currentIndex-=6;
    if(currentIndex<0)
    {
        currentIndex = 0;
        return;
    }
    UpdateIcon();
}

void main_interface::Bind01()
{
    int tmpbid = 0;
    if(stats == SEARCHAPPEND)
        tmpbid = search[0].bid.toInt();
    else
    {
        currentBid = 1;
        tmpbid =currentBid;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }
    else
    {
        BookPage *newpage = new BookPage;
        newpage->SetBid(tmpbid);
        newpage->SetWnd(currentuid);
        newpage->show();
    }
        this->close();
}

void main_interface::Bind02()
{
    int tmpbid = 0;
    if(stats == SEARCHAPPEND && search.size()>=2)
        tmpbid = search[1].bid.toInt();
    else
    {
       tmpbid =currentBid+1;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }else{
        BookPage *newpage = new BookPage;
        newpage->SetBid(tmpbid);
        newpage->SetWnd(currentuid);
        newpage->show();
    }
        this->close();
}

void main_interface::Bind03()
{
    int tmpbid = 0;
    if(stats == SEARCHAPPEND && search.size()>=3)
        tmpbid = search[2].bid.toInt();
    else
    {
        tmpbid =currentBid+2;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }else{
    BookPage *newpage = new BookPage;
    newpage->SetBid(tmpbid);
    newpage->SetWnd(currentuid);
    newpage->show();
    }
    this->close();
}

void main_interface::Bind04()
{
    int tmpbid = 0;
    if(stats == SEARCHAPPEND && search.size()>=4)
        tmpbid = search[3].bid.toInt();
    else
    {
        tmpbid =currentBid+3;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }else{
    BookPage *newpage = new BookPage;
    newpage->SetBid(tmpbid);
    newpage->SetWnd(currentuid);
    newpage->show();
    }
    this->close();
}

void main_interface::Bind05()
{

    int tmpbid = 0;
    if(stats == SEARCHAPPEND && search.size()>=5)
        tmpbid = search[4].bid.toInt();
    else
    {
        tmpbid =currentBid+4;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }else{
    BookPage *newpage = new BookPage;
    newpage->SetBid(tmpbid);
    newpage->SetWnd(currentuid);
    newpage->show();
    }
    this->close();

}

void main_interface::Bind06()
{
    int tmpbid = 0;
    if(stats == SEARCHAPPEND && search.size()>=6)
        tmpbid = search[5].bid.toInt();
    else
    {
        tmpbid =currentBid+5;
    }
    if(mysql->isBuy(currentuid,tmpbid))
    {
        vice_interface * vwnd = new vice_interface;
        vwnd->SetWnd(currentuid);
        vwnd->show();
    }else{
    BookPage *newpage = new BookPage;
    newpage->SetBid(tmpbid);
    newpage->SetWnd(currentuid);
    newpage->show();
    }
    this->close();
}

void main_interface::Search()
{
    search.clear();
    QString searchtxt = ui->LE_search->text();
    if(searchtxt == "")
    {
        QMessageBox::warning(NULL,"警告","输入不能为空");
        return;
    }
    search =  mysql->GetSearchResult(searchtxt);
    if(search.isEmpty())
    {
        return;
        qDebug()<<"失败"<<endl;
    }
    currentIndex = 0;
    stats = SERACH;
    //ui->nextpage_btn->disconnect(ui->nextpage_btn,SIGNAL(clicked(bool)),this,(void*)0);
    ui->nextpage_btn->disconnect();
    ui->lastpage_btn->disconnect();
    UpdateIcon();
    connect(ui->nextpage_btn,SIGNAL(clicked(bool)),this,SLOT(SearchNextPage()));
    connect(ui->lastpage_btn,SIGNAL(clicked(bool)),this,SLOT(SearchLastPage()));
}

void main_interface::OpenPersonalWnd()
{
    vice_interface * vwnd = new vice_interface;
    this->close();
    vwnd->show();
    vwnd->SetWnd(currentuid);

}



void main_interface::UpdateIcon()
{

    currentBid = 0;
    QList<QToolButton*> bookList;
    bookList.append(ui->book1);
    bookList.append(ui->book2);
    bookList.append(ui->book3);
    bookList.append(ui->book4);
    bookList.append(ui->book5);
    bookList.append(ui->book6);

    QList<QLabel*> bookTitle;
    bookTitle.append(ui->bt1);
    bookTitle.append(ui->bt2);
    bookTitle.append(ui->bt3);
    bookTitle.append(ui->bt4);
    bookTitle.append(ui->bt5);
    bookTitle.append(ui->bt6);
    QList<int> bid;
    int len = search.size()>=6?6:search.size();

    switch (stats) {
    case CLASSIFY:
        break;
    case SERACH:
        for(int i = 0;i<len;++i)
        {
            bid.append(search[i].bid.toInt());
            bookTitle[i]->setText(search[i].bname);
        }
        for(int i =0;i<bid.size();++i)
        {
            QString imgpath = QString(":/Img/BOOK_IMG/%1.jpg").arg(bid[i]);
            QIcon image(imgpath);
            if(!image.isNull())
            {
                bookList[i]->setIcon(image);
                qDebug()<<imgpath<<endl;
            }else{
                //bookList[index].close();
                bookList[i]->close();
                bookList[i]->icon().Disabled;
                continue;
            }
        }
        stats = SEARCHAPPEND;
        break;
    case APPEND:
        bid = mysql->GetInterface(currentIndex,6,bookTitle);
        currentBid = bid[0];
        for(int i =0;i<bid.size();++i)
        {
            QString imgpath = QString(":/Img/BOOK_IMG/%1.jpg").arg(bid[i]);
            QIcon image(imgpath);
           // QImage &ref = image;
            if(!image.isNull())
            {
               // bookList[index].setIcon(image);
               // bookList[index]->setIcon(ref);
                bookList[i]->setIcon(image);
                qDebug()<<imgpath<<endl;
                //bookList[i]->setIconSize(bookList[i]->size());
            }
            else{
                //bookList[index].close();
                bookList[i]->close();
                bookList[i]->icon().Disabled;
                continue;
            }
        }

        bookList.clear();
        bookTitle.clear();
        break;
    case SEARCHAPPEND:
        bid.clear();
        if(currentIndex+6>=search.size())
            return;
        for(int i = currentIndex;i<currentIndex+6;++i)
        {

            bid.append(search[i].bid.toInt());
            bookTitle[i]->setText(search[i].bname);
        }
        for(int i =0;i<bid.size();++i)
        {
            QString imgpath = QString(":/Img/BOOK_IMG/%1.jpg").arg(bid[i]);
            QIcon image(imgpath);
            if(!image.isNull())
            {
                bookList[i]->setIcon(image);
                qDebug()<<imgpath<<endl;
            }else{
                //bookList[index].close();
                bookList[i]->close();
                bookList[i]->icon().Disabled;
                continue;
            }
        }
        break;
    }

}



void main_interface::InitUI()
{

    headerBar->setSizeIncrement(1280,100);
    ui->Header->addWidget(headerBar);

    QToolButton * close_btn = new QToolButton(this);
  //  close_btn->setGeometry(1260,5,30,30);
    close_btn->setIconSize(QSize(30,30));
    close_btn->setIcon(QIcon(":/Img/Image/Close.png"));


    QToolButton * minisize_btn = new QToolButton(this);
  // minisize_btn->setGeometry(590,5,30,30);
    minisize_btn->setIcon(QIcon(":/Img/Image/Minisize.png"));
    minisize_btn->setIconSize(QSize(30,30));

    ui->toolLayout->addWidget(minisize_btn);
    ui->toolLayout->addWidget(close_btn);
    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));
    connect(minisize_btn,SIGNAL(clicked(bool)),this,SLOT(MinisizeWindow()));
    connect(ui->nextpage_btn,SIGNAL(clicked(bool)),this,SLOT(NextPage()));
    connect(ui->lastpage_btn,SIGNAL(clicked(bool)),this,SLOT(LastPage()));
    connect(ui->btn_search,SIGNAL(clicked(bool)),this,SLOT(Search()));
    connect(ui->btn_pi,SIGNAL(clicked(bool)),this,SLOT(OpenPersonalWnd()));
}

void main_interface::InitIcon()
{
    stats  = APPEND;
    QList<QToolButton*> bookList;
    bookList.append(ui->book1);
    bookList.append(ui->book2);
    bookList.append(ui->book3);
    bookList.append(ui->book4);
    bookList.append(ui->book5);
    bookList.append(ui->book6);

    QList<QLabel*> bookTitle;
    bookTitle.append(ui->bt1);
    bookTitle.append(ui->bt2);
    bookTitle.append(ui->bt3);
    bookTitle.append(ui->bt4);
    bookTitle.append(ui->bt5);
    bookTitle.append(ui->bt6);
    QList<int> bid;

    bid = mysql->GetInterface(1,6,bookTitle);
    currentBid = bid[0];

    for(int i =0;i<bid.size();++i)
    {
        QString imgpath = QString(":/Img/BOOK_IMG/%1.jpg").arg(bid[i]);
        QIcon image(imgpath);
       // QImage &ref = image;
        if(!image.isNull())
        {
           // bookList[index].setIcon(image);
           // bookList[index]->setIcon(ref);
            bookList[i]->setIcon(image);
            qDebug()<<imgpath<<endl;
            if(i==0)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind01()));
            else if(i==1)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind02()));
            else if(i==2)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind03()));
            else if(i==3)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind04()));
            else if(i==4)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind05()));
            else if(i==5)
            connect(bookList[i],SIGNAL(clicked(bool)),this,SLOT(Bind06()));
            //bookList[i]->setIconSize(bookList[i]->size());
        }
        else{
            //bookList[index].close();

            bookList[i]->close();
            continue;
        }
    }

    bookList.clear();
    bookTitle.clear();
}



void main_interface::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }

}

void main_interface::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);
    }
}

void main_interface::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}
