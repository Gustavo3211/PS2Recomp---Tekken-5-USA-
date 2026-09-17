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

// Function: sub_002DE310
// Address: 0x2de310 - 0x2de3d0
void sub_002DE310_0x2de310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE310_0x2de310");
#endif

    switch (ctx->pc) {
        case 0x2de334u: goto label_2de334;
        case 0x2de344u: goto label_2de344;
        case 0x2de370u: goto label_2de370;
        case 0x2de3a8u: goto label_2de3a8;
        default: break;
    }

    ctx->pc = 0x2de310u;

    // 0x2de310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2de320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de328: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2de328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2de32c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2DE32Cu;
    SET_GPR_U32(ctx, 31, 0x2DE334u);
    ctx->pc = 0x2DE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE32Cu;
    // 0x2de330: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2DE32Cu, 0x2DE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE334u;
label_2de334:
    // 0x2de334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de338: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2de338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de33c: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2DE33Cu;
    SET_GPR_U32(ctx, 31, 0x2DE344u);
    ctx->pc = 0x2DE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE33Cu;
    // 0x2de340: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2DE33Cu, 0x2DE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE344u;
label_2de344:
    // 0x2de344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de348: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE348u;
    {
        const bool branch_taken_0x2de348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE348u;
        // 0x2de34c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de348) {
            ctx->pc = 0x2DE368u;
            goto label_2de368;
        }
    }
    ctx->pc = 0x2DE350u;
    // 0x2de350: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2de350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2de354: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DE354u;
    {
        const bool branch_taken_0x2de354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de354) {
            ctx->pc = 0x2DE358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE354u;
            // 0x2de358: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE35Cu;
            goto label_2de35c;
        }
    }
    ctx->pc = 0x2DE35Cu;
label_2de35c:
    // 0x2de35c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE35Cu;
    {
        const bool branch_taken_0x2de35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE35Cu;
        // 0x2de360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de35c) {
            ctx->pc = 0x2DE3B4u;
            goto label_2de3b4;
        }
    }
    ctx->pc = 0x2DE364u;
    // 0x2de364: 0x0  nop
    ctx->pc = 0x2de364u;
    // NOP
label_2de368:
    // 0x2de368: 0xc04a520  jal         func_129480
    ctx->pc = 0x2DE368u;
    SET_GPR_U32(ctx, 31, 0x2DE370u);
    ctx->pc = 0x2DE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE368u;
    // 0x2de36c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x2DE368u, 0x2DE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE370u;
label_2de370:
    // 0x2de370: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x2de370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2de374: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DE374u;
    {
        const bool branch_taken_0x2de374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE374u;
        // 0x2de378: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de374) {
            ctx->pc = 0x2DE3B0u;
            goto label_2de3b0;
        }
    }
    ctx->pc = 0x2DE37Cu;
    // 0x2de37c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2de37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2de380: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DE380u;
    {
        const bool branch_taken_0x2de380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE380u;
        // 0x2de384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de380) {
            ctx->pc = 0x2DE3B4u;
            goto label_2de3b4;
        }
    }
    ctx->pc = 0x2DE388u;
    // 0x2de388: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2de388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2de38c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE38Cu;
    {
        const bool branch_taken_0x2de38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE38Cu;
        // 0x2de390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de38c) {
            ctx->pc = 0x2DE3B4u;
            goto label_2de3b4;
        }
    }
    ctx->pc = 0x2DE394u;
    // 0x2de394: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2de394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2de398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de39c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2de39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2de3a0: 0xc0b7940  jal         func_2DE500
    ctx->pc = 0x2DE3A0u;
    SET_GPR_U32(ctx, 31, 0x2DE3A8u);
    ctx->pc = 0x2DE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE3A0u;
    // 0x2de3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE500u, 0x2DE3A0u, 0x2DE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3A8u;
label_2de3a8:
    // 0x2de3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE3A8u;
    {
        const bool branch_taken_0x2de3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3A8u;
        // 0x2de3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3a8) {
            ctx->pc = 0x2DE3B4u;
            goto label_2de3b4;
        }
    }
    ctx->pc = 0x2DE3B0u;
label_2de3b0:
    // 0x2de3b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de3b4:
    // 0x2de3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de3b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de3c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2de3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3C4u;
        // 0x2de3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE3CCu;
    // 0x2de3cc: 0x0  nop
    ctx->pc = 0x2de3ccu;
    // NOP
    ctx->pc = 0x2de3d0u;
}
