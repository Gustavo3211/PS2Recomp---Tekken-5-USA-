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

// Function: sub_002B7940
// Address: 0x2b7940 - 0x2b79b0
void sub_002B7940_0x2b7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7940_0x2b7940");
#endif

    switch (ctx->pc) {
        case 0x2b795cu: goto label_2b795c;
        case 0x2b7968u: goto label_2b7968;
        default: break;
    }

    ctx->pc = 0x2b7940u;

    // 0x2b7940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7944: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b7948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b794c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7954: 0xc0adf48  jal         func_2B7D20
    ctx->pc = 0x2B7954u;
    SET_GPR_U32(ctx, 31, 0x2B795Cu);
    ctx->pc = 0x2B7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7954u;
    // 0x2b7958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D20u, 0x2B7954u, 0x2B795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B795Cu;
label_2b795c:
    // 0x2b795c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7960: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x2B7960u;
    SET_GPR_U32(ctx, 31, 0x2B7968u);
    ctx->pc = 0x2B7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7960u;
    // 0x2b7964: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x2B7960u, 0x2B7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7968u;
label_2b7968:
    // 0x2b7968: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7968u;
    {
        const bool branch_taken_0x2b7968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7968u;
        // 0x2b796c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7968) {
            ctx->pc = 0x2B7988u;
            goto label_2b7988;
        }
    }
    ctx->pc = 0x2B7970u;
    // 0x2b7970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b797c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x2B797Cu;
    ctx->pc = 0x2B7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B797Cu;
    // 0x2b7980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B7984u;
    // 0x2b7984: 0x0  nop
    ctx->pc = 0x2b7984u;
    // NOP
label_2b7988:
    // 0x2b7988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b798c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b798cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7994: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7994u;
        // 0x2b7998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B799Cu;
    // 0x2b799c: 0x0  nop
    ctx->pc = 0x2b799cu;
    // NOP
    // 0x2b79a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b79a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79A4u;
        // 0x2b79a8: 0x2442dfb8  addiu       $v0, $v0, -0x2048 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79ACu;
    // 0x2b79ac: 0x0  nop
    ctx->pc = 0x2b79acu;
    // NOP
    ctx->pc = 0x2b79b0u;
}
