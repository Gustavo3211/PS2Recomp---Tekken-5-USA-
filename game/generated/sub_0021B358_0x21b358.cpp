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

// Function: sub_0021B358
// Address: 0x21b358 - 0x21b920
void sub_0021B358_0x21b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B358_0x21b358");
#endif

    switch (ctx->pc) {
        case 0x21b398u: goto label_21b398;
        case 0x21b3a8u: goto label_21b3a8;
        case 0x21b3c0u: goto label_21b3c0;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b3dcu: goto label_21b3dc;
        case 0x21b3e8u: goto label_21b3e8;
        case 0x21b428u: goto label_21b428;
        case 0x21b448u: goto label_21b448;
        case 0x21b464u: goto label_21b464;
        case 0x21b478u: goto label_21b478;
        case 0x21b4a4u: goto label_21b4a4;
        case 0x21b4acu: goto label_21b4ac;
        case 0x21b4f8u: goto label_21b4f8;
        case 0x21b51cu: goto label_21b51c;
        case 0x21b548u: goto label_21b548;
        case 0x21b590u: goto label_21b590;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b620u: goto label_21b620;
        case 0x21b648u: goto label_21b648;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b670u: goto label_21b670;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b708u: goto label_21b708;
        case 0x21b724u: goto label_21b724;
        case 0x21b730u: goto label_21b730;
        case 0x21b790u: goto label_21b790;
        case 0x21b7a8u: goto label_21b7a8;
        case 0x21b7c0u: goto label_21b7c0;
        case 0x21b808u: goto label_21b808;
        case 0x21b81cu: goto label_21b81c;
        case 0x21b858u: goto label_21b858;
        case 0x21b860u: goto label_21b860;
        case 0x21b884u: goto label_21b884;
        case 0x21b8a8u: goto label_21b8a8;
        case 0x21b8c0u: goto label_21b8c0;
        default: break;
    }

    ctx->pc = 0x21b358u;

    // 0x21b358: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x21b35c: 0xffb102a8  sd          $s1, 0x2A8($sp)
    ctx->pc = 0x21b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 17));
    // 0x21b360: 0xffb302b8  sd          $s3, 0x2B8($sp)
    ctx->pc = 0x21b360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 19));
    // 0x21b364: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x21b364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x21b368: 0xffb502c8  sd          $s5, 0x2C8($sp)
    ctx->pc = 0x21b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 21));
    // 0x21b36c: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x21b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x21b370: 0xffb702d8  sd          $s7, 0x2D8($sp)
    ctx->pc = 0x21b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 23));
    // 0x21b374: 0xffbf02e8  sd          $ra, 0x2E8($sp)
    ctx->pc = 0x21b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 31));
    // 0x21b378: 0xafa60290  sw          $a2, 0x290($sp)
    ctx->pc = 0x21b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 6));
    // 0x21b37c: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x21b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
    // 0x21b380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b384: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x21b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x21b388: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b38c: 0xffbe02e0  sd          $fp, 0x2E0($sp)
    ctx->pc = 0x21b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 30));
    // 0x21b390: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x21b390u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b394: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21b398:
    // 0x21b398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21b39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3a0: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B3A0u;
    SET_GPR_U32(ctx, 31, 0x21B3A8u);
    ctx->pc = 0x21B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3A0u;
    // 0x21b3a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B3A0u, 0x21B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3A8u;
label_21b3a8:
    // 0x21b3a8: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x21b3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x21b3ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B3ACu;
    {
        const bool branch_taken_0x21b3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3ACu;
        // 0x21b3b0: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3ac) {
            ctx->pc = 0x21B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b398;
        }
    }
    ctx->pc = 0x21B3B4u;
    // 0x21b3b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21b3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3b8: 0xc0867ba  jal         func_219EE8
    ctx->pc = 0x21B3B8u;
    SET_GPR_U32(ctx, 31, 0x21B3C0u);
    ctx->pc = 0x21B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3B8u;
    // 0x21b3bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EE8u, 0x21B3B8u, 0x21B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3C0u;
