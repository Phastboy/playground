export class App {
  private static instance: App | null=null;
  private method: string;
  private static counter=0;
  private static createdAt=Date.now();
  
  private constructor() {
    this.method='singleton'
  };
  
  /**
   * getInstance
   */
  public static getInstance() {
    if (!App.instance) {
      App.instance=new App();
      console.log(`${App.createdAt}`);
      App.counter++;
    }
    console.log(`Instance created: ${App.counter}`);
    return App.instance
  }

  public welcome(){
    console.log('i am active');
  };

  /**
   * getMethod
   */
  public getMethod() {
    return this.method;
  }

  /**
   * resetInstance
   */
  public static resetInstance() {
    App.instance=null;
    console.log('Instance reset');
  };
}

const app1=App.getInstance();
console.log(app1.getMethod());

App.resetInstance();  
const app2=App.getInstance();
console.log(app2===app1);

