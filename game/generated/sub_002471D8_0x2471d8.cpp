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

// Function: sub_002471D8
// Address: 0x2471d8 - 0x247228
void sub_002471D8_0x2471d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002471D8_0x2471d8");
#endif

    switch (ctx->pc) {
        case 0x24720cu: goto label_24720c;
        default: break;
    }

    ctx->pc = 0x2471d8u;

    // 0x2471d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2471d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2471dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2471e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2471e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2471e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2471e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2471e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2471ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2471ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2471f0: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2471F0u;
    {
        const bool branch_taken_0x2471f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2471f0) {
            ctx->pc = 0x2471F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2471F0u;
            // 0x2471f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x2471F8u;
    // 0x2471f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2471f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2471fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2471FCu;
    {
        const bool branch_taken_0x2471fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x247200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471FCu;
        // 0x247200: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471fc) {
            ctx->pc = 0x247214u;
            goto label_247214;
        }
    }
    ctx->pc = 0x247204u;
    // 0x247204: 0xc092a40  jal         func_24A900
    ctx->pc = 0x247204u;
    SET_GPR_U32(ctx, 31, 0x24720Cu);
    ctx->pc = 0x247208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247204u;
    // 0x247208: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A900u, 0x247204u, 0x24720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24720Cu;
label_24720c:
    // 0x24720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247210: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x247210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_247214:
    // 0x247214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247218:
    // 0x247218: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24721c: 0x3e00008  jr          $ra
    ctx->pc = 0x24721Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24721Cu;
        // 0x247220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24721Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247224u;
    // 0x247224: 0x0  nop
    ctx->pc = 0x247224u;
    // NOP
    ctx->pc = 0x247228u;
}