label_21b3c0:
    // 0x21b3c0: 0x93d1000a  lbu         $s1, 0xA($fp)
    ctx->pc = 0x21b3c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x21b3c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21B3C4u;
    {
        const bool branch_taken_0x21b3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3C4u;
        // 0x21b3c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3c4) {
            ctx->pc = 0x21B3F4u;
            goto label_21b3f4;
        }
    }
    ctx->pc = 0x21B3CCu;
    // 0x21b3cc: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x21b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_21b3d0:
    // 0x21b3d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21b3d4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21B3D4u;
    SET_GPR_U32(ctx, 31, 0x21B3DCu);
    ctx->pc = 0x21B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3D4u;
    // 0x21b3d8: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21B3D4u, 0x21B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3DCu;
label_21b3dc:
    // 0x21b3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3e0: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B3E0u;
    SET_GPR_U32(ctx, 31, 0x21B3E8u);
    ctx->pc = 0x21B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3E0u;
    // 0x21b3e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B3E0u, 0x21B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3E8u;
label_21b3e8:
    // 0x21b3e8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21b3ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B3ECu;
    {
        const bool branch_taken_0x21b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3ECu;
        // 0x21b3f0: 0x3d21021  addu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3ec) {
            ctx->pc = 0x21B3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b3d0;
        }
    }
    ctx->pc = 0x21B3F4u;
label_21b3f4:
    // 0x21b3f4: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x21B3F4u;
    {
        const bool branch_taken_0x21b3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3F4u;
        // 0x21b3f8: 0x27b60180  addiu       $s6, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3f4) {
            ctx->pc = 0x21B500u;
            goto label_21b500;
        }
    }
    ctx->pc = 0x21B3FCu;
    // 0x21b3fc: 0x93c2000c  lbu         $v0, 0xC($fp)
    ctx->pc = 0x21b3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x21b400: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x21b400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21b404: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x21B404u;
    {
        const bool branch_taken_0x21b404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b404) {
            ctx->pc = 0x21B408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B404u;
            // 0x21b408: 0x27a20100  addiu       $v0, $sp, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B504u;
            goto label_21b504;
        }
    }
    ctx->pc = 0x21B40Cu;
    // 0x21b40c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x21b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b410: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21b414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b418: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21b418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b41c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b420: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21B420u;
    SET_GPR_U32(ctx, 31, 0x21B428u);
    ctx->pc = 0x21B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B420u;
    // 0x21b424: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21B420u, 0x21B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B428u;
label_21b428:
    // 0x21b428: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b42c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x21b42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21b430: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21B430u;
    {
        const bool branch_taken_0x21b430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B430u;
        // 0x21b434: 0x27b60180  addiu       $s6, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b430) {
            ctx->pc = 0x21B500u;
            goto label_21b500;
        }
    }
    ctx->pc = 0x21B438u;
    // 0x21b438: 0x1a600015  blez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x21B438u;
    {
        const bool branch_taken_0x21b438 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x21B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B438u;
        // 0x21b43c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b438) {
            ctx->pc = 0x21B490u;
            goto label_21b490;
        }
    }
    ctx->pc = 0x21B440u;
    // 0x21b440: 0x27b40184  addiu       $s4, $sp, 0x184
    ctx->pc = 0x21b440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x21b444: 0x0  nop
    ctx->pc = 0x21b444u;
    // NOP
label_21b448:
    // 0x21b448: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x21b448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21b44c: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x21b44cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21b450: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x21b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x21b454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21b454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21b458: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b45c: 0xc086418  jal         func_219060
    ctx->pc = 0x21B45Cu;
    SET_GPR_U32(ctx, 31, 0x21B464u);
    ctx->pc = 0x21B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B45Cu;
    // 0x21b460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21B45Cu, 0x21B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B464u;
