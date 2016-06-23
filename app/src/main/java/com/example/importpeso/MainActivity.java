package com.example.importpeso;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;
import java.io.File;
import java.util.Arrays;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("gnustl_shared");
        System.loadLibrary("user");
        System.loadLibrary("hello");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView toolbar = (TextView) findViewById(R.id.tv);

        File innerDir = getFilesDir().getParentFile();
        for(File file : innerDir.listFiles()){
            Log.e("mainactivity", file.getName()+":"+Arrays.toString(file.list()));
        }

        toolbar.setText(String.valueOf(test()));
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    public native int test();
}
