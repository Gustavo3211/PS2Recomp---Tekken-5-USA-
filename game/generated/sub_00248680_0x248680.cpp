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

// Function: sub_00248680
// Address: 0x248680 - 0x2486c8
void sub_00248680_0x248680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248680_0x248680");
#endif

    switch (ctx->pc) {
        case 0x24869cu: goto label_24869c;
        case 0x2486b0u: goto label_2486b0;
        default: break;
    }

    ctx->pc = 0x248680u;

    // 0x248680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24868c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x248690: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x248690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x248694: 0xc09211c  jal         func_248470
    ctx->pc = 0x248694u;
    SET_GPR_U32(ctx, 31, 0x24869Cu);
    ctx->pc = 0x248698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248694u;
    // 0x248698: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x248470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248470u, 0x248694u, 0x24869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24869Cu;
label_24869c:
    // 0x24869c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486a0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2486a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2486a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2486a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486a8: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x2486A8u;
    SET_GPR_U32(ctx, 31, 0x2486B0u);
    ctx->pc = 0x2486ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486A8u;
    // 0x2486ac: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x2486A8u, 0x2486B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486B0u;
label_2486b0:
    // 0x2486b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2486b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2486b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2486b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2486b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2486bc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2486bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2486c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2486C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486C0u;
        // 0x2486c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2486C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2486C8u;
}
