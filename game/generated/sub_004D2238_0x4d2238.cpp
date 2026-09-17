#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2238
// Address: 0x4d2238 - 0x4d25b0
void sub_004D2238_0x4d2238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2238_0x4d2238");
#endif

    switch (ctx->pc) {
        case 0x4d234cu: goto label_4d234c;
        case 0x4d2474u: goto label_4d2474;
        case 0x4d247cu: goto label_4d247c;
        case 0x4d2484u: goto label_4d2484;
        case 0x4d248cu: goto label_4d248c;
        default: break;
    }

    ctx->pc = 0x4d2238u;

    // 0x4d2238: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d2238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d223c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d2240: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d2244: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d2244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2248: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d224c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d224cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d2250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d2250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d2254: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d2254u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d2258: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d2258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d225c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d225cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d2260: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d2264: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d2264u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d2268: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d2268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d226c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d226cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d2270: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d2270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4d2274: 0x26521018  addiu       $s2, $s2, 0x1018
    ctx->pc = 0x4d2274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4120));
    // 0x4d2278: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d2278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4d227c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4d227cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2280: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4d2284: 0x2673101c  addiu       $s3, $s3, 0x101C
    ctx->pc = 0x4d2284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4124));
    // 0x4d2288: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d228c: 0x26311020  addiu       $s1, $s1, 0x1020
    ctx->pc = 0x4d228cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4128));
    // 0x4d2290: 0x8c451028  lw          $a1, 0x1028($v0)
    ctx->pc = 0x4d2290u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1028u));
    // 0x4d2294: 0x26b51010  addiu       $s5, $s5, 0x1010
    ctx->pc = 0x4d2294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4112));
    // 0x4d2298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d2298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1018u));
    // 0x4d229c: 0x26941014  addiu       $s4, $s4, 0x1014
    ctx->pc = 0x4d229cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4116));
    // 0x4d22a0: 0x8cbe0008  lw          $fp, 0x8($a1)
    ctx->pc = 0x4d22a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4d22a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d22a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d22a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d22a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d22ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4d22acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F101Cu));
    // 0x4d22b0: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d22b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d22b4: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d22b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d22b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d22b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d22bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d22c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d22c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d22c4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d22c8: 0x26e30026  addiu       $v1, $s7, 0x26
    ctx->pc = 0x4d22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 38));
    // 0x4d22cc: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d22ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d22d0: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d22d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d22d4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4d22d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d22d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d22dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4d22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4d22e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d22e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d22e4: 0x26e30028  addiu       $v1, $s7, 0x28
    ctx->pc = 0x4d22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x4d22e8: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d22e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d22ec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d22ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d22f0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4d22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4d22f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d22f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d22f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d22fc: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d22fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d2300: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d2300u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d2304: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d2304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4d2308: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d230c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d230cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d2310: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d2314: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d2314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d2318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d231c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4d231cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2320: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d2320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d2324: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d2328: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d2328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d232c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d232cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d2330: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d2330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d2334: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d2334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d2338: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d233c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2340: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d2344: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D2344u;
    SET_GPR_U32(ctx, 31, 0x4D234Cu);
    ctx->pc = 0x4D2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2344u;
    // 0x4d2348: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D2344u, 0x4D234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D234Cu;
label_4d234c:
    // 0x4d234c: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4d234cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d2350: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x4d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x4d2354: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4d2354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4d2358: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d2358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d235c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d235cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d2360: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d2360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d2364: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4d2364u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d2368: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d2368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d236c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4d236cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d2370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d2370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d2374: 0x862b0000  lh          $t3, 0x0($s1)
    ctx->pc = 0x4d2374u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2378: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d2378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d237c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4d237cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2380: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4d2380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4d2384: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d2384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d2388: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4d2388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4d238c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d238cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d2390: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d2390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d2394: 0x2496d680  addiu       $s6, $a0, -0x2980
    ctx->pc = 0x4d2394u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4d2398: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4d2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4d239c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d23a0: 0x964d0000  lhu         $t5, 0x0($s2)
    ctx->pc = 0x4d23a0u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d23a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d23a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d23a8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d23a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d23ac: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d23acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d23b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d23b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d23b4: 0x8e8c0000  lw          $t4, 0x0($s4)
    ctx->pc = 0x4d23b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d23b8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d23b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d23bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d23bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d23c0: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4d23c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4d23c4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4d23c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4d23c8: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4d23c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x4d23cc: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d23d0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d23d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d23d4: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4d23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4d23d8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d23d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d23dc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d23e0: 0xa6cd2334  sh          $t5, 0x2334($s6)
    ctx->pc = 0x4d23e0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9012), (uint16_t)GPR_U32(ctx, 13));
    // 0x4d23e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d23e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d23e8: 0xa6c32336  sh          $v1, 0x2336($s6)
    ctx->pc = 0x4d23e8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d23ec: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d23ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d23f0: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4d23f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4d23f4: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x4d23f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x4d23f8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d23f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d23fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d23fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d2400: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d2400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2404: 0xa6c32338  sh          $v1, 0x2338($s6)
    ctx->pc = 0x4d2404u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d2408: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d2408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d240c: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d240cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d2410: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d2414: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d2414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d2418: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4d2418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4d241c: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d241cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d2420: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d2420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d2424: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d2428: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d2428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d242c: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d242cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d2430: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d2430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d2434: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d2434u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d2438: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d243c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d243cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d2440: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d2444: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2448: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d2448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d244c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d2450: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d2450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d2454: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d2454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d2458: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d2458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d245c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d245cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d2460: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d2464: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x4d2464u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x4d2468: 0xae8c0000  sw          $t4, 0x0($s4)
    ctx->pc = 0x4d2468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 12));
    // 0x4d246c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D246Cu;
    SET_GPR_U32(ctx, 31, 0x4D2474u);
    ctx->pc = 0x4D2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D246Cu;
    // 0x4d2470: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D246Cu, 0x4D2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2474u;
