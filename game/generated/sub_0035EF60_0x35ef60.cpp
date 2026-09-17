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

// Function: sub_0035EF60
// Address: 0x35ef60 - 0x35f000
void sub_0035EF60_0x35ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF60_0x35ef60");
#endif

    switch (ctx->pc) {
        case 0x35ef90u: goto label_35ef90;
        case 0x35efe0u: goto label_35efe0;
        default: break;
    }

    ctx->pc = 0x35ef60u;

    // 0x35ef60: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35ef60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35ef64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ef64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ef68: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35ef6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35ef74: 0x2c840040  sltiu       $a0, $a0, 0x40
    ctx->pc = 0x35ef74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ef78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ef7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EF7Cu;
    {
        const bool branch_taken_0x35ef7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF7Cu;
        // 0x35ef80: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef7c) {
            ctx->pc = 0x35EF98u;
            goto label_35ef98;
        }
    }
    ctx->pc = 0x35EF84u;
    // 0x35ef84: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ef88: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EF88u;
    SET_GPR_U32(ctx, 31, 0x35EF90u);
    ctx->pc = 0x35EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF88u;
    // 0x35ef8c: 0x248466c0  addiu       $a0, $a0, 0x66C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EF88u, 0x35EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF90u;
label_35ef90:
    // 0x35ef90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35EF90u;
    {
        const bool branch_taken_0x35ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF90u;
        // 0x35ef94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef90) {
            ctx->pc = 0x35EFA4u;
            goto label_35efa4;
        }
    }
    ctx->pc = 0x35EF98u;
label_35ef98:
    // 0x35ef98: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ef9c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35ef9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35efa0: 0x8c222c70  lw          $v0, 0x2C70($at)
    ctx->pc = 0x35efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11376)));
label_35efa4:
    // 0x35efa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35efa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35efa8: 0x3e00008  jr          $ra
    ctx->pc = 0x35EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFA8u;
        // 0x35efac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EFB0u;
    // 0x35efb0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35efb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35efb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35efb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35efb8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35efbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35efc4: 0x2c840040  sltiu       $a0, $a0, 0x40
    ctx->pc = 0x35efc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35efc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35efcc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EFCCu;
    {
        const bool branch_taken_0x35efcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFCCu;
        // 0x35efd0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efcc) {
            ctx->pc = 0x35EFE8u;
            goto label_35efe8;
        }
    }
    ctx->pc = 0x35EFD4u;
    // 0x35efd4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35efd8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EFD8u;
    SET_GPR_U32(ctx, 31, 0x35EFE0u);
    ctx->pc = 0x35EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFD8u;
    // 0x35efdc: 0x24846700  addiu       $a0, $a0, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EFD8u, 0x35EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFE0u;
label_35efe0:
    // 0x35efe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35EFE0u;
    {
        const bool branch_taken_0x35efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFE0u;
        // 0x35efe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efe0) {
            ctx->pc = 0x35EFF4u;
            goto label_35eff4;
        }
    }
    ctx->pc = 0x35EFE8u;
label_35efe8:
    // 0x35efe8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35efec: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35efecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35eff0: 0x8c222c6c  lw          $v0, 0x2C6C($at)
    ctx->pc = 0x35eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11372)));
label_35eff4:
    // 0x35eff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x35EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFF8u;
        // 0x35effc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F000u;
}
