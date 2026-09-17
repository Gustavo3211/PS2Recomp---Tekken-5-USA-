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

// Function: sub_002EB880
// Address: 0x2eb880 - 0x2eb8d0
void sub_002EB880_0x2eb880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB880_0x2eb880");
#endif

    switch (ctx->pc) {
        case 0x2eb89cu: goto label_2eb89c;
        default: break;
    }

    ctx->pc = 0x2eb880u;

    // 0x2eb880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eb894: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EB894u;
    SET_GPR_U32(ctx, 31, 0x2EB89Cu);
    ctx->pc = 0x2EB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB894u;
    // 0x2eb898: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EB894u, 0x2EB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB89Cu;
label_2eb89c:
    // 0x2eb89c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eb8a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2eb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2eb8a4: 0x24420718  addiu       $v0, $v0, 0x718
    ctx->pc = 0x2eb8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1816));
    // 0x2eb8a8: 0x2463f4d0  addiu       $v1, $v1, -0xB30
    ctx->pc = 0x2eb8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964432));
    // 0x2eb8ac: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2eb8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2eb8b0: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x2eb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x2eb8b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2eb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2eb8b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb8bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eb8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB8CCu;
    // 0x2eb8cc: 0x0  nop
    ctx->pc = 0x2eb8ccu;
    // NOP
    ctx->pc = 0x2eb8d0u;
}