label_21b464:
    // 0x21b464: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x21b468: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21b468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21b46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b470: 0xc087692  jal         func_21DA48
    ctx->pc = 0x21B470u;
    SET_GPR_U32(ctx, 31, 0x21B478u);
    ctx->pc = 0x21B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B470u;
    // 0x21b474: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA48u, 0x21B470u, 0x21B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B478u;
label_21b478:
    // 0x21b478: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x21b478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b47c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x21B47Cu;
    {
        const bool branch_taken_0x21b47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B47Cu;
        // 0x21b480: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b47c) {
            ctx->pc = 0x21B448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b448;
        }
    }
    ctx->pc = 0x21B484u;
    // 0x21b484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B484u;
    {
        const bool branch_taken_0x21b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B484u;
        // 0x21b488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b484) {
            ctx->pc = 0x21B494u;
            goto label_21b494;
        }
    }
    ctx->pc = 0x21B48Cu;
    // 0x21b48c: 0x0  nop
    ctx->pc = 0x21b48cu;
    // NOP
label_21b490:
    // 0x21b490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b494:
    // 0x21b494: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b49c: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x21B49Cu;
    SET_GPR_U32(ctx, 31, 0x21B4A4u);
    ctx->pc = 0x21B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B49Cu;
    // 0x21b4a0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x21B49Cu, 0x21B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4A4u;
label_21b4a4:
    // 0x21b4a4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B4A4u;
    SET_GPR_U32(ctx, 31, 0x21B4ACu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B4A4u, 0x21B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4ACu;
label_21b4ac:
    // 0x21b4ac: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x21b4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x21b4b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4b4: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x21b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x21b4b8: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x21b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21b4bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x21b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b4c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b4c8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x21b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b4cc: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x21b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x21b4d0: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x21b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x21b4d4: 0xacc40064  sw          $a0, 0x64($a2)
    ctx->pc = 0x21b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 4));
    // 0x21b4d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21b4dc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x21b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x21b4e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b4e4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21b4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b4f0: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B4F0u;
    SET_GPR_U32(ctx, 31, 0x21B4F8u);
    ctx->pc = 0x21B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B4F0u;
    // 0x21b4f4: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B4F0u, 0x21B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4F8u;
label_21b4f8:
    // 0x21b4f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B4F8u;
    {
        const bool branch_taken_0x21b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4F8u;
        // 0x21b4fc: 0x27a20100  addiu       $v0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4f8) {
            ctx->pc = 0x21B504u;
            goto label_21b504;
        }
    }
    ctx->pc = 0x21B500u;
label_21b500:
    // 0x21b500: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x21b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_21b504:
    // 0x21b504: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21b504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21b508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b50c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21b50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b514: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21B514u;
    SET_GPR_U32(ctx, 31, 0x21B51Cu);
    ctx->pc = 0x21B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B514u;
    // 0x21b518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21B514u, 0x21B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B51Cu;
label_21b51c:
    // 0x21b51c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b520: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B520u;
    {
        const bool branch_taken_0x21b520 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x21B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B520u;
        // 0x21b524: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b520) {
            ctx->pc = 0x21B584u;
            goto label_21b584;
        }
    }
    ctx->pc = 0x21B528u;
    // 0x21b528: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21b528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21b52c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b530: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x21b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x21b534: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x21b534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b538: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x21b538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b53c: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x21b540: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x21b540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x21b544: 0x0  nop
    ctx->pc = 0x21b544u;
    // NOP
