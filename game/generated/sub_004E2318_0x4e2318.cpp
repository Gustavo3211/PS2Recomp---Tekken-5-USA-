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

// Function: sub_004E2318
// Address: 0x4e2318 - 0x4e2b68
void sub_004E2318_0x4e2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2318_0x4e2318");
#endif

    switch (ctx->pc) {
        case 0x4e2338u: goto label_4e2338;
        case 0x4e2350u: goto label_4e2350;
        case 0x4e2364u: goto label_4e2364;
        case 0x4e23c8u: goto label_4e23c8;
        case 0x4e2504u: goto label_4e2504;
        case 0x4e2564u: goto label_4e2564;
        case 0x4e25f8u: goto label_4e25f8;
        case 0x4e2650u: goto label_4e2650;
        case 0x4e2764u: goto label_4e2764;
        case 0x4e27e4u: goto label_4e27e4;
        case 0x4e27ecu: goto label_4e27ec;
        case 0x4e27f4u: goto label_4e27f4;
        case 0x4e28d4u: goto label_4e28d4;
        case 0x4e2930u: goto label_4e2930;
        case 0x4e2a28u: goto label_4e2a28;
        case 0x4e2a38u: goto label_4e2a38;
        case 0x4e2a48u: goto label_4e2a48;
        case 0x4e2a58u: goto label_4e2a58;
        case 0x4e2ac8u: goto label_4e2ac8;
        case 0x4e2b08u: goto label_4e2b08;
        case 0x4e2b10u: goto label_4e2b10;
        case 0x4e2b1cu: goto label_4e2b1c;
        case 0x4e2b30u: goto label_4e2b30;
        case 0x4e2b40u: goto label_4e2b40;
        case 0x4e2b50u: goto label_4e2b50;
        default: break;
    }

    ctx->pc = 0x4e2318u;

    // 0x4e2318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e231c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e231cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e232c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e232cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2330: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E2330u;
    ctx->pc = 0x4E2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2330u;
    // 0x4e2334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E2338u;
label_4e2338:
    // 0x4e2338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e233c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e233cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2340: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e2344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2348: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2348u;
        // 0x4e234c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2350u;
label_4e2350:
    // 0x4e2350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e2358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e235c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E235Cu;
    SET_GPR_U32(ctx, 31, 0x4E2364u);
    ctx->pc = 0x4E2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E235Cu;
    // 0x4e2360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E235Cu, 0x4E2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2364u;
label_4e2364:
    // 0x4e2364: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4e2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4e2368: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e2368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e236c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e236cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2370: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e2370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e2374: 0x24c6119c  addiu       $a2, $a2, 0x119C
    ctx->pc = 0x4e2374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4508));
    // 0x4e2378: 0x240806cd  addiu       $t0, $zero, 0x6CD
    ctx->pc = 0x4e2378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1741));
    // 0x4e237c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e237cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2380: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4e2380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e2384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e2388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e238c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x4e238cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4e2390: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4e2390u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2394: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e2394u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2398: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x4e2398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4e239c: 0xa4430160  sh          $v1, 0x160($v0)
    ctx->pc = 0x4e239cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e23a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e23a4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x4e23a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e23a8: 0xa6080160  sh          $t0, 0x160($s0)
    ctx->pc = 0x4e23a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 8));
    // 0x4e23ac: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4e23acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e23b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e23b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e23b4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e23b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e23b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e23bc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e23bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e23c0: 0x81388f2  j           func_4E23C8
    ctx->pc = 0x4E23C0u;
    ctx->pc = 0x4E23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E23C0u;
    // 0x4e23c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E23C8u;
    goto label_4e23c8;
    ctx->pc = 0x4E23C8u;
