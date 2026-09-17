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

// Function: sub_0023F2A8
// Address: 0x23f2a8 - 0x23f310
void sub_0023F2A8_0x23f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F2A8_0x23f2a8");
#endif

    switch (ctx->pc) {
        case 0x23f2c8u: goto label_23f2c8;
        case 0x23f2d4u: goto label_23f2d4;
        default: break;
    }

    ctx->pc = 0x23f2a8u;

    // 0x23f2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f2ac: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f2b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f2b8: 0x24502c80  addiu       $s0, $v0, 0x2C80
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x23f2bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f2c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f2c8:
    // 0x23f2c8: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x23f2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x23f2cc: 0xc08fc88  jal         func_23F220
    ctx->pc = 0x23F2CCu;
    SET_GPR_U32(ctx, 31, 0x23F2D4u);
    ctx->pc = 0x23F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2CCu;
    // 0x23f2d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F220u, 0x23F2CCu, 0x23F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2D4u;
label_23f2d4:
    // 0x23f2d4: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x23f2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x23f2d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F2D8u;
    {
        const bool branch_taken_0x23f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2D8u;
        // 0x23f2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2d8) {
            ctx->pc = 0x23F2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f2c8;
        }
    }
    ctx->pc = 0x23F2E0u;
    // 0x23f2e0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f2e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f2ec: 0x24423580  addiu       $v0, $v0, 0x3580
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
    // 0x23f2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f2f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x23f2f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x16358Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16358Cu, _value); } while (0);
    // 0x23f2f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x23f2f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x163588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163588u, _value); } while (0);
    // 0x23f2fc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x23f2fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x163594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163594u, _value); } while (0);
    // 0x23f300: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x23f300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x163590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163590u, _value); } while (0);
    // 0x23f304: 0x3e00008  jr          $ra
    ctx->pc = 0x23F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F304u;
        // 0x23f308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F30Cu;
    // 0x23f30c: 0x0  nop
    ctx->pc = 0x23f30cu;
    // NOP
    ctx->pc = 0x23f310u;
}
