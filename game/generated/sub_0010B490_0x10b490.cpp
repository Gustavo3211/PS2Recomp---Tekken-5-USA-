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

// Function: sub_0010B490
// Address: 0x10b490 - 0x10b508
void sub_0010B490_0x10b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B490_0x10b490");
#endif

    switch (ctx->pc) {
        case 0x10b4bcu: goto label_10b4bc;
        default: break;
    }

    ctx->pc = 0x10b490u;

    // 0x10b490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b494: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b49c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b4a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b4a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10b4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b4ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b4b4: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x10B4B4u;
    SET_GPR_U32(ctx, 31, 0x10B4BCu);
    ctx->pc = 0x10B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4B4u;
    // 0x10b4b8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0x10B4B4u, 0x10B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4BCu;
label_10b4bc:
    // 0x10b4bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10b4c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b4c4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x10b4c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x10b4c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10b4cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10b4d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x10b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10b4d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b4d8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x10b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x10b4dc: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x10b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x10b4e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10b4e4: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x10b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x10b4e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b4e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b4ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b4ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b4f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b4f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10b4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4FCu;
        // 0x10b500: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B504u;
    // 0x10b504: 0x0  nop
    ctx->pc = 0x10b504u;
    // NOP
    ctx->pc = 0x10b508u;
}
