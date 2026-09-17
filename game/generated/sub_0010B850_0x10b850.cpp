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

// Function: sub_0010B850
// Address: 0x10b850 - 0x10b8e8
void sub_0010B850_0x10b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B850_0x10b850");
#endif

    switch (ctx->pc) {
        case 0x10b88cu: goto label_10b88c;
        default: break;
    }

    ctx->pc = 0x10b850u;

    // 0x10b850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b854: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b858: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10b858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b85c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b860: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b864: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x10b864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b868: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b86c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10b86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b870: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b874: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b87c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b880: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b884: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x10B884u;
    SET_GPR_U32(ctx, 31, 0x10B88Cu);
    ctx->pc = 0x10B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B884u;
    // 0x10b888: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0x10B884u, 0x10B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B88Cu;
label_10b88c:
    // 0x10b88c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x10b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x10b890: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x10b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10b894: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x10b894u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x10b898: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x10b898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
    // 0x10b89c: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x10b89cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x10b8a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b8a4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10b8a8: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x10b8a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x10b8ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10b8b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b8b4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x10b8b8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x10b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x10b8bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x10b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x10b8c0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x10b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x10b8c4: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x10b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x10b8c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10b8c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b8cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b8ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b8d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b8d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b8d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b8d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E0u;
        // 0x10b8e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8E8u;
}
