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

// Function: sub_00344CA0
// Address: 0x344ca0 - 0x344d08
void sub_00344CA0_0x344ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344CA0_0x344ca0");
#endif

    switch (ctx->pc) {
        case 0x344ce0u: goto label_344ce0;
        default: break;
    }

    ctx->pc = 0x344ca0u;

    // 0x344ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344cac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344cb0: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x344cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x344cb4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x344cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x344cb8: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x344CB8u;
    {
        const bool branch_taken_0x344cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344cb8) {
            ctx->pc = 0x344CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344CB8u;
            // 0x344cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344DA4u;
            return;
        }
    }
    ctx->pc = 0x344CC0u;
    // 0x344cc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x344cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x344cc4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x344cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x344cc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x344cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x344ccc: 0x8c634a60  lw          $v1, 0x4A60($v1)
    ctx->pc = 0x344cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19040)));
    // 0x344cd0: 0x600008  jr          $v1
    ctx->pc = 0x344CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x344CD8u: goto label_344cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344CD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x344CD8u;
label_344cd8:
    // 0x344cd8: 0xc0d1302  jal         func_344C08
    ctx->pc = 0x344CD8u;
    SET_GPR_U32(ctx, 31, 0x344CE0u);
    ctx->pc = 0x344CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CD8u;
    // 0x344cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344C08u, 0x344CD8u, 0x344CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CE0u;
label_344ce0:
    // 0x344ce0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x344CE0u;
    {
        const bool branch_taken_0x344ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CE0u;
        // 0x344ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ce0) {
            ctx->pc = 0x344DA0u;
            return;
        }
    }
    ctx->pc = 0x344CE8u;
    // 0x344ce8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x344ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x344cec: 0xa2020047  sb          $v0, 0x47($s0)
    ctx->pc = 0x344cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x344cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344cf4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x344cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x344cf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d00: 0x80d2390  j           func_348E40
    ctx->pc = 0x344D00u;
    ctx->pc = 0x344D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D00u;
    // 0x344d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E40u;
    sub_00348E40_0x348e40(rdram, ctx, runtime); return;
    ctx->pc = 0x344D08u;
}
