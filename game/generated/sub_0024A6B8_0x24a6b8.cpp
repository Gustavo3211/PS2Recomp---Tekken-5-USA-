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

// Function: sub_0024A6B8
// Address: 0x24a6b8 - 0x24a708
void sub_0024A6B8_0x24a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A6B8_0x24a6b8");
#endif

    switch (ctx->pc) {
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6e4u: goto label_24a6e4;
        default: break;
    }

    ctx->pc = 0x24a6b8u;

    // 0x24a6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a6cc: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x24A6CCu;
    SET_GPR_U32(ctx, 31, 0x24A6D4u);
    ctx->pc = 0x24A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6CCu;
    // 0x24a6d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x24A6CCu, 0x24A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6D4u;
label_24a6d4:
    // 0x24a6d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A6D4u;
    {
        const bool branch_taken_0x24a6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a6d4) {
            ctx->pc = 0x24A6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A6D4u;
            // 0x24a6d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A6F0u;
            goto label_24a6f0;
        }
    }
    ctx->pc = 0x24A6DCu;
    // 0x24a6dc: 0xc08f110  jal         func_23C440
    ctx->pc = 0x24A6DCu;
    SET_GPR_U32(ctx, 31, 0x24A6E4u);
    ctx->pc = 0x24A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6DCu;
    // 0x24a6e0: 0x86100012  lh          $s0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C440u, 0x24A6DCu, 0x24A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6E4u;
label_24a6e4:
    // 0x24a6e4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x24a6e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x24a6e8: 0x2e110001  sltiu       $s1, $s0, 0x1
    ctx->pc = 0x24a6e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24a6ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24a6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a6f0:
    // 0x24a6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a6f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24A6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6FCu;
        // 0x24a700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A704u;
    // 0x24a704: 0x0  nop
    ctx->pc = 0x24a704u;
    // NOP
    ctx->pc = 0x24a708u;
}
