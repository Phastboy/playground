export class App {
  private static instance: App;
  private method: string;
  
  private constructor() {
    this.method='singleton'
  };
  
  /**
   * getInstance
   */
  public static getInstance() {
    if (!App.instance) {
      App.instance=new App();
    }
    return App.instance
  }

  public welcome(){
    console.log('i am active');
    
  };
}

const app1=App.getInstance();
const app2=App.getInstance();

app2.welcome();
console.log(app2===app1);