label_4e23c8:
    // 0x4e23c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e23c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e23cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e23d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e23d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e23d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e23d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e23d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e23dc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e23dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4e23e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e23e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e23e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e23e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e23ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e23f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e23f4: 0x24751188  addiu       $s5, $v1, 0x1188
    ctx->pc = 0x4e23f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4488));
    // 0x4e23f8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e23f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e23fc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4e23fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2400: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e2404: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2408: 0x8c4a1198  lw          $t2, 0x1198($v0)
    ctx->pc = 0x4e2408u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F1198u));
    // 0x4e240c: 0x2474118c  addiu       $s4, $v1, 0x118C
    ctx->pc = 0x4e240cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4492));
    // 0x4e2410: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e2410u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e2414: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2418: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4e2418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4e241c: 0x24731190  addiu       $s3, $v1, 0x1190
    ctx->pc = 0x4e241cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
    // 0x4e2420: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e2420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e2424: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e2424u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F118Cu));
    // 0x4e2428: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e242c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e242cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2430: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e2430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e2434: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e2434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e2438: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e2438u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e243c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e243cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e2440: 0x24721184  addiu       $s2, $v1, 0x1184
    ctx->pc = 0x4e2440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4484));
    // 0x4e2444: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4e2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4e2448: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e2448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e244c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2450: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4e2450u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e2454: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2458: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4e2458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e245c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2460: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e2460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e2464: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e2464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e2468: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e2468u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e246c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e246cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e2470: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e2470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e2474: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4e2478: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4e2478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e247c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2480: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2484: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2488: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e2488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e248c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e248cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e2490: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e2490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e2494: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e2498: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4e2498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e249c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e24a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e24a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e24a4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4e24a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e24a8: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4e24a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4e24ac: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4e24acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4e24b0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e24b4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4e24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e24b8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e24b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e24bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e24bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e24c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e24c4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e24c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e24c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e24c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4e24cc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e24ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e24d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e24d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e24d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e24d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e24d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e24dc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4e24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e24e0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4e24e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4e24e4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4e24e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4e24e8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e24e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e24ec: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4e24ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e24f0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e24f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e24f4: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e24f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e24f8: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4e24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4e24fc: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E24FCu;
    SET_GPR_U32(ctx, 31, 0x4E2504u);
    ctx->pc = 0x4E2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E24FCu;
    // 0x4e2500: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E24FCu, 0x4E2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2504u;
label_4e2504:
    // 0x4e2504: 0x5456000c  bnel        $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2504u;
    {
        const bool branch_taken_0x4e2504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4e2504) {
            ctx->pc = 0x4E2508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2504u;
            // 0x4e2508: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2538u;
            goto label_4e2538;
        }
    }
    ctx->pc = 0x4E250Cu;
    // 0x4e250c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e251c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e251cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2528: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2528u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e252c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2530: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E2530u;
    ctx->pc = 0x4E2534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2530u;
    // 0x4e2534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E2538u;
label_4e2538:
    // 0x4e2538: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e253c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4e253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4e2540: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e2540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e2544: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e254c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2550: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e2550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e2554: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e2554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e2558: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4e2558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e255c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E255Cu;
    SET_GPR_U32(ctx, 31, 0x4E2564u);
    ctx->pc = 0x4E2560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E255Cu;
    // 0x4e2560: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E255Cu, 0x4E2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2564u;
label_4e2564:
    // 0x4e2564: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2564u;
    {
        const bool branch_taken_0x4e2564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2564u;
        // 0x4e2568: 0x260601b8  addiu       $a2, $s0, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2564) {
            ctx->pc = 0x4E2598u;
            goto label_4e2598;
        }
    }
    ctx->pc = 0x4E256Cu;
    // 0x4e256c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e257c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e257cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2580: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2584: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2584u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2588: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2588u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e258c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2590: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E2590u;
    ctx->pc = 0x4E2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2590u;
    // 0x4e2594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E2598u;
