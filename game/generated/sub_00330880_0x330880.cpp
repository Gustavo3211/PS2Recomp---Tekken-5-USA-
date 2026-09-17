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

// Function: sub_00330880
// Address: 0x330880 - 0x330970
void sub_00330880_0x330880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330880_0x330880");
#endif

    switch (ctx->pc) {
        case 0x3308b4u: goto label_3308b4;
        case 0x3308ccu: goto label_3308cc;
        case 0x3308e4u: goto label_3308e4;
        case 0x330900u: goto label_330900;
        case 0x33090cu: goto label_33090c;
        case 0x330918u: goto label_330918;
        case 0x330960u: goto label_330960;
        default: break;
    }

    ctx->pc = 0x330880u;

    // 0x330880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x330884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x330888: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x330888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33088c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330890: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330894: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x330894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x330898: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x330898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33089c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3308a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3308a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3308a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3308a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3308a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3308a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3308ac: 0xc0c8338  jal         func_320CE0
    ctx->pc = 0x3308ACu;
    SET_GPR_U32(ctx, 31, 0x3308B4u);
    ctx->pc = 0x3308B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308ACu;
    // 0x3308b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CE0u, 0x3308ACu, 0x3308B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308B4u;
label_3308b4:
    // 0x3308b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3308b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3308b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3308bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3308c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308c4: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x3308C4u;
    SET_GPR_U32(ctx, 31, 0x3308CCu);
    ctx->pc = 0x3308C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308C4u;
    // 0x3308c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x3308C4u, 0x3308CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308CCu;
label_3308cc:
    // 0x3308cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3308ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308d0: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3308D0u;
    {
        const bool branch_taken_0x3308d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3308D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308D0u;
        // 0x3308d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308d0) {
            ctx->pc = 0x33092Cu;
            goto label_33092c;
        }
    }
    ctx->pc = 0x3308D8u;
    // 0x3308d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3308d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308dc: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x3308DCu;
    SET_GPR_U32(ctx, 31, 0x3308E4u);
    ctx->pc = 0x3308E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308DCu;
    // 0x3308e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x3308DCu, 0x3308E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308E4u;
label_3308e4:
    // 0x3308e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3308e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3308e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3308e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308ec: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3308ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3308f0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3308F0u;
    {
        const bool branch_taken_0x3308f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3308f0) {
            ctx->pc = 0x3308F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3308F0u;
            // 0x3308f4: 0xaeb20004  sw          $s2, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330928u;
            goto label_330928;
        }
    }
    ctx->pc = 0x3308F8u;
    // 0x3308f8: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x3308f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3308fc: 0x0  nop
    ctx->pc = 0x3308fcu;
    // NOP
label_330900:
    // 0x330900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x330900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x330904: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x330904u;
    SET_GPR_U32(ctx, 31, 0x33090Cu);
    ctx->pc = 0x330908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330904u;
    // 0x330908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x330904u, 0x33090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33090Cu;
label_33090c:
    // 0x33090c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33090cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330910: 0xc0c82f4  jal         func_320BD0
    ctx->pc = 0x330910u;
    SET_GPR_U32(ctx, 31, 0x330918u);
    ctx->pc = 0x330914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330910u;
    // 0x330914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320BD0u, 0x330910u, 0x330918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330918u;
label_330918:
    // 0x330918: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x330918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33091c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33091Cu;
    {
        const bool branch_taken_0x33091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33091Cu;
        // 0x330920: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33091c) {
            ctx->pc = 0x330900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330900;
        }
    }
    ctx->pc = 0x330924u;
    // 0x330924: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x330924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
label_330928:
    // 0x330928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33092c:
    // 0x33092c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33092cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x330934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330938: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x330938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33093c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33093cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330940: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x330940u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x330944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x330944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330948: 0x3e00008  jr          $ra
    ctx->pc = 0x330948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330948u;
        // 0x33094c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330950u;
    // 0x330950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330958: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x330958u;
    SET_GPR_U32(ctx, 31, 0x330960u);
    ctx->pc = 0x33095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330958u;
    // 0x33095c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x330958u, 0x330960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330960u;
label_330960:
    // 0x330960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330968: 0x3e00008  jr          $ra
    ctx->pc = 0x330968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330968u;
        // 0x33096c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330970u;
}
