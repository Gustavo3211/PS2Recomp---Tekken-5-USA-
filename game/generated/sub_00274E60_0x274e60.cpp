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

// Function: sub_00274E60
// Address: 0x274e60 - 0x274ed8
void sub_00274E60_0x274e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274E60_0x274e60");
#endif

    switch (ctx->pc) {
        case 0x274e90u: goto label_274e90;
        default: break;
    }

    ctx->pc = 0x274e60u;

    // 0x274e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274e64: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x274e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274e6c: 0x8c820268  lw          $v0, 0x268($a0)
    ctx->pc = 0x274e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x274e70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x274E70u;
    {
        const bool branch_taken_0x274e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E70u;
        // 0x274e74: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e70) {
            ctx->pc = 0x274EC8u;
            goto label_274ec8;
        }
    }
    ctx->pc = 0x274E78u;
    // 0x274e78: 0x8c82026c  lw          $v0, 0x26C($a0)
    ctx->pc = 0x274e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x274e7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x274e80: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x274E80u;
    {
        const bool branch_taken_0x274e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x274E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E80u;
        // 0x274e84: 0xac82026c  sw          $v0, 0x26C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e80) {
            ctx->pc = 0x274EB0u;
            goto label_274eb0;
        }
    }
    ctx->pc = 0x274E88u;
    // 0x274e88: 0xc09bb60  jal         func_26ED80
    ctx->pc = 0x274E88u;
    SET_GPR_U32(ctx, 31, 0x274E90u);
    ctx->pc = 0x26ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED80u, 0x274E88u, 0x274E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E90u;
label_274e90:
    // 0x274e90: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x274e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e98: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E98u;
        // 0x274e9c: 0xac600268  sw          $zero, 0x268($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274ECCu;
            goto label_274ecc;
        }
    }
    ctx->pc = 0x274EA0u;
    // 0x274ea0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274ea4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274EA4u;
    {
        const bool branch_taken_0x274ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EA4u;
        // 0x274ea8: 0xa4440006  sh          $a0, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ea4) {
            ctx->pc = 0x274EC0u;
            goto label_274ec0;
        }
    }
    ctx->pc = 0x274EACu;
    // 0x274eac: 0x0  nop
    ctx->pc = 0x274eacu;
    // NOP
label_274eb0:
    // 0x274eb0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274eb4: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x274eb8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x274EB8u;
    {
        const bool branch_taken_0x274eb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274eb8) {
            ctx->pc = 0x274EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274EB8u;
            // 0x274ebc: 0xac600268  sw          $zero, 0x268($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274EC0u;
            goto label_274ec0;
        }
    }
    ctx->pc = 0x274EC0u;
label_274ec0:
    // 0x274ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274EC0u;
    {
        const bool branch_taken_0x274ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EC0u;
        // 0x274ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ec0) {
            ctx->pc = 0x274ECCu;
            goto label_274ecc;
        }
    }
    ctx->pc = 0x274EC8u;
label_274ec8:
    // 0x274ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274ecc:
    // 0x274ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x274ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ED0u;
        // 0x274ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274ED8u;
}