label_4e2598:
    // 0x4e2598: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e2598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e259c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e259cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e25a0: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4e25a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e25a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e25a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e25a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e25a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e25ac: 0xa6030164  sh          $v1, 0x164($s0)
    ctx->pc = 0x4e25acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e25b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e25b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e25b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e25b8: 0x94a21180  lhu         $v0, 0x1180($a1)
    ctx->pc = 0x4e25b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1180u));
    // 0x4e25bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e25bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e25c0: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4e25c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e25c4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4e25c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e25c8: 0xa616002e  sh          $s6, 0x2E($s0)
    ctx->pc = 0x4e25c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 22));
    // 0x4e25cc: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4e25ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e25d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e25d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e25d4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e25d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e25d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e25d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e25dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e25dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e25e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e25e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e25e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e25e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e25e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e25ec: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e25ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e25f0: 0x813897e  j           func_4E25F8
    ctx->pc = 0x4E25F0u;
    ctx->pc = 0x4E25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E25F0u;
    // 0x4e25f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E25F8u;
    goto label_4e25f8;
    ctx->pc = 0x4E25F8u;
label_4e25f8:
    // 0x4e25f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e25f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e25fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e25fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e2600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e2604: 0x24450162  addiu       $a1, $v0, 0x162
    ctx->pc = 0x4e2604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 354));
    // 0x4e2608: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4e2608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4e260c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e260cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e2610: 0x24630600  addiu       $v1, $v1, 0x600
    ctx->pc = 0x4e2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
    // 0x4e2614: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e2618: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2618u;
    {
        const bool branch_taken_0x4e2618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2618u;
        // 0x4e261c: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2618) {
            ctx->pc = 0x4E2630u;
            goto label_4e2630;
        }
    }
    ctx->pc = 0x4E2620u;
    // 0x4e2620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e2620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2624: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E2624u;
    ctx->pc = 0x4E2628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2624u;
    // 0x4e2628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E262Cu;
    // 0x4e262c: 0x0  nop
    ctx->pc = 0x4e262cu;
    // NOP
label_4e2630:
    // 0x4e2630: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4e2630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4e2634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e2634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2638: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4e2638u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e263c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e263cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2640: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e2640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e2644: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e2644u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2648: 0x8138994  j           func_4E2650
    ctx->pc = 0x4E2648u;
    ctx->pc = 0x4E264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2648u;
    // 0x4e264c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2650u;
    goto label_4e2650;
    ctx->pc = 0x4E2650u;
label_4e2650:
    // 0x4e2650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2654: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e2654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e2658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e265c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4e265cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2660: 0x24491180  addiu       $t1, $v0, 0x1180
    ctx->pc = 0x4e2660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x4e2664: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4e2664u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4e2668: 0x8503015a  lh          $v1, 0x15A($t0)
    ctx->pc = 0x4e2668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 346)));
    // 0x4e266c: 0x250b01b6  addiu       $t3, $t0, 0x1B6
    ctx->pc = 0x4e266cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 438));
    // 0x4e2670: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e2670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e2674: 0x250c0118  addiu       $t4, $t0, 0x118
    ctx->pc = 0x4e2674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 280));
    // 0x4e2678: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4e2678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4e267c: 0x250d011c  addiu       $t5, $t0, 0x11C
    ctx->pc = 0x4e267cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 284));
    // 0x4e2680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e2684: 0x250f0120  addiu       $t7, $t0, 0x120
    ctx->pc = 0x4e2684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x4e2688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e2688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e268c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4e268cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4e2690: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4e2690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e2694: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4e2694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2698: 0x8502015c  lh          $v0, 0x15C($t0)
    ctx->pc = 0x4e2698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 348)));
    // 0x4e269c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E269Cu;
    {
        const bool branch_taken_0x4e269c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E269Cu;
        // 0x4e26a0: 0x250e01bc  addiu       $t6, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e269c) {
            ctx->pc = 0x4E26B0u;
            goto label_4e26b0;
        }
    }
    ctx->pc = 0x4E26A4u;
    // 0x4e26a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e26a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e26a8: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E26A8u;
    ctx->pc = 0x4E26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E26A8u;
    // 0x4e26ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E26B0u;
