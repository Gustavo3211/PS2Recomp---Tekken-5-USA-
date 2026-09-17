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

// Function: sub_002CEFA8
// Address: 0x2cefa8 - 0x2ceff0
void sub_002CEFA8_0x2cefa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEFA8_0x2cefa8");
#endif

    switch (ctx->pc) {
        case 0x2cefbcu: goto label_2cefbc;
        case 0x2cefe0u: goto label_2cefe0;
        default: break;
    }

    ctx->pc = 0x2cefa8u;

    // 0x2cefa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cefa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cefac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cefacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cefb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cefb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cefb4: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CEFB4u;
    SET_GPR_U32(ctx, 31, 0x2CEFBCu);
    ctx->pc = 0x2CEFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFB4u;
    // 0x2cefb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CEFB4u, 0x2CEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFBCu;
label_2cefbc:
    // 0x2cefbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cefc0: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2cefc4: 0x8c63a850  lw          $v1, -0x57B0($v1)
    ctx->pc = 0x2cefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944848)));
    // 0x2cefc8: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x2cefc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x2cefcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEFCCu;
    {
        const bool branch_taken_0x2cefcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFCCu;
        // 0x2cefd0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefcc) {
            ctx->pc = 0x2CEFE0u;
            goto label_2cefe0;
        }
    }
    ctx->pc = 0x2CEFD4u;
    // 0x2cefd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2cefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cefd8: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEFD8u;
    SET_GPR_U32(ctx, 31, 0x2CEFE0u);
    ctx->pc = 0x2CEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFD8u;
    // 0x2cefdc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEFD8u, 0x2CEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFE0u;
label_2cefe0:
    // 0x2cefe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cefe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cefe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cefe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cefe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFE8u;
        // 0x2cefec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEFF0u;
}
