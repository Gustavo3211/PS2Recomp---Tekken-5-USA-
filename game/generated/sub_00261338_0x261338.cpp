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

// Function: sub_00261338
// Address: 0x261338 - 0x261438
void sub_00261338_0x261338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261338_0x261338");
#endif

    switch (ctx->pc) {
        case 0x2613acu: goto label_2613ac;
        case 0x2613bcu: goto label_2613bc;
        case 0x2613d4u: goto label_2613d4;
        case 0x2613e4u: goto label_2613e4;
        case 0x261404u: goto label_261404;
        case 0x261410u: goto label_261410;
        default: break;
    }

    ctx->pc = 0x261338u;

    // 0x261338: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x261338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x26133c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x261340: 0xffb003e0  sd          $s0, 0x3E0($sp)
    ctx->pc = 0x261340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 16));
    // 0x261344: 0x245023b0  addiu       $s0, $v0, 0x23B0
    ctx->pc = 0x261344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x261348: 0xffb103e8  sd          $s1, 0x3E8($sp)
    ctx->pc = 0x261348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1000), GPR_U64(ctx, 17));
    // 0x26134c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x26134cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261350: 0xffb203f0  sd          $s2, 0x3F0($sp)
    ctx->pc = 0x261350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 18));
    // 0x261354: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x261354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261358: 0xffb303f8  sd          $s3, 0x3F8($sp)
    ctx->pc = 0x261358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 19));
    // 0x26135c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x26135cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261360: 0xffb40400  sd          $s4, 0x400($sp)
    ctx->pc = 0x261360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 20));
    // 0x261364: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x261364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261368: 0xffb50408  sd          $s5, 0x408($sp)
    ctx->pc = 0x261368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 21));
    // 0x26136c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26136cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261370: 0xffb60410  sd          $s6, 0x410($sp)
    ctx->pc = 0x261370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 22));
    // 0x261374: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x261374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261378: 0xffbf0418  sd          $ra, 0x418($sp)
    ctx->pc = 0x261378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 31));
    // 0x26137c: 0x26020058  addiu       $v0, $s0, 0x58
    ctx->pc = 0x26137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x261380: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x261380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261388: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x261388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x26138c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26138cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261390: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x261390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261394: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x261394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261398: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x261398u;
    {
        const bool branch_taken_0x261398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261398u;
        // 0x26139c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261398) {
            ctx->pc = 0x261410u;
            goto label_261410;
        }
    }
    ctx->pc = 0x2613A0u;
    // 0x2613a0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2613a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2613a4: 0xc0989ac  jal         func_2626B0
    ctx->pc = 0x2613A4u;
    SET_GPR_U32(ctx, 31, 0x2613ACu);
    ctx->pc = 0x2613A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613A4u;
    // 0x2613a8: 0x2484e7c0  addiu       $a0, $a0, -0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2626B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2626B0u, 0x2613A4u, 0x2613ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613ACu;
label_2613ac:
    // 0x2613ac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2613ACu;
    {
        const bool branch_taken_0x2613ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2613ac) {
            ctx->pc = 0x2613B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2613ACu;
            // 0x2613b0: 0xdfb003e0  ld          $s0, 0x3E0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261414u;
            goto label_261414;
        }
    }
    ctx->pc = 0x2613B4u;
    // 0x2613b4: 0xc098000  jal         func_260000
    ctx->pc = 0x2613B4u;
    SET_GPR_U32(ctx, 31, 0x2613BCu);
    ctx->pc = 0x2613B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613B4u;
    // 0x2613b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260000u, 0x2613B4u, 0x2613BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613BCu;
label_2613bc:
    // 0x2613bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2613c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2613c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613c4: 0x240603e0  addiu       $a2, $zero, 0x3E0
    ctx->pc = 0x2613c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    // 0x2613c8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2613cc: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x2613CCu;
    SET_GPR_U32(ctx, 31, 0x2613D4u);
    ctx->pc = 0x2613D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613CCu;
    // 0x2613d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x2613CCu, 0x2613D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613D4u;
label_2613d4:
    // 0x2613d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2613d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2613d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613dc: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x2613DCu;
    SET_GPR_U32(ctx, 31, 0x2613E4u);
    ctx->pc = 0x2613E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613DCu;
    // 0x2613e0: 0xafa003d0  sw          $zero, 0x3D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE60u, 0x2613DCu, 0x2613E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613E4u;
label_2613e4:
    // 0x2613e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2613e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2613e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2613ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2613f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613f4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2613f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613f8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2613f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613fc: 0xc0989ac  jal         func_2626B0
    ctx->pc = 0x2613FCu;
    SET_GPR_U32(ctx, 31, 0x261404u);
    ctx->pc = 0x261400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613FCu;
    // 0x261400: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2626B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2626B0u, 0x2613FCu, 0x261404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261404u;
label_261404:
    // 0x261404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261408: 0xc097f6e  jal         func_25FDB8
    ctx->pc = 0x261408u;
    SET_GPR_U32(ctx, 31, 0x261410u);
    ctx->pc = 0x26140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261408u;
    // 0x26140c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDB8u, 0x261408u, 0x261410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261410u;
label_261410:
    // 0x261410: 0xdfb003e0  ld          $s0, 0x3E0($sp)
    ctx->pc = 0x261410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 992)));
label_261414:
    // 0x261414: 0xdfb103e8  ld          $s1, 0x3E8($sp)
    ctx->pc = 0x261414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x261418: 0xdfb203f0  ld          $s2, 0x3F0($sp)
    ctx->pc = 0x261418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x26141c: 0xdfb303f8  ld          $s3, 0x3F8($sp)
    ctx->pc = 0x26141cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x261420: 0xdfb40400  ld          $s4, 0x400($sp)
    ctx->pc = 0x261420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x261424: 0xdfb50408  ld          $s5, 0x408($sp)
    ctx->pc = 0x261424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x261428: 0xdfb60410  ld          $s6, 0x410($sp)
    ctx->pc = 0x261428u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x26142c: 0xdfbf0418  ld          $ra, 0x418($sp)
    ctx->pc = 0x26142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x261430: 0x3e00008  jr          $ra
    ctx->pc = 0x261430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261430u;
        // 0x261434: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261438u;
}