label_4e26b0:
    // 0x4e26b0: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4e26b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e26b4: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x4e26b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x4e26b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e26b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e26bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e26bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e26c0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4e26c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4e26c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4e26c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e26c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4e26cc: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4e26ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e26d0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e26d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e26d4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4e26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4e26d8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e26dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e26dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e26e0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4e26e4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e26e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e26e8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4e26e8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e26ec: 0xa506015e  sh          $a2, 0x15E($t0)
    ctx->pc = 0x4e26ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e26f0: 0x95020164  lhu         $v0, 0x164($t0)
    ctx->pc = 0x4e26f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 356)));
    // 0x4e26f4: 0xa507002e  sh          $a3, 0x2E($t0)
    ctx->pc = 0x4e26f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 46), (uint16_t)GPR_U32(ctx, 7));
    // 0x4e26f8: 0xa50201b8  sh          $v0, 0x1B8($t0)
    ctx->pc = 0x4e26f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e26fc: 0xa5000162  sh          $zero, 0x162($t0)
    ctx->pc = 0x4e26fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e2700: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e2700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e2704: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e2704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e2708: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4e2708u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e270c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4e270cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e2710: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x4e2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x4e2714: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x4e2714u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2718: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4e2718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4e271c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e2720: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4e2720u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2724: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4e2724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e2728: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4e2728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4e272c: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x4e272cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2730: 0x81389ce  j           func_4E2738
    ctx->pc = 0x4E2730u;
    ctx->pc = 0x4E2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2730u;
    // 0x4e2734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2738u;
    goto label_4e2738;
    ctx->pc = 0x4E2738u;
label_4e2738:
    // 0x4e2738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e2738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e273c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e2740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e2744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e2748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e274c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e2750: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e2750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e2754: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e2758: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e275c: 0xc12564a  jal         func_495928
    ctx->pc = 0x4E275Cu;
    SET_GPR_U32(ctx, 31, 0x4E2764u);
    ctx->pc = 0x4E2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E275Cu;
    // 0x4e2760: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4E275Cu, 0x4E2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2764u;
label_4e2764:
    // 0x4e2764: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x4E2764u;
    {
        const bool branch_taken_0x4e2764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2764u;
        // 0x4e2768: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2764) {
            ctx->pc = 0x4E2A88u;
            goto label_4e2a88;
        }
    }
    ctx->pc = 0x4E276Cu;
    // 0x4e276c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4e276cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4e2770: 0x8ec6119c  lw          $a2, 0x119C($s6)
    ctx->pc = 0x4e2770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4508)));
    // 0x4e2774: 0x26a31188  addiu       $v1, $s5, 0x1188
    ctx->pc = 0x4e2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4488));
    // 0x4e2778: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4e2778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e277c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e277cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4e2780: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x4e2780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x4e2784: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4e2784u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4e2788: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e2788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e278c: 0x2669118c  addiu       $t1, $s3, 0x118C
    ctx->pc = 0x4e278cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4492));
    // 0x4e2790: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2794: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4e2794u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F118Cu));
    // 0x4e2798: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e2798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e279c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e279cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e27a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4e27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4e27a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e27a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e27a8: 0x25081190  addiu       $t0, $t0, 0x1190
    ctx->pc = 0x4e27a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4496));
    // 0x4e27ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4e27acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e27b0: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x4e27b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e27b4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e27b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4e27b8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1190u));
    // 0x4e27bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e27bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e27c0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e27c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e27c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e27c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e27c8: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4e27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4e27cc: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x4e27ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x4e27d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e27d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e27d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e27d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e27d8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e27dc: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E27DCu;
    SET_GPR_U32(ctx, 31, 0x4E27E4u);
    ctx->pc = 0x4E27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E27DCu;
    // 0x4e27e0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E27DCu, 0x4E27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E27E4u;
