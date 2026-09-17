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

// Function: sub_002FB278
// Address: 0x2fb278 - 0x2fb2d0
void sub_002FB278_0x2fb278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB278_0x2fb278");
#endif

    switch (ctx->pc) {
        case 0x2fb2a0u: goto label_2fb2a0;
        case 0x2fb2b0u: goto label_2fb2b0;
        default: break;
    }

    ctx->pc = 0x2fb278u;

    // 0x2fb278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fb280: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x2fb280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
    // 0x2fb284: 0x2610ec00  addiu       $s0, $s0, -0x1400
    ctx->pc = 0x2fb284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962176));
    // 0x2fb288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fb288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fb28c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2fb28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2fb290: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2fb290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fb294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fb294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fb298: 0xc0becb4  jal         func_2FB2D0
    ctx->pc = 0x2FB298u;
    SET_GPR_U32(ctx, 31, 0x2FB2A0u);
    ctx->pc = 0x2FB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB298u;
    // 0x2fb29c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB2D0u, 0x2FB298u, 0x2FB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2A0u;
label_2fb2a0:
    // 0x2fb2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb2a4: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2fb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2fb2a8: 0xc0becb4  jal         func_2FB2D0
    ctx->pc = 0x2FB2A8u;
    SET_GPR_U32(ctx, 31, 0x2FB2B0u);
    ctx->pc = 0x2FB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2A8u;
    // 0x2fb2ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB2D0u, 0x2FB2A8u, 0x2FB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B0u;
label_2fb2b0:
    // 0x2fb2b0: 0x4600a069  min.s       $f1, $f20, $f0
    ctx->pc = 0x2fb2b0u;
    ctx->f[1] = std::min(ctx->f[20], ctx->f[0]);
    // 0x2fb2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb2b8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2fb2b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2fb2bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fb2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fb2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb2c4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2fb2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C8u;
        // 0x2fb2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB2D0u;
}
