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

// Function: sub_00262658
// Address: 0x262658 - 0x2626b0
void sub_00262658_0x262658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262658_0x262658");
#endif

    switch (ctx->pc) {
        case 0x2626a4u: goto label_2626a4;
        default: break;
    }

    ctx->pc = 0x262658u;

    // 0x262658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26265c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26265cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262660: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262664: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x262664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26266c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x262670: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x262670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262674: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x262674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262678: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x262678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26267c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x26267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262680: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x262680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262684: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x262684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262688: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x262688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26268c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26268cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x262690: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x262690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262694: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x262694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x262698: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x262698u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26269c: 0xc08bfdc  jal         func_22FF70
    ctx->pc = 0x26269Cu;
    SET_GPR_U32(ctx, 31, 0x2626A4u);
    ctx->pc = 0x2626A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26269Cu;
    // 0x2626a0: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF70u, 0x26269Cu, 0x2626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626A4u;
label_2626a4:
    // 0x2626a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2626a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2626a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2626A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626A8u;
        // 0x2626ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626B0u;
}
