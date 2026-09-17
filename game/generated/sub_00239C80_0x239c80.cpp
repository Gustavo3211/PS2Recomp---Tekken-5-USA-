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

// Function: sub_00239C80
// Address: 0x239c80 - 0x239d10
void sub_00239C80_0x239c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239C80_0x239c80");
#endif

    switch (ctx->pc) {
        case 0x239ce4u: goto label_239ce4;
        case 0x239cf8u: goto label_239cf8;
        default: break;
    }

    ctx->pc = 0x239c80u;

    // 0x239c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239c84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x239c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239c8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c90: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x239c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239c98: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x239c98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x239c9c: 0x2610d660  addiu       $s0, $s0, -0x29A0
    ctx->pc = 0x239c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956640));
    // 0x239ca0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x239ca4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239ca8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x239ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x239cac: 0x2442d660  addiu       $v0, $v0, -0x29A0
    ctx->pc = 0x239cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
    // 0x239cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239cb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x239CB4u;
    {
        const bool branch_taken_0x239cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB4u;
        // 0x239cb8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cb4) {
            ctx->pc = 0x239CC8u;
            goto label_239cc8;
        }
    }
    ctx->pc = 0x239CBCu;
    // 0x239cbc: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x239cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x239cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239CC0u;
    {
        const bool branch_taken_0x239cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC0u;
        // 0x239cc4: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc0) {
            ctx->pc = 0x239CD0u;
            goto label_239cd0;
        }
    }
    ctx->pc = 0x239CC8u;
label_239cc8:
    // 0x239cc8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x239cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x239ccc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x239cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_239cd0:
    // 0x239cd0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x239cd4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x239CD4u;
    {
        const bool branch_taken_0x239cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239cd4) {
            ctx->pc = 0x239CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239CD4u;
            // 0x239cd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239CFCu;
            goto label_239cfc;
        }
    }
    ctx->pc = 0x239CDCu;
    // 0x239cdc: 0xc08e69e  jal         func_239A78
    ctx->pc = 0x239CDCu;
    SET_GPR_U32(ctx, 31, 0x239CE4u);
    ctx->pc = 0x239A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239A78u, 0x239CDCu, 0x239CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CE4u;
label_239ce4:
    // 0x239ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239CE8u;
    {
        const bool branch_taken_0x239ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE8u;
        // 0x239cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce8) {
            ctx->pc = 0x239CF8u;
            goto label_239cf8;
        }
    }
    ctx->pc = 0x239CF0u;
    // 0x239cf0: 0xc04320e  jal         func_10C838
    ctx->pc = 0x239CF0u;
    SET_GPR_U32(ctx, 31, 0x239CF8u);
    ctx->pc = 0x239CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CF0u;
    // 0x239cf4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C838u, 0x239CF0u, 0x239CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CF8u;
label_239cf8:
    // 0x239cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239cfc:
    // 0x239cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239d04: 0x3e00008  jr          $ra
    ctx->pc = 0x239D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D04u;
        // 0x239d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D0Cu;
    // 0x239d0c: 0x0  nop
    ctx->pc = 0x239d0cu;
    // NOP
    ctx->pc = 0x239d10u;
}
