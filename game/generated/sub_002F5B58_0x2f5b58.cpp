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

// Function: sub_002F5B58
// Address: 0x2f5b58 - 0x2f5bd0
void sub_002F5B58_0x2f5b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5B58_0x2f5b58");
#endif

    switch (ctx->pc) {
        case 0x2f5b6cu: goto label_2f5b6c;
        case 0x2f5bb4u: goto label_2f5bb4;
        case 0x2f5bbcu: goto label_2f5bbc;
        default: break;
    }

    ctx->pc = 0x2f5b58u;

    // 0x2f5b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f5b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f5b64: 0xc0bbf56  jal         func_2EFD58
    ctx->pc = 0x2F5B64u;
    SET_GPR_U32(ctx, 31, 0x2F5B6Cu);
    ctx->pc = 0x2F5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B64u;
    // 0x2f5b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD58u, 0x2F5B64u, 0x2F5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B6Cu;
label_2f5b6c:
    // 0x2f5b6c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2f5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2f5b70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5B70u;
    {
        const bool branch_taken_0x2f5b70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B70u;
        // 0x2f5b74: 0x26050148  addiu       $a1, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b70) {
            ctx->pc = 0x2F5B84u;
            goto label_2f5b84;
        }
    }
    ctx->pc = 0x2F5B78u;
    // 0x2f5b78: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x2f5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x2f5b7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5b80: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x2f5b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_2f5b84:
    // 0x2f5b84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5b88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B88u;
            // 0x2f5b8c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5BA4u;
            goto label_2f5ba4;
        }
    }
    ctx->pc = 0x2F5B90u;
    // 0x2f5b90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f5b94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f5b98: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5B98u;
    {
        const bool branch_taken_0x2f5b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5b98) {
            ctx->pc = 0x2F5BACu;
            goto label_2f5bac;
        }
    }
    ctx->pc = 0x2F5BA0u;
    // 0x2f5ba0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f5ba4:
    // 0x2f5ba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ba8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f5bac:
    // 0x2f5bac: 0xc0bd3d6  jal         func_2F4F58
    ctx->pc = 0x2F5BACu;
    SET_GPR_U32(ctx, 31, 0x2F5BB4u);
    ctx->pc = 0x2F5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BACu;
    // 0x2f5bb0: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4F58u, 0x2F5BACu, 0x2F5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BB4u;
label_2f5bb4:
    // 0x2f5bb4: 0xc0bd6d0  jal         func_2F5B40
    ctx->pc = 0x2F5BB4u;
    SET_GPR_U32(ctx, 31, 0x2F5BBCu);
    ctx->pc = 0x2F5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BB4u;
    // 0x2f5bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5B40u, 0x2F5BB4u, 0x2F5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BBCu;
label_2f5bbc:
    // 0x2f5bbc: 0xa2020157  sb          $v0, 0x157($s0)
    ctx->pc = 0x2f5bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 343), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5bc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f5bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BC8u;
        // 0x2f5bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5BD0u;
}