label_21b548:
    // 0x21b548: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x21b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21b54c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21b550: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x21b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21b554: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x21b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21b558: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b55c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21b55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21b560: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x21b560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21b564: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x21b564u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b568: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21b568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21b56c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21b570: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21b574: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x21b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x21b578: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x21B578u;
    {
        const bool branch_taken_0x21b578 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B578u;
        // 0x21b57c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b578) {
            ctx->pc = 0x21B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b548;
        }
    }
    ctx->pc = 0x21B580u;
    // 0x21b580: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21b584:
    // 0x21b584: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b588: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x21B588u;
    SET_GPR_U32(ctx, 31, 0x21B590u);
    ctx->pc = 0x21B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B588u;
    // 0x21b58c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x21B588u, 0x21B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B590u;
label_21b590:
    // 0x21b590: 0x93c3000c  lbu         $v1, 0xC($fp)
    ctx->pc = 0x21b590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x21b594: 0x93c2000a  lbu         $v0, 0xA($fp)
    ctx->pc = 0x21b594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x21b598: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b59c: 0x2348023  subu        $s0, $s1, $s4
    ctx->pc = 0x21b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x21b5a0: 0x5a000023  blezl       $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21B5A0u;
    {
        const bool branch_taken_0x21b5a0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x21b5a0) {
            ctx->pc = 0x21B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B5A0u;
            // 0x21b5a4: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B630u;
            goto label_21b630;
        }
    }
    ctx->pc = 0x21B5A8u;
    // 0x21b5a8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x21b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x21b5ac: 0x27a70184  addiu       $a3, $sp, 0x184
    ctx->pc = 0x21b5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x21b5b0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21b5b4: 0x213282a  slt         $a1, $s0, $s3
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b5b8: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x21b5bc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B5BCu;
    {
        const bool branch_taken_0x21b5bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5BCu;
        // 0x21b5c0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5bc) {
            ctx->pc = 0x21B62Cu;
            goto label_21b62c;
        }
    }
    ctx->pc = 0x21B5C4u;
    // 0x21b5c4: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x21b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21b5c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b5cc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x21b5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21b5d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B5D0u;
    {
        const bool branch_taken_0x21b5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b5d0) {
            ctx->pc = 0x21B604u;
            goto label_21b604;
        }
    }
    ctx->pc = 0x21B5D8u;
    // 0x21b5d8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b5e0:
    // 0x21b5e0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x21b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x21b5e4: 0x213282a  slt         $a1, $s0, $s3
    ctx->pc = 0x21b5e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b5e8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21B5E8u;
    {
        const bool branch_taken_0x21b5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5E8u;
        // 0x21b5ec: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5e8) {
            ctx->pc = 0x21B62Cu;
            goto label_21b62c;
        }
    }
    ctx->pc = 0x21B5F0u;
    // 0x21b5f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b5f4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x21b5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21b5f8: 0x0  nop
    ctx->pc = 0x21b5f8u;
    // NOP
    // 0x21b5fc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B5FCu;
    {
        const bool branch_taken_0x21b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5fc) {
            ctx->pc = 0x21B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B5FCu;
            // 0x21b600: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b5e0;
        }
    }
    ctx->pc = 0x21B604u;
label_21b604:
    // 0x21b604: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21B604u;
    {
        const bool branch_taken_0x21b604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b604) {
            ctx->pc = 0x21B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B604u;
            // 0x21b608: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B630u;
            goto label_21b630;
        }
    }
    ctx->pc = 0x21B60Cu;
label_21b60c:
    // 0x21b60c: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x21b610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b614: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b618: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B618u;
    SET_GPR_U32(ctx, 31, 0x21B620u);
    ctx->pc = 0x21B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B618u;
    // 0x21b61c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B618u, 0x21B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B620u;
label_21b620:
    // 0x21b620: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x21b620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b624: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21B624u;
    {
        const bool branch_taken_0x21b624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B624u;
        // 0x21b628: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b624) {
            ctx->pc = 0x21B60Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b60c;
        }
    }
    ctx->pc = 0x21B62Cu;
