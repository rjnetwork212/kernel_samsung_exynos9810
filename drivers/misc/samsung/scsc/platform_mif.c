--- a/drivers/misc/samsung/scsc/platform_mif.c
+++ b/drivers/misc/samsung/scsc/platform_mif.c
@@ -165,7 +165,9 @@
     platform->dev = &pdev->dev;
 
     np = of_find_node_by_name(NULL, "scsc_mif");
-    if (samsung_fingerprint_get_dts_info(np))
-        return -EINVAL;
+    // Disabled due to missing symbol
+    // if (samsung_fingerprint_get_dts_info(np))
+    //     return -EINVAL;
+