label_4e27e4:
    // 0x4e27e4: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E27E4u;
    SET_GPR_U32(ctx, 31, 0x4E27ECu);
    ctx->pc = 0x4E27E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E27E4u;
    // 0x4e27e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E27E4u, 0x4E27ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E27ECu;
label_4e27ec:
    // 0x4e27ec: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E27ECu;
    SET_GPR_U32(ctx, 31, 0x4E27F4u);
    ctx->pc = 0x4E27F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E27ECu;
    // 0x4e27f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E27ECu, 0x4E27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E27F4u;
label_4e27f4:
    // 0x4e27f4: 0x26841180  addiu       $a0, $s4, 0x1180
    ctx->pc = 0x4e27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4480));
    // 0x4e27f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e27f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e27fc: 0x862201bc  lh          $v0, 0x1BC($s1)
    ctx->pc = 0x4e27fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4e2800: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2804: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2808: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e280c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e280cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e2810: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e2810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2814: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x4e2814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4e2818: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4E2818u;
    {
        const bool branch_taken_0x4e2818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2818u;
        // 0x4e281c: 0x26320118  addiu       $s2, $s1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2818) {
            ctx->pc = 0x4E28E0u;
            goto label_4e28e0;
        }
    }
    ctx->pc = 0x4E2820u;
    // 0x4e2820: 0x2623014a  addiu       $v1, $s1, 0x14A
    ctx->pc = 0x4e2820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
    // 0x4e2824: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e2824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e2828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e282c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e282cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2830: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e2834: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2838: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e283c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2840: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2844: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2848: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e284c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e284cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2850: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e2850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2854: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4e2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4e2858: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e285c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e285cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2860: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e2864: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e2864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2868: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4E2868u;
    {
        const bool branch_taken_0x4e2868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2868u;
        // 0x4e286c: 0x8ec9119c  lw          $t1, 0x119C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2868) {
            ctx->pc = 0x4E28E4u;
            goto label_4e28e4;
        }
    }
    ctx->pc = 0x4E2870u;
    // 0x4e2870: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e2870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e2874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4e2874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e2878: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4e2878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4e287c: 0x26320118  addiu       $s2, $s1, 0x118
    ctx->pc = 0x4e287cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4e2880: 0xa4a22330  sh          $v0, 0x2330($a1)
    ctx->pc = 0x4e2880u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4e2884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2888: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4e2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4e288c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e2890: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e2890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e2894: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4e2894u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2898: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4e2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4e289c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4e289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4e28a0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e28a4: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4e28a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e28a8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4e28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4e28ac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e28acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e28b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e28b4: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4e28b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e28b8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e28b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e28bc: 0xa4a3233a  sh          $v1, 0x233A($a1)
    ctx->pc = 0x4e28bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e28c0: 0x9622011c  lhu         $v0, 0x11C($s1)
    ctx->pc = 0x4e28c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4e28c4: 0xa4a2233c  sh          $v0, 0x233C($a1)
    ctx->pc = 0x4e28c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e28c8: 0x96230120  lhu         $v1, 0x120($s1)
    ctx->pc = 0x4e28c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4e28cc: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4E28CCu;
    SET_GPR_U32(ctx, 31, 0x4E28D4u);
    ctx->pc = 0x4E28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E28CCu;
    // 0x4e28d0: 0xa4a3233e  sh          $v1, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4E28CCu, 0x4E28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E28D4u;
label_4e28d4:
    // 0x4e28d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E28D4u;
    {
        const bool branch_taken_0x4e28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28D4u;
        // 0x4e28d8: 0x8ec9119c  lw          $t1, 0x119C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e28d4) {
            ctx->pc = 0x4E28E4u;
            goto label_4e28e4;
        }
    }
    ctx->pc = 0x4E28DCu;
    // 0x4e28dc: 0x0  nop
    ctx->pc = 0x4e28dcu;
    // NOP
