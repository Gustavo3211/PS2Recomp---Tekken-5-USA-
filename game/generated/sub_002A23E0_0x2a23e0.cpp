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

// Function: sub_002A23E0
// Address: 0x2a23e0 - 0x2a2688
void sub_002A23E0_0x2a23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A23E0_0x2a23e0");
#endif

    switch (ctx->pc) {
        case 0x2a2418u: goto label_2a2418;
        case 0x2a2480u: goto label_2a2480;
        case 0x2a24ccu: goto label_2a24cc;
        case 0x2a24e0u: goto label_2a24e0;
        case 0x2a24f8u: goto label_2a24f8;
        case 0x2a2538u: goto label_2a2538;
        case 0x2a2570u: goto label_2a2570;
        case 0x2a2580u: goto label_2a2580;
        case 0x2a25bcu: goto label_2a25bc;
        case 0x2a2608u: goto label_2a2608;
        case 0x2a263cu: goto label_2a263c;
        default: break;
    }

    ctx->pc = 0x2a23e0u;

    // 0x2a23e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a23e4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a23e8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a23e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a23f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a23f4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a23f8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a23f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a23fc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a2400: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a2404: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a2404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a2408: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a2408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a240c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a240cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2a2410: 0x8c94016c  lw          $s4, 0x16C($a0)
    ctx->pc = 0x2a2410u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2a2414: 0x0  nop
    ctx->pc = 0x2a2414u;
    // NOP
label_2a2418:
    // 0x2a2418: 0x82820020  lb          $v0, 0x20($s4)
    ctx->pc = 0x2a2418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2a241c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2420: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x2a2420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a2424: 0x50600086  beql        $v1, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x2A2424u;
    {
        const bool branch_taken_0x2a2424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2424) {
            ctx->pc = 0x2A2428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2424u;
            // 0x2a2428: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2640u;
            goto label_2a2640;
        }
    }
    ctx->pc = 0x2A242Cu;
    // 0x2a242c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2430: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a2434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2438: 0x8c63d080  lw          $v1, -0x2F80($v1)
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955136)));
    // 0x2a243c: 0x600008  jr          $v1
    ctx->pc = 0x2A243Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2448u: goto label_2a2448;
            case 0x2A2540u: goto label_2a2540;
            case 0x2A2558u: goto label_2a2558;
            case 0x2A2610u: goto label_2a2610;
            case 0x2A263Cu: goto label_2a263c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A243Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A2444u;
    // 0x2a2444: 0x0  nop
    ctx->pc = 0x2a2444u;
    // NOP
label_2a2448:
    // 0x2a2448: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a2448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a244c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2450: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x2a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x2a2454: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a2454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a2458: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x2a2458u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x47D078u));
    // 0x2a245c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a2460: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2a2460u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47D070u));
    // 0x2a2464: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a2464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2468: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2a2468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a246c: 0xffa80038  sd          $t0, 0x38($sp)
    ctx->pc = 0x2a246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 8));
    // 0x2a2470: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x2a2470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x2a2474: 0x1e80c0  sll         $s0, $fp, 3
    ctx->pc = 0x2a2474u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2a2478: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A2478u;
    SET_GPR_U32(ctx, 31, 0x2A2480u);
    ctx->pc = 0x2A247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2478u;
    // 0x2a247c: 0xa3a0003f  sb          $zero, 0x3F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A2478u, 0x2A2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2480u;
label_2a2480:
    // 0x2a2480: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a2480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a2484: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x2a2488: 0x2463cc78  addiu       $v1, $v1, -0x3388
    ctx->pc = 0x2a2488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954104));
    // 0x2a248c: 0x2631cbd0  addiu       $s1, $s1, -0x3430
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953936));
    // 0x2a2490: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2a2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a2494: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a2498: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a2498u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a249c: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a24a0: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2a24a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a24a4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2a24a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a24a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a24a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24ac: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a24acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a24b0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a24b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a24b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a24b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a24b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a24bc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a24c0: 0xa7a0002e  sh          $zero, 0x2E($sp)
    ctx->pc = 0x2a24c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a24c4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A24C4u;
    SET_GPR_U32(ctx, 31, 0x2A24CCu);
    ctx->pc = 0x2A24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24C4u;
    // 0x2a24c8: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A24C4u, 0x2A24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24CCu;
