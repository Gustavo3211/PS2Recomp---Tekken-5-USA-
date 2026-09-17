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

// Function: sub_00130268
// Address: 0x130268 - 0x1302c8
void sub_00130268_0x130268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130268_0x130268");
#endif

    switch (ctx->pc) {
        case 0x13028cu: goto label_13028c;
        case 0x1302a4u: goto label_1302a4;
        default: break;
    }

    ctx->pc = 0x130268u;

    // 0x130268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13026c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x13026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130274: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x130274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x130278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0080u));
    // 0x13027c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13027Cu;
    {
        const bool branch_taken_0x13027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13027Cu;
        // 0x130280: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13027c) {
            ctx->pc = 0x1302A4u;
            goto label_1302a4;
        }
    }
    ctx->pc = 0x130284u;
    // 0x130284: 0xc04c2f8  jal         func_130BE0
    ctx->pc = 0x130284u;
    SET_GPR_U32(ctx, 31, 0x13028Cu);
    ctx->pc = 0x130BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BE0u, 0x130284u, 0x13028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13028Cu;
label_13028c:
    // 0x13028c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x13028cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130290: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x130294: 0x24a5f310  addiu       $a1, $a1, -0xCF0
    ctx->pc = 0x130294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963984));
    // 0x130298: 0x24c65570  addiu       $a2, $a2, 0x5570
    ctx->pc = 0x130298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21872));
    // 0x13029c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x13029Cu;
    SET_GPR_U32(ctx, 31, 0x1302A4u);
    ctx->pc = 0x1302A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13029Cu;
    // 0x1302a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x13029Cu, 0x1302A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302A4u;
label_1302a4:
    // 0x1302a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1302a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1302a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1302acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1302b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1302B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302B0u;
        // 0x1302b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1302B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1302B8u;
    // 0x1302b8: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1302bc: 0x24634c28  addiu       $v1, $v1, 0x4C28
    ctx->pc = 0x1302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19496));
    // 0x1302c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1302C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302C0u;
        // 0x1302c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1302C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1302C8u;
}
