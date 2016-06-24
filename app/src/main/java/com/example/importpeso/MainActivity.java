package com.example.importpeso;

import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;
import java.io.File;
import java.util.Arrays;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        try {
            String packageName = "com.example.hello";
            PackageInfo packageInfo = getPackageManager().getPackageInfo(packageName, PackageManager.GET_ACTIVITIES);
//            Context context = createPackageContext(packageName, CONTEXT_IGNORE_SECURITY);
            String libraryDir = packageInfo.applicationInfo.nativeLibraryDir;
            System.load(new File(libraryDir,System.mapLibraryName("gnustl_shared")).getAbsolutePath());
            System.load(new File(libraryDir,System.mapLibraryName("user")).getAbsolutePath());
            System.loadLibrary("hello");
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView toolbar = (TextView) findViewById(R.id.tv);

        File innerDir = getFilesDir().getParentFile();
        for(File file : innerDir.listFiles()){
            Log.e("mainactivity", file.getName()+":"+Arrays.toString(file.list()));
        }

        toolbar.setText(String.valueOf(test()));
    }


    public native int test();
}