label_21b62c:
    // 0x21b62c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x21b62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21b630:
    // 0x21b630: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x21b630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21b634: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x21B634u;
    {
        const bool branch_taken_0x21b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B634u;
        // 0x21b638: 0x8fa40290  lw          $a0, 0x290($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b634) {
            ctx->pc = 0x21B6E0u;
            goto label_21b6e0;
        }
    }
    ctx->pc = 0x21B63Cu;
    // 0x21b63c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21b640: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21b644: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_21b648:
    // 0x21b648: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21b64c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b654: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21B654u;
    SET_GPR_U32(ctx, 31, 0x21B65Cu);
    ctx->pc = 0x21B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B654u;
    // 0x21b658: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21B654u, 0x21B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B65Cu;
label_21b65c:
    // 0x21b65c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b660: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x21B660u;
    {
        const bool branch_taken_0x21b660 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B660u;
        // 0x21b664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b660) {
            ctx->pc = 0x21B6A0u;
            goto label_21b6a0;
        }
    }
    ctx->pc = 0x21B668u;
    // 0x21b668: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B668u;
    SET_GPR_U32(ctx, 31, 0x21B670u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B668u, 0x21B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B670u;
label_21b670:
    // 0x21b670: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x21b674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21b678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b67c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21b680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b684: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b688: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21b68c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x21b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x21b690: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21b690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21b694: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21b694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b698: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21b698u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21b69c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21b69cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21b6a0:
    // 0x21b6a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b6a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b6a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b6ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x21b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b6b4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x21b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b6b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21b6bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21b6c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21b6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b6c8: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B6C8u;
    SET_GPR_U32(ctx, 31, 0x21B6D0u);
    ctx->pc = 0x21B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C8u;
    // 0x21b6cc: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B6C8u, 0x21B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6D0u;
label_21b6d0:
    // 0x21b6d0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x21b6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21b6d4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21B6D4u;
    {
        const bool branch_taken_0x21b6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6D4u;
        // 0x21b6d8: 0x27a20100  addiu       $v0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6d4) {
            ctx->pc = 0x21B648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b648;
        }
    }
    ctx->pc = 0x21B6DCu;
    // 0x21b6dc: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_21b6e0:
    // 0x21b6e0: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x21b6e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21b6e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6e8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x21b6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b6ec: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x21B6ECu;
    {
        const bool branch_taken_0x21b6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6ECu;
        // 0x21b6f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6ec) {
            ctx->pc = 0x21B760u;
            goto label_21b760;
        }
    }
    ctx->pc = 0x21B6F4u;
    // 0x21b6f4: 0x27b50280  addiu       $s5, $sp, 0x280
    ctx->pc = 0x21b6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x21b6f8: 0x27b40281  addiu       $s4, $sp, 0x281
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 641));
    // 0x21b6fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21b6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b700: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x21b704: 0x0  nop
    ctx->pc = 0x21b704u;
    // NOP
