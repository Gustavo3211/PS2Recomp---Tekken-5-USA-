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

// Function: sub_002EE170
// Address: 0x2ee170 - 0x2ee1b8
void sub_002EE170_0x2ee170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE170_0x2ee170");
#endif

    switch (ctx->pc) {
        case 0x2ee190u: goto label_2ee190;
        default: break;
    }

    ctx->pc = 0x2ee170u;

    // 0x2ee170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee17c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ee17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee188: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2EE188u;
    SET_GPR_U32(ctx, 31, 0x2EE190u);
    ctx->pc = 0x2EE18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE188u;
    // 0x2ee18c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EE188u, 0x2EE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE190u;
label_2ee190:
    // 0x2ee190: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ee190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ee194: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2ee194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2ee198: 0xae110094  sw          $s1, 0x94($s0)
    ctx->pc = 0x2ee198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 17));
    // 0x2ee19c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2ee19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x2ee1a0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x2ee1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x2ee1a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee1ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1B0u;
        // 0x2ee1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE1B8u;
}
