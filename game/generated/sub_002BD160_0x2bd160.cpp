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

// Function: sub_002BD160
// Address: 0x2bd160 - 0x2bd1b0
void sub_002BD160_0x2bd160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD160_0x2bd160");
#endif

    switch (ctx->pc) {
        case 0x2bd188u: goto label_2bd188;
        default: break;
    }

    ctx->pc = 0x2bd160u;

    // 0x2bd160: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2bd164: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2bd164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2bd168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd16c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd170: 0x24677b78  addiu       $a3, $v1, 0x7B78
    ctx->pc = 0x2bd170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31608));
    // 0x2bd174: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2bd174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd178: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2bd178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd17c: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2bd17cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2bd180: 0xac25caf8  sw          $a1, -0x3508($at)
    ctx->pc = 0x2bd180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953720), GPR_U32(ctx, 5));
    // 0x2bd184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bd184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd188:
    // 0x2bd188: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2bd18c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bd190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd194: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2bd194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bd198: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2bd198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bd19c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BD19Cu;
    {
        const bool branch_taken_0x2bd19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD19Cu;
        // 0x2bd1a0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd19c) {
            ctx->pc = 0x2BD188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd188;
        }
    }
    ctx->pc = 0x2BD1A4u;
    // 0x2bd1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD1ACu;
    // 0x2bd1ac: 0x0  nop
    ctx->pc = 0x2bd1acu;
    // NOP
    ctx->pc = 0x2bd1b0u;
}