label_2a24cc:
    // 0x2a24cc: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a24d0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2a24d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2a24d4: 0x24a53f58  addiu       $a1, $a1, 0x3F58
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16216));
    // 0x2a24d8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A24D8u;
    SET_GPR_U32(ctx, 31, 0x2A24E0u);
    ctx->pc = 0x2A24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24D8u;
    // 0x2a24dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A24D8u, 0x2A24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24E0u;
label_2a24e0:
    // 0x2a24e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a24e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a24e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a24e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a24ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a24ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a24f0: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A24F0u;
    SET_GPR_U32(ctx, 31, 0x2A24F8u);
    ctx->pc = 0x2A24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24F0u;
    // 0x2a24f4: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A24F0u, 0x2A24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24F8u;
label_2a24f8:
    // 0x2a24f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a24fc: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x2a24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
    // 0x2a2500: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2a2500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2a2504: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2a2504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a2508: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2a2508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a250c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2a250cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a2510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2514: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a2518: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a251c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2520: 0x34e7a0ff  ori         $a3, $a3, 0xA0FF
    ctx->pc = 0x2a2520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)41215);
    // 0x2a2524: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2528: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a2528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a252c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2a252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2a2530: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2530u;
    SET_GPR_U32(ctx, 31, 0x2A2538u);
    ctx->pc = 0x2A2534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2530u;
    // 0x2a2534: 0xa7a00012  sh          $zero, 0x12($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2530u, 0x2A2538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2538u;
label_2a2538:
    // 0x2a2538: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2A2538u;
    {
        const bool branch_taken_0x2a2538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2538u;
        // 0x2a253c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2538) {
            ctx->pc = 0x2A2640u;
            goto label_2a2640;
        }
    }
    ctx->pc = 0x2A2540u;
label_2a2540:
    // 0x2a2540: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2a2540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2a2544: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a2544u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a2548: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a254c: 0x8d29cc60  lw          $t1, -0x33A0($t1)
    ctx->pc = 0x2a254cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954080)));
    // 0x2a2550: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2A2550u;
    {
        const bool branch_taken_0x2a2550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2550u;
        // 0x2a2554: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2550) {
            ctx->pc = 0x2A25F0u;
            goto label_2a25f0;
        }
    }
    ctx->pc = 0x2A2558u;
label_2a2558:
    // 0x2a2558: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a2558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a255c: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2a255cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2a2560: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2a2560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a2564: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x2a2564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a2568: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A2568u;
    {
        const bool branch_taken_0x2a2568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2568u;
        // 0x2a256c: 0x24150020  addiu       $s5, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2568) {
            ctx->pc = 0x2A2598u;
            goto label_2a2598;
        }
    }
    ctx->pc = 0x2A2570u;
label_2a2570:
    // 0x2a2570: 0x54960009  bnel        $a0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2570u;
    {
        const bool branch_taken_0x2a2570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x2a2570) {
            ctx->pc = 0x2A2574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2570u;
            // 0x2a2574: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2598u;
            goto label_2a2598;
        }
    }
    ctx->pc = 0x2A2578u;
    // 0x2a2578: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A2578u;
    SET_GPR_U32(ctx, 31, 0x2A2580u);
    ctx->pc = 0x2A257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2578u;
    // 0x2a257c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A2578u, 0x2A2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2580u;