label_4e28e0:
    // 0x4e28e0: 0x8ec9119c  lw          $t1, 0x119C($s6)
    ctx->pc = 0x4e28e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4508)));
label_4e28e4:
    // 0x4e28e4: 0x26a41188  addiu       $a0, $s5, 0x1188
    ctx->pc = 0x4e28e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4488));
    // 0x4e28e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e28ec: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e28ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4e28f0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e28f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e28f4: 0x2668118c  addiu       $t0, $s3, 0x118C
    ctx->pc = 0x4e28f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4492));
    // 0x4e28f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e28f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e28fc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4e28fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2900: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2904: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e2904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2908: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e290c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e290cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e2910: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e2914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2918: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e291c: 0x85220004  lh          $v0, 0x4($t1)
    ctx->pc = 0x4e291cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4e2920: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2924: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e2924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e2928: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E2928u;
    SET_GPR_U32(ctx, 31, 0x4E2930u);
    ctx->pc = 0x4E292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2928u;
    // 0x4e292c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E2928u, 0x4E2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2930u;
label_4e2930:
    // 0x4e2930: 0x26841180  addiu       $a0, $s4, 0x1180
    ctx->pc = 0x4e2930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4480));
    // 0x4e2934: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e2934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e2938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e293c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e293cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e2940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2944: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e294c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e294cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e2950: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2954: 0x84930000  lh          $s3, 0x0($a0)
    ctx->pc = 0x4e2954u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2958: 0x86220162  lh          $v0, 0x162($s1)
    ctx->pc = 0x4e2958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x4e295c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4e295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4e2960: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2964: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2968: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e296c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e296cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2970: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e2970u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2974: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e2974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2978: 0x8622015e  lh          $v0, 0x15E($s1)
    ctx->pc = 0x4e2978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x4e297c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2980: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e2984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2988: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e298c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2990: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e2990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e2994: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4e2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4e2998: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e2998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e299c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e299cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e29a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e29a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e29a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e29a8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e29a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e29ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e29acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e29b0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4e29b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4e29b4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e29b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e29b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e29b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e29bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e29c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e29c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e29c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e29c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e29c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4e29c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4e29cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e29ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e29d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e29d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e29d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e29d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e29d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e29dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e29e0: 0x22483  sra         $a0, $v0, 18
    ctx->pc = 0x4e29e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4e29e4: 0x10850012  beq         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4E29E4u;
    {
        const bool branch_taken_0x4e29e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4E29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29E4u;
        // 0x4e29e8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e29e4) {
            ctx->pc = 0x4E2A30u;
            goto label_4e2a30;
        }
    }
    ctx->pc = 0x4E29ECu;
    // 0x4e29ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E29ECu;
    {
        const bool branch_taken_0x4e29ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e29ec) {
            ctx->pc = 0x4E29F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E29ECu;
            // 0x4e29f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A08u;
            goto label_4e2a08;
        }
    }
    ctx->pc = 0x4E29F4u;
    // 0x4e29f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4E29F4u;
    {
        const bool branch_taken_0x4e29f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e29f4) {
            ctx->pc = 0x4E2A20u;
            goto label_4e2a20;
        }
    }
    ctx->pc = 0x4E29FCu;
    // 0x4e29fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4E29FCu;
    {
        const bool branch_taken_0x4e29fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29FCu;
        // 0x4e2a00: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e29fc) {
            ctx->pc = 0x4E2A5Cu;
            goto label_4e2a5c;
        }
    }
    ctx->pc = 0x4E2A04u;
    // 0x4e2a04: 0x0  nop
    ctx->pc = 0x4e2a04u;
    // NOP
