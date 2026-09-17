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

// Function: sub_002244D8
// Address: 0x2244d8 - 0x224518
void sub_002244D8_0x2244d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002244D8_0x2244d8");
#endif

    switch (ctx->pc) {
        case 0x224508u: goto label_224508;
        default: break;
    }

    ctx->pc = 0x2244d8u;

    // 0x2244d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2244dc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2244dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2244e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2244e4: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x2244e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2244e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2244e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2244ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2244ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2244f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2244F0u;
    {
        const bool branch_taken_0x2244f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244F0u;
        // 0x2244f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244f0) {
            ctx->pc = 0x224508u;
            goto label_224508;
        }
    }
    ctx->pc = 0x2244F8u;
    // 0x2244f8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2244f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2244fc: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x2244fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x224500: 0xc0891d6  jal         func_224758
    ctx->pc = 0x224500u;
    SET_GPR_U32(ctx, 31, 0x224508u);
    ctx->pc = 0x224504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224500u;
    // 0x224504: 0x2484d420  addiu       $a0, $a0, -0x2BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224758u, 0x224500u, 0x224508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224508u;
label_224508:
    // 0x224508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22450c: 0x3e00008  jr          $ra
    ctx->pc = 0x22450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22450Cu;
        // 0x224510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22450Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224514u;
    // 0x224514: 0x0  nop
    ctx->pc = 0x224514u;
    // NOP
    ctx->pc = 0x224518u;
}