label_2a2580:
    // 0x2a2580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2584: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a2588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a258c: 0x50750012  beql        $v1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A258Cu;
    {
        const bool branch_taken_0x2a258c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x2a258c) {
            ctx->pc = 0x2A2590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A258Cu;
            // 0x2a2590: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A25D8u;
            goto label_2a25d8;
        }
    }
    ctx->pc = 0x2A2594u;
    // 0x2a2594: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2598:
    // 0x2a2598: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x2a2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2a259c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2a259cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a25a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A25A0u;
    {
        const bool branch_taken_0x2a25a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25A0u;
        // 0x2a25a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25a0) {
            ctx->pc = 0x2A25D8u;
            goto label_2a25d8;
        }
    }
    ctx->pc = 0x2A25A8u;
    // 0x2a25a8: 0x26f2c9a8  addiu       $s2, $s7, -0x3658
    ctx->pc = 0x2a25a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953384));
    // 0x2a25ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2a25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2a25b0: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x2a25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a25b4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A25B4u;
    SET_GPR_U32(ctx, 31, 0x2A25BCu);
    ctx->pc = 0x2A25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25B4u;
    // 0x2a25b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A25B4u, 0x2A25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25BCu;
label_2a25bc:
    // 0x2a25bc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2a25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a25c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a25c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a25c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a25cc: 0x1483ffe8  bne         $a0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2A25CCu;
    {
        const bool branch_taken_0x2a25cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a25cc) {
            ctx->pc = 0x2A2570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2570;
        }
    }
    ctx->pc = 0x2A25D4u;
    // 0x2a25d4: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x2a25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2a25d8:
    // 0x2a25d8: 0x1223000d  beq         $s1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A25D8u;
    {
        const bool branch_taken_0x2a25d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25D8u;
        // 0x2a25dc: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25d8) {
            ctx->pc = 0x2A2610u;
            goto label_2a2610;
        }
    }
    ctx->pc = 0x2A25E0u;
    // 0x2a25e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a25e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a25e4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a25e8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a25e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a25ec: 0x8d29cc68  lw          $t1, -0x3398($t1)
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954088)));
label_2a25f0:
    // 0x2a25f0: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a25f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a25f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a25f8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a25fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a25fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2600: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2600u;
    SET_GPR_U32(ctx, 31, 0x2A2608u);
    ctx->pc = 0x2A2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2600u;
    // 0x2a2604: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2600u, 0x2A2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2608u;
label_2a2608:
    // 0x2a2608: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2608u;
    {
        const bool branch_taken_0x2a2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2608u;
        // 0x2a260c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2608) {
            ctx->pc = 0x2A2640u;
            goto label_2a2640;
        }
    }
    ctx->pc = 0x2A2610u;
label_2a2610:
    // 0x2a2610: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2a2610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2a2614: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a2618: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a2618u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a261c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a261cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a2620: 0x8d29cc58  lw          $t1, -0x33A8($t1)
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954072)));
    // 0x2a2624: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a2624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a2628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a262c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2634: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2634u;
    SET_GPR_U32(ctx, 31, 0x2A263Cu);
    ctx->pc = 0x2A2638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2634u;
    // 0x2a2638: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2634u, 0x2A263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A263Cu;
label_2a263c:
    // 0x2a263c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2a263cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2a2640:
    // 0x2a2640: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x2a2640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2644: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x2A2644u;
    {
        const bool branch_taken_0x2a2644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2644u;
        // 0x2a2648: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2644) {
            ctx->pc = 0x2A2418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2418;
        }
    }
    ctx->pc = 0x2A264Cu;
    // 0x2a264c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a264cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2650: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a2650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a2654: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a2654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2658: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a2658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a265c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a265cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2660: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a2660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2664: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a2664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2668: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a2668u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a266c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a266cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a2670: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a2674: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2674u;
        // 0x2a2678: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A267Cu;
    // 0x2a267c: 0x0  nop
    ctx->pc = 0x2a267cu;
    // NOP
    // 0x2a2680: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2688u;
}
