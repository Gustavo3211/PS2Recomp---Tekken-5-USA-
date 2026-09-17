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

// Function: sub_002F40D8
// Address: 0x2f40d8 - 0x2f4130
void sub_002F40D8_0x2f40d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F40D8_0x2f40d8");
#endif

    switch (ctx->pc) {
        case 0x2f40f4u: goto label_2f40f4;
        case 0x2f411cu: goto label_2f411c;
        default: break;
    }

    ctx->pc = 0x2f40d8u;

    // 0x2f40d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f40dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f40dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f40e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f40e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f40e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f40e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f40ec: 0xc0bcf46  jal         func_2F3D18
    ctx->pc = 0x2F40ECu;
    SET_GPR_U32(ctx, 31, 0x2F40F4u);
    ctx->pc = 0x2F40F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40ECu;
    // 0x2f40f0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D18u, 0x2F40ECu, 0x2F40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40F4u;
label_2f40f4:
    // 0x2f40f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2f40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2f40f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f40f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40fc: 0x248412a8  addiu       $a0, $a0, 0x12A8
    ctx->pc = 0x2f40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    // 0x2f4100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f4100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4104: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f4104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f410c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F410Cu;
    {
        const bool branch_taken_0x2f410c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F410Cu;
        // 0x2f4110: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f410c) {
            ctx->pc = 0x2F411Cu;
            goto label_2f411c;
        }
    }
    ctx->pc = 0x2F4114u;
    // 0x2f4114: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F4114u;
    SET_GPR_U32(ctx, 31, 0x2F411Cu);
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F4114u, 0x2F411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F411Cu;
label_2f411c:
    // 0x2f411c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f411cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f4120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4128: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4128u;
        // 0x2f412c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4130u;
}
