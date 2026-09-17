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

// Function: sub_002FBD70
// Address: 0x2fbd70 - 0x2fbe18
void sub_002FBD70_0x2fbd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBD70_0x2fbd70");
#endif

    switch (ctx->pc) {
        case 0x2fbdb0u: goto label_2fbdb0;
        case 0x2fbdbcu: goto label_2fbdbc;
        default: break;
    }

    ctx->pc = 0x2fbd70u;

    // 0x2fbd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fbd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fbd7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fbd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbd84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbd8c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FBD8Cu;
    {
        const bool branch_taken_0x2fbd8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD8Cu;
        // 0x2fbd90: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd8c) {
            ctx->pc = 0x2FBE00u;
            goto label_2fbe00;
        }
    }
    ctx->pc = 0x2FBD94u;
    // 0x2fbd94: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2fbd98: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBD98u;
    {
        const bool branch_taken_0x2fbd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD98u;
        // 0x2fbd9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd98) {
            ctx->pc = 0x2FBE04u;
            goto label_2fbe04;
        }
    }
    ctx->pc = 0x2FBDA0u;
    // 0x2fbda0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbda0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbda4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FBDA4u;
    {
        const bool branch_taken_0x2fbda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDA4u;
        // 0x2fbda8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbda4) {
            ctx->pc = 0x2FBDFCu;
            goto label_2fbdfc;
        }
    }
    ctx->pc = 0x2FBDACu;
    // 0x2fbdac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbdb0:
    // 0x2fbdb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fbdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbdb4: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x2FBDB4u;
    SET_GPR_U32(ctx, 31, 0x2FBDBCu);
    ctx->pc = 0x2FBDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDB4u;
    // 0x2fbdb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x2FBDB4u, 0x2FBDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDBCu;
label_2fbdbc:
    // 0x2fbdbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fbdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdc0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2fbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fbdc4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2fbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2fbdc8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBDC8u;
    {
        const bool branch_taken_0x2fbdc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDC8u;
        // 0x2fbdcc: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdc8) {
            ctx->pc = 0x2FBDE8u;
            goto label_2fbde8;
        }
    }
    ctx->pc = 0x2FBDD0u;
    // 0x2fbdd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fbdd4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2fbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2fbdd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fbddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fbde0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FBDE0u;
    {
        const bool branch_taken_0x2fbde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDE0u;
        // 0x2fbde4: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbde0) {
            ctx->pc = 0x2FBDECu;
            goto label_2fbdec;
        }
    }
    ctx->pc = 0x2FBDE8u;
label_2fbde8:
    // 0x2fbde8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2fbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_2fbdec:
    // 0x2fbdec: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbdecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbdf0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fbdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbdf4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBDF4u;
    {
        const bool branch_taken_0x2fbdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDF4u;
        // 0x2fbdf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdf4) {
            ctx->pc = 0x2FBDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbdb0;
        }
    }
    ctx->pc = 0x2FBDFCu;
label_2fbdfc:
    // 0x2fbdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbe00:
    // 0x2fbe00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbe00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbe04:
    // 0x2fbe04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbe04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbe08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fbe08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbe0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fbe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fbe10: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE10u;
        // 0x2fbe14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBE18u;
}
