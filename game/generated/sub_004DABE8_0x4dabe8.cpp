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

// Function: sub_004DABE8
// Address: 0x4dabe8 - 0x4dac20
void sub_004DABE8_0x4dabe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DABE8_0x4dabe8");
#endif

    switch (ctx->pc) {
        case 0x4dabfcu: goto label_4dabfc;
        default: break;
    }

    ctx->pc = 0x4dabe8u;

    // 0x4dabe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dabe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dabec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dabecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dabf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dabf4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DABF4u;
    SET_GPR_U32(ctx, 31, 0x4DABFCu);
    ctx->pc = 0x4DABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DABF4u;
    // 0x4dabf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DABF4u, 0x4DABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DABFCu;
label_4dabfc:
    // 0x4dabfc: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4dabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4dac00: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x4dac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x4dac04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dac04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dac08: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4dac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4dac0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dac0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dac10: 0xa443016a  sh          $v1, 0x16A($v0)
    ctx->pc = 0x4dac10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dac14: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x4dac14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dac18: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAC18u;
        // 0x4dac1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAC20u;
}
