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

// Function: sub_00321EB8
// Address: 0x321eb8 - 0x321f28
void sub_00321EB8_0x321eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321EB8_0x321eb8");
#endif

    switch (ctx->pc) {
        case 0x321ef4u: goto label_321ef4;
        default: break;
    }

    ctx->pc = 0x321eb8u;

    // 0x321eb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x321eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x321ebc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321ec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321ec8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x321ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x321ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321ed4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x321ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321edc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321EDCu;
    {
        const bool branch_taken_0x321edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EDCu;
        // 0x321ee0: 0x26040a00  addiu       $a0, $s0, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321edc) {
            ctx->pc = 0x321EECu;
            goto label_321eec;
        }
    }
    ctx->pc = 0x321EE4u;
    // 0x321ee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x321ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x321ee8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_321eec:
    // 0x321eec: 0xc0cf0ec  jal         func_33C3B0
    ctx->pc = 0x321EECu;
    SET_GPR_U32(ctx, 31, 0x321EF4u);
    ctx->pc = 0x33C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C3B0u, 0x321EECu, 0x321EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321EF4u;
label_321ef4:
    // 0x321ef4: 0x26041500  addiu       $a0, $s0, 0x1500
    ctx->pc = 0x321ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x321ef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321efc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321F00u;
    {
        const bool branch_taken_0x321f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F00u;
        // 0x321f04: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f00) {
            ctx->pc = 0x321F10u;
            goto label_321f10;
        }
    }
    ctx->pc = 0x321F08u;
    // 0x321f08: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x321f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x321f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321f10:
    // 0x321f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x321F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F1Cu;
        // 0x321f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F24u;
    // 0x321f24: 0x0  nop
    ctx->pc = 0x321f24u;
    // NOP
    ctx->pc = 0x321f28u;
}