label_21b708:
    // 0x21b708: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x21b70c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21b70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21b710: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x21b710u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b714: 0x1216000f  beq         $s0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x21B714u;
    {
        const bool branch_taken_0x21b714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x21B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B714u;
        // 0x21b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b714) {
            ctx->pc = 0x21B754u;
            goto label_21b754;
        }
    }
    ctx->pc = 0x21B71Cu;
    // 0x21b71c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21B71Cu;
    SET_GPR_U32(ctx, 31, 0x21B724u);
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21B71Cu, 0x21B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B724u;
label_21b724:
    // 0x21b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b728: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x21B728u;
    SET_GPR_U32(ctx, 31, 0x21B730u);
    ctx->pc = 0x21B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B728u;
    // 0x21b72c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x21B728u, 0x21B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x171840  sll         $v1, $s7, 1
    ctx->pc = 0x21b730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x21b734: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x21b734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x21b738: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x21b738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21b73c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x21b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x21b740: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x21b744: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x21b744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x21b748: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x21b748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21b74c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x21b750: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x21b750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21b754:
    // 0x21b754: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x21b754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21b758: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21B758u;
    {
        const bool branch_taken_0x21b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B758u;
        // 0x21b75c: 0x8fa40290  lw          $a0, 0x290($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b758) {
            ctx->pc = 0x21B708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B760u;
label_21b760:
    // 0x21b760: 0x93d4000a  lbu         $s4, 0xA($fp)
    ctx->pc = 0x21b760u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x21b764: 0x93c2000c  lbu         $v0, 0xC($fp)
    ctx->pc = 0x21b764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x21b768: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x21b768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b76c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x21B76Cu;
    {
        const bool branch_taken_0x21b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B76Cu;
        // 0x21b770: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b76c) {
            ctx->pc = 0x21B8F4u;
            goto label_21b8f4;
        }
    }
    ctx->pc = 0x21B774u;
    // 0x21b774: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21b774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21b778: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21b77c: 0x246383c0  addiu       $v1, $v1, -0x7C40
    ctx->pc = 0x21b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x21b780: 0x24568858  addiu       $s6, $v0, -0x77A8
    ctx->pc = 0x21b780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21b784: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x21b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x21b788: 0xafa30294  sw          $v1, 0x294($sp)
    ctx->pc = 0x21b788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 3));
    // 0x21b78c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x21b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21b790:
    // 0x21b790: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b794: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21b798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21b798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b79c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21b79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7a0: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21B7A0u;
    SET_GPR_U32(ctx, 31, 0x21B7A8u);
    ctx->pc = 0x21B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7A0u;
    // 0x21b7a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21B7A0u, 0x21B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7A8u;
label_21b7a8:
    // 0x21b7a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21b7a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7b0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x21B7B0u;
    {
        const bool branch_taken_0x21b7b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7B0u;
        // 0x21b7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7b0) {
            ctx->pc = 0x21B7F0u;
            goto label_21b7f0;
        }
    }
    ctx->pc = 0x21B7B8u;
    // 0x21b7b8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B7B8u;
    SET_GPR_U32(ctx, 31, 0x21B7C0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B7B8u, 0x21B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7C0u;
label_21b7c0:
    // 0x21b7c0: 0x8ec40064  lw          $a0, 0x64($s6)
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x21b7c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b7c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b7cc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21b7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21b7d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b7d4: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b7d8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21b7dc: 0xaec30064  sw          $v1, 0x64($s6)
    ctx->pc = 0x21b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 3));
    // 0x21b7e0: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21b7e4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21b7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b7e8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21b7e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21b7ec: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21b7ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21b7f0:
    // 0x21b7f0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b7f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b7f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21b7fc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b800: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x21B800u;
    SET_GPR_U32(ctx, 31, 0x21B808u);
    ctx->pc = 0x21B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B800u;
    // 0x21b804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x21B800u, 0x21B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B808u;
label_21b808:
    // 0x21b808: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b80c: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x21B80Cu;
    {
        const bool branch_taken_0x21b80c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B80Cu;
        // 0x21b810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b80c) {
            ctx->pc = 0x21B84Cu;
            goto label_21b84c;
        }
    }
    ctx->pc = 0x21B814u;
    // 0x21b814: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B814u;
    SET_GPR_U32(ctx, 31, 0x21B81Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B814u, 0x21B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B81Cu;
label_21b81c:
    // 0x21b81c: 0x8ec40064  lw          $a0, 0x64($s6)
    ctx->pc = 0x21b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x21b820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b824: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b828: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21b82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b830: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b834: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21b838: 0xaec30064  sw          $v1, 0x64($s6)
    ctx->pc = 0x21b838u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 3));
    // 0x21b83c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21b840: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21b840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b844: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21b844u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21b848: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21b84c:
    // 0x21b84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B850u;
    {
        const bool branch_taken_0x21b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B850u;
        // 0x21b854: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b850) {
            ctx->pc = 0x21B864u;
            goto label_21b864;
        }
    }
    ctx->pc = 0x21B858u;
