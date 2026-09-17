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

// Function: sub_002370B8
// Address: 0x2370b8 - 0x237128
void sub_002370B8_0x2370b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002370B8_0x2370b8");
#endif

    switch (ctx->pc) {
        case 0x2370f0u: goto label_2370f0;
        case 0x237108u: goto label_237108;
        default: break;
    }

    ctx->pc = 0x2370b8u;

    // 0x2370b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2370b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2370bc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2370bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2370c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2370c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2370c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2370c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2370cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2370d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2370d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2370d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2370dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2370e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2370e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2370e8: 0xc08dba4  jal         func_236E90
    ctx->pc = 0x2370E8u;
    SET_GPR_U32(ctx, 31, 0x2370F0u);
    ctx->pc = 0x2370ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370E8u;
    // 0x2370ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E90u, 0x2370E8u, 0x2370F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370F0u;
label_2370f0:
    // 0x2370f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2370f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2370f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2370f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2370f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2370f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2370fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237100: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x237100u;
    SET_GPR_U32(ctx, 31, 0x237108u);
    ctx->pc = 0x237104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237100u;
    // 0x237104: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x237100u, 0x237108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237108u;
label_237108:
    // 0x237108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23710c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23710cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237110: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x237110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237114: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x237114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x237118: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23711c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23711cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237120: 0x3e00008  jr          $ra
    ctx->pc = 0x237120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237128u;
}