label_4e2a08:
    // 0x4e2a08: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E2A08u;
    {
        const bool branch_taken_0x4e2a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A08u;
        // 0x4e2a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a08) {
            ctx->pc = 0x4E2A40u;
            goto label_4e2a40;
        }
    }
    ctx->pc = 0x4E2A10u;
    // 0x4e2a10: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4E2A10u;
    {
        const bool branch_taken_0x4e2a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e2a10) {
            ctx->pc = 0x4E2A50u;
            goto label_4e2a50;
        }
    }
    ctx->pc = 0x4E2A18u;
    // 0x4e2a18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4E2A18u;
    {
        const bool branch_taken_0x4e2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A18u;
        // 0x4e2a1c: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a18) {
            ctx->pc = 0x4E2A5Cu;
            goto label_4e2a5c;
        }
    }
    ctx->pc = 0x4E2A20u;
label_4e2a20:
    // 0x4e2a20: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E2A20u;
    SET_GPR_U32(ctx, 31, 0x4E2A28u);
    ctx->pc = 0x4E2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2A20u;
    // 0x4e2a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E2A20u, 0x4E2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2A28u;
label_4e2a28:
    // 0x4e2a28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E2A28u;
    {
        const bool branch_taken_0x4e2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A28u;
        // 0x4e2a2c: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a28) {
            ctx->pc = 0x4E2A5Cu;
            goto label_4e2a5c;
        }
    }
    ctx->pc = 0x4E2A30u;
label_4e2a30:
    // 0x4e2a30: 0xc127ea6  jal         func_49FA98
    ctx->pc = 0x4E2A30u;
    SET_GPR_U32(ctx, 31, 0x4E2A38u);
    ctx->pc = 0x4E2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2A30u;
    // 0x4e2a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA98u, 0x4E2A30u, 0x4E2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2A38u;
label_4e2a38:
    // 0x4e2a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2A38u;
    {
        const bool branch_taken_0x4e2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A38u;
        // 0x4e2a3c: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a38) {
            ctx->pc = 0x4E2A5Cu;
            goto label_4e2a5c;
        }
    }
    ctx->pc = 0x4E2A40u;
label_4e2a40:
    // 0x4e2a40: 0xc127ef0  jal         func_49FBC0
    ctx->pc = 0x4E2A40u;
    SET_GPR_U32(ctx, 31, 0x4E2A48u);
    ctx->pc = 0x4E2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2A40u;
    // 0x4e2a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FBC0u, 0x4E2A40u, 0x4E2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2A48u;
label_4e2a48:
    // 0x4e2a48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E2A48u;
    {
        const bool branch_taken_0x4e2a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A48u;
        // 0x4e2a4c: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a48) {
            ctx->pc = 0x4E2A5Cu;
            goto label_4e2a5c;
        }
    }
    ctx->pc = 0x4E2A50u;
label_4e2a50:
    // 0x4e2a50: 0xc127f40  jal         func_49FD00
    ctx->pc = 0x4E2A50u;
    SET_GPR_U32(ctx, 31, 0x4E2A58u);
    ctx->pc = 0x4E2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2A50u;
    // 0x4e2a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x4E2A50u, 0x4E2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2A58u;
label_4e2a58:
    // 0x4e2a58: 0xa6530000  sh          $s3, 0x0($s2)
    ctx->pc = 0x4e2a58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
label_4e2a5c:
    // 0x4e2a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2a70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2a74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2a78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2a78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2a7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e2a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2a80: 0x8138aac  j           func_4E2AB0
    ctx->pc = 0x4E2A80u;
    ctx->pc = 0x4E2A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2A80u;
    // 0x4e2a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2AB0u;
    goto label_4e2ab0;
    ctx->pc = 0x4E2A88u;
label_4e2a88:
    // 0x4e2a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2a90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2a94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2a94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2a98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2a98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2a9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2a9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2aa0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2aa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2aa4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e2aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AA8u;
        // 0x4e2aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2AB0u;