label_4d2474:
    // 0x4d2474: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D2474u;
    SET_GPR_U32(ctx, 31, 0x4D247Cu);
    ctx->pc = 0x4D2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2474u;
    // 0x4d2478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D2474u, 0x4D247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D247Cu;
label_4d247c:
    // 0x4d247c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D247Cu;
    SET_GPR_U32(ctx, 31, 0x4D2484u);
    ctx->pc = 0x4D2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D247Cu;
    // 0x4d2480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D247Cu, 0x4D2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2484u;
label_4d2484:
    // 0x4d2484: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D2484u;
    SET_GPR_U32(ctx, 31, 0x4D248Cu);
    ctx->pc = 0x4D2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2484u;
    // 0x4d2488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D2484u, 0x4D248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D248Cu;
label_4d248c:
    // 0x4d248c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d2490: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4d2490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d2494: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4d2494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d249c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d249cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d24a0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d24a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4d24a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d24a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d24a8: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4d24a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4d24ac: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4d24acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4d24b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d24b4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4d24b8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4d24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4d24bc: 0x8ee20124  lw          $v0, 0x124($s7)
    ctx->pc = 0x4d24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 292)));
    // 0x4d24c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d24c4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d24c8: 0x8ee20128  lw          $v0, 0x128($s7)
    ctx->pc = 0x4d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 296)));
    // 0x4d24cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d24d0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4d24d4: 0x8ee2012c  lw          $v0, 0x12C($s7)
    ctx->pc = 0x4d24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
    // 0x4d24d8: 0xaec32340  sw          $v1, 0x2340($s6)
    ctx->pc = 0x4d24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9024), GPR_U32(ctx, 3));
    // 0x4d24dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d24e0: 0xaec42344  sw          $a0, 0x2344($s6)
    ctx->pc = 0x4d24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9028), GPR_U32(ctx, 4));
    // 0x4d24e4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4d24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4d24e8: 0xaec52348  sw          $a1, 0x2348($s6)
    ctx->pc = 0x4d24e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9032), GPR_U32(ctx, 5));
    // 0x4d24ec: 0x96e201b6  lhu         $v0, 0x1B6($s7)
    ctx->pc = 0x4d24ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 438)));
    // 0x4d24f0: 0xa6c22332  sh          $v0, 0x2332($s6)
    ctx->pc = 0x4d24f0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d24f4: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4d24f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d24f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4D24F8u;
    {
        const bool branch_taken_0x4d24f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D24F8u;
        // 0x4d24fc: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d24f8) {
            ctx->pc = 0x4D2538u;
            goto label_4d2538;
        }
    }
    ctx->pc = 0x4D2500u;
    // 0x4d2500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d2500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d2504: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D2504u;
    {
        const bool branch_taken_0x4d2504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2504u;
        // 0x4d2508: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2504) {
            ctx->pc = 0x4D2578u;
            goto label_4d2578;
        }
    }
    ctx->pc = 0x4D250Cu;
    // 0x4d250c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d250cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2510: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d2510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2514: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d2514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d2518: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d2518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d251c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d251cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d2520: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d2520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d2524: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d2524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d2528: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d2528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d252c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d2530: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2530u;
        // 0x4d2534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2538u;
label_4d2538:
    // 0x4d2538: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d2538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d253c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4d253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2540: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d2540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2544: 0xa6c2232c  sh          $v0, 0x232C($s6)
    ctx->pc = 0x4d2544u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9004), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d2548: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d2548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d254c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d254cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2550: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d2550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d2554: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d2554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d2558: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d2558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d255c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d255cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d2560: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d2560u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d2564: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d2564u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d2568: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d2568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d256c: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4D256Cu;
    ctx->pc = 0x4D2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D256Cu;
    // 0x4d2570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4D2574u;
    // 0x4d2574: 0x0  nop
    ctx->pc = 0x4d2574u;
    // NOP
label_4d2578:
    // 0x4d2578: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d2578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d257c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4d257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2580: 0xa6c2232e  sh          $v0, 0x232E($s6)
    ctx->pc = 0x4d2580u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d2584: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d2584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2588: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d2588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d258c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d258cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d2590: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d2590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d2594: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d2594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d2598: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d2598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d259c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d259cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d25a0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d25a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d25a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d25a8: 0x8122e2c  j           func_48B8B0
    ctx->pc = 0x4D25A8u;
    ctx->pc = 0x4D25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D25A8u;
    // 0x4d25ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B8B0u, 0x4D25A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D25B0u;
}
