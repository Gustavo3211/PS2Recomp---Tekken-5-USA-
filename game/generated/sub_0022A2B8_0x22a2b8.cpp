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

// Function: sub_0022A2B8
// Address: 0x22a2b8 - 0x22a370
void sub_0022A2B8_0x22a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A2B8_0x22a2b8");
#endif

    switch (ctx->pc) {
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a300u: goto label_22a300;
        case 0x22a308u: goto label_22a308;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a344u: goto label_22a344;
        case 0x22a358u: goto label_22a358;
        default: break;
    }

    ctx->pc = 0x22a2b8u;

    // 0x22a2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a2c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22a2cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22a2d0: 0xc09d4e2  jal         func_275388
    ctx->pc = 0x22A2D0u;
    SET_GPR_U32(ctx, 31, 0x22A2D8u);
    ctx->pc = 0x22A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2D0u;
    // 0x22a2d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275388u, 0x22A2D0u, 0x22A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2D8u;
label_22a2d8:
    // 0x22a2d8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x22A2D8u;
    SET_GPR_U32(ctx, 31, 0x22A2E0u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x22A2D8u, 0x22A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2E0u;
label_22a2e0:
    // 0x22a2e0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x22A2E0u;
    SET_GPR_U32(ctx, 31, 0x22A2E8u);
    ctx->pc = 0x22A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2E0u;
    // 0x22a2e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x22A2E0u, 0x22A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2E8u;
label_22a2e8:
    // 0x22a2e8: 0xc096d72  jal         func_25B5C8
    ctx->pc = 0x22A2E8u;
    SET_GPR_U32(ctx, 31, 0x22A2F0u);
    ctx->pc = 0x22A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2E8u;
    // 0x22a2ec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5C8u, 0x22A2E8u, 0x22A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2F0u;
label_22a2f0:
    // 0x22a2f0: 0xc0b0e66  jal         func_2C3998
    ctx->pc = 0x22A2F0u;
    SET_GPR_U32(ctx, 31, 0x22A2F8u);
    ctx->pc = 0x2C3998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3998u, 0x22A2F0u, 0x22A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2F8u;
label_22a2f8:
    // 0x22a2f8: 0xc0b3c8c  jal         func_2CF230
    ctx->pc = 0x22A2F8u;
    SET_GPR_U32(ctx, 31, 0x22A300u);
    ctx->pc = 0x2CF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF230u, 0x22A2F8u, 0x22A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x22A300u;
    SET_GPR_U32(ctx, 31, 0x22A308u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x22A300u, 0x22A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A308u;
label_22a308:
    // 0x22a308: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A308u;
    {
        const bool branch_taken_0x22a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A308u;
        // 0x22a30c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a308) {
            ctx->pc = 0x22A330u;
            goto label_22a330;
        }
    }
    ctx->pc = 0x22A310u;
    // 0x22a310: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22a314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a318: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x22a31c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22a320: 0x8e3188d0  lw          $s1, -0x7730($s1)
    ctx->pc = 0x22a320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936784)));
    // 0x22a324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A324u;
    {
        const bool branch_taken_0x22a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a324) {
            ctx->pc = 0x22A334u;
            goto label_22a334;
        }
    }
    ctx->pc = 0x22A32Cu;
    // 0x22a32c: 0x0  nop
    ctx->pc = 0x22a32cu;
    // NOP
label_22a330:
    // 0x22a330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a334:
    // 0x22a334: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x22A334u;
    SET_GPR_U32(ctx, 31, 0x22A33Cu);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x22A334u, 0x22A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A33Cu;
label_22a33c:
    // 0x22a33c: 0xc0404da  jal         func_101368
    ctx->pc = 0x22A33Cu;
    SET_GPR_U32(ctx, 31, 0x22A344u);
    ctx->pc = 0x22A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A33Cu;
    // 0x22a340: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101368u, 0x22A33Cu, 0x22A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A344u;
label_22a344:
    // 0x22a344: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22a344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a34c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a350: 0xc09d51c  jal         func_275470
    ctx->pc = 0x22A350u;
    SET_GPR_U32(ctx, 31, 0x22A358u);
    ctx->pc = 0x22A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A350u;
    // 0x22a354: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275470u, 0x22A350u, 0x22A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A358u;
label_22a358:
    // 0x22a358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a364: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a368: 0x3e00008  jr          $ra
    ctx->pc = 0x22A368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A368u;
        // 0x22a36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A370u;
}