label_4e2ab0:
    // 0x4e2ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e2ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e2ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e2abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e2abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e2ac0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E2AC0u;
    SET_GPR_U32(ctx, 31, 0x4E2AC8u);
    ctx->pc = 0x4E2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2AC0u;
    // 0x4e2ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E2AC0u, 0x4E2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2AC8u;
label_4e2ac8:
    // 0x4e2ac8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2ad0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4E2AD0u;
    {
        const bool branch_taken_0x4e2ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AD0u;
        // 0x4e2ad4: 0x24661194  addiu       $a2, $v1, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ad0) {
            ctx->pc = 0x4E2B50u;
            goto label_4e2b50;
        }
    }
    ctx->pc = 0x4E2AD8u;
    // 0x4e2ad8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e2adc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4e2adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2ae0: 0x8c45119c  lw          $a1, 0x119C($v0)
    ctx->pc = 0x4e2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2ae4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2ae8: 0x84a30010  lh          $v1, 0x10($a1)
    ctx->pc = 0x4e2ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4e2aec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e2af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e2af4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e2af8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e2af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e2afc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e2b00: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E2B00u;
    SET_GPR_U32(ctx, 31, 0x4E2B08u);
    ctx->pc = 0x4E2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B00u;
    // 0x4e2b04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E2B00u, 0x4E2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B08u;
label_4e2b08:
    // 0x4e2b08: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4E2B08u;
    SET_GPR_U32(ctx, 31, 0x4E2B10u);
    ctx->pc = 0x4E2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B08u;
    // 0x4e2b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4E2B08u, 0x4E2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B10u;
label_4e2b10:
    // 0x4e2b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2b14: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E2B14u;
    SET_GPR_U32(ctx, 31, 0x4E2B1Cu);
    ctx->pc = 0x4E2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B14u;
    // 0x4e2b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E2B14u, 0x4E2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B1Cu;
label_4e2b1c:
    // 0x4e2b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2b20: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2B20u;
    {
        const bool branch_taken_0x4e2b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B20u;
        // 0x4e2b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2b20) {
            ctx->pc = 0x4E2B38u;
            goto label_4e2b38;
        }
    }
    ctx->pc = 0x4E2B28u;
    // 0x4e2b28: 0xc138ada  jal         func_4E2B68
    ctx->pc = 0x4E2B28u;
    SET_GPR_U32(ctx, 31, 0x4E2B30u);
    ctx->pc = 0x4E2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2B68u, 0x4E2B28u, 0x4E2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B30u;
label_4e2b30:
    // 0x4e2b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2B30u;
    {
        const bool branch_taken_0x4e2b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B30u;
        // 0x4e2b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2b30) {
            ctx->pc = 0x4E2B54u;
            goto label_4e2b54;
        }
    }
    ctx->pc = 0x4E2B38u;
label_4e2b38:
    // 0x4e2b38: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E2B38u;
    SET_GPR_U32(ctx, 31, 0x4E2B40u);
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E2B38u, 0x4E2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B40u;
label_4e2b40:
    // 0x4e2b40: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E2B40u;
    {
        const bool branch_taken_0x4e2b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e2b40) {
            ctx->pc = 0x4E2B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B40u;
            // 0x4e2b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B54u;
            goto label_4e2b54;
        }
    }
    ctx->pc = 0x4E2B48u;
    // 0x4e2b48: 0xc138aea  jal         func_4E2BA8
    ctx->pc = 0x4E2B48u;
    SET_GPR_U32(ctx, 31, 0x4E2B50u);
    ctx->pc = 0x4E2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B48u;
    // 0x4e2b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2BA8u, 0x4E2B48u, 0x4E2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B50u;
label_4e2b50:
    // 0x4e2b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2b54:
    // 0x4e2b54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e2b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B5Cu;
        // 0x4e2b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2B64u;
    // 0x4e2b64: 0x0  nop
    ctx->pc = 0x4e2b64u;
    // NOP
    ctx->pc = 0x4e2b68u;
}