label_21b858:
    // 0x21b858: 0xc09358e  jal         func_24D638
    ctx->pc = 0x21B858u;
    SET_GPR_U32(ctx, 31, 0x21B860u);
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x21B858u, 0x21B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B860u;
label_21b860:
    // 0x21b860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b864:
    // 0x21b864: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x21b864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B868u;
    {
        const bool branch_taken_0x21b868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B868u;
        // 0x21b86c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b868) {
            ctx->pc = 0x21B898u;
            goto label_21b898;
        }
    }
    ctx->pc = 0x21B870u;
    // 0x21b870: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x21b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x21b874: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21b874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b878: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21b878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b87c: 0xc08693a  jal         func_21A4E8
    ctx->pc = 0x21B87Cu;
    SET_GPR_U32(ctx, 31, 0x21B884u);
    ctx->pc = 0x21B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B87Cu;
    // 0x21b880: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A4E8u, 0x21B87Cu, 0x21B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B884u;
label_21b884:
    // 0x21b884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b888: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21b888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b88c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b890: 0x12a0fff1  beqz        $s5, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B890u;
    {
        const bool branch_taken_0x21b890 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B890u;
        // 0x21b894: 0x2666ffff  addiu       $a2, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b890) {
            ctx->pc = 0x21B858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b858;
        }
    }
    ctx->pc = 0x21B898u;
label_21b898:
    // 0x21b898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8a0: 0xc086396  jal         func_218E58
    ctx->pc = 0x21B8A0u;
    SET_GPR_U32(ctx, 31, 0x21B8A8u);
    ctx->pc = 0x21B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8A0u;
    // 0x21b8a4: 0x215280b  movn        $a1, $s0, $s5 (Delay Slot)
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21B8A0u, 0x21B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8A8u;
label_21b8a8:
    // 0x21b8a8: 0x3d41821  addu        $v1, $fp, $s4
    ctx->pc = 0x21b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x21b8ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21b8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21b8b0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x21b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8b8: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B8B8u;
    SET_GPR_U32(ctx, 31, 0x21B8C0u);
    ctx->pc = 0x21B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8B8u;
    // 0x21b8bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B8B8u, 0x21B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8C0u;
label_21b8c0:
    // 0x21b8c0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21b8c4: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x21b8c8: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x21b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x21b8cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21b8d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b8d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b8dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21b8e0: 0x93c3000c  lbu         $v1, 0xC($fp)
    ctx->pc = 0x21b8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x21b8e4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x21b8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21b8e8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x21B8E8u;
    {
        const bool branch_taken_0x21b8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E8u;
        // 0x21b8ec: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8e8) {
            ctx->pc = 0x21B790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b790;
        }
    }
    ctx->pc = 0x21B8F0u;
    // 0x21b8f0: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x21b8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_21b8f4:
    // 0x21b8f4: 0xdfb102a8  ld          $s1, 0x2A8($sp)
    ctx->pc = 0x21b8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x21b8f8: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x21b8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x21b8fc: 0xdfb302b8  ld          $s3, 0x2B8($sp)
    ctx->pc = 0x21b8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x21b900: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x21b900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x21b904: 0xdfb502c8  ld          $s5, 0x2C8($sp)
    ctx->pc = 0x21b904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x21b908: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x21b908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x21b90c: 0xdfb702d8  ld          $s7, 0x2D8($sp)
    ctx->pc = 0x21b90cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x21b910: 0xdfbe02e0  ld          $fp, 0x2E0($sp)
    ctx->pc = 0x21b910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x21b914: 0xdfbf02e8  ld          $ra, 0x2E8($sp)
    ctx->pc = 0x21b914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x21b918: 0x3e00008  jr          $ra
    ctx->pc = 0x21B918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B918u;
        // 0x21b91c: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B920u;
}
